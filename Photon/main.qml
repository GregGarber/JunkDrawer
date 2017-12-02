import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0

ApplicationWindow {
    objectName: "applicationWindow"
    visible: true
    width: 480
    height: 800
    property alias label: label
    property alias lights: lights
    property alias effects: effects
    title: qsTr("Photon")

    SwipeView {
        objectName: "swipeView"
        id: swipeView
        anchors.fill: parent
        currentIndex: tabBar.currentIndex

        Lights {
            id: lights
        }

        Effects {
            id: effects
        }

        Hub {
            id:hub
        }

        Sensors {
            id:sensors
        }

        Page {
            Label {
                id: label
                text: qsTr("Second page")
                anchors.centerIn: parent
            }
        }
    }

    footer: TabBar {
        objectName: "tabBar"
        id: tabBar
        currentIndex: swipeView.currentIndex
        TabButton {
            text: qsTr("Lights")
        }
        TabButton {
            text: qsTr("Effects")
        }
        TabButton {
            text: qsTr("Hub")
        }
        TabButton {
            text: qsTr("Sensors")
        }
        TabButton {
            text: qsTr("Groups")
        }
    }

    Component.onCompleted: {
        request('http://'+hub.textInputUrl.text+'/api/'+hub.textInputKey.text+'/',
            'GET', '', function(x){
                var jp = JSON.parse(x.responseText);
                lights.initLights(jp.lights);
                effects.initLights(jp.lights);
                sensors.initSensors(jp.sensors)
            });
    }

    function request(url, method, data, callback) {
        console.log("Init color light form");
        var xhr = new XMLHttpRequest();
        xhr.onreadystatechange = (function(myxhr) {
            return function() {
                if(myxhr.readyState === 4){
                    //console.log(myxhr.responseText);
                    callback(myxhr)
                }
            }
        })(xhr);
        xhr.open(method, url, true);
        xhr.send(data);
    }
}

/*
{
    "lights": {
    "1": {
        "state": {
        "on": false,
        "bri": 254,
        "alert": "none",
        "reachable": true
        },
        "type": "Dimmable light",
        "name": "Bedroom",
        "modelid": "LWB014",
        "manufacturername": "Philips",
        "uniqueid": "00:17:88:01:02:3e:39:bc-0b",
        "swversion": "1.15.0_r18729",
        "swconfigid": "D1D2055F",
        "productid": "Philips-LWB014-1-A19DLv3"
    },
    "2": {
        "state": {
        "on": false,
        "bri": 254,
        "alert": "none",
        "reachable": true
        },
        "type": "Dimmable light",
        "name": "Kitchen",
        "modelid": "LWB014",
        "manufacturername": "Philips",
        "uniqueid": "00:17:88:01:02:3a:84:1b-0b",
        "swversion": "1.15.0_r18729",
        "swconfigid": "D1D2055F",
        "productid": "Philips-LWB014-1-A19DLv3"
    },
    "3": {
        "state": {
        "on": false,
        "bri": 173,
        "hue": 16408,
        "sat": 191,
        "effect": "none",
        "xy": [
            0.4852,
            0.4593
        ],
        "alert": "none",
        "colormode": "hs",
        "reachable": true
        },
        "type": "Color light",
        "name": "Livingroom",
        "modelid": "LLC011",
        "manufacturername": "Philips",
        "uniqueid": "00:17:88:01:00:1d:34:82-0b",
        "swversion": "5.23.1.13452"
    },
    "4": {
        "state": {
        "on": true,
        "bri": 163,
        "hue": 0,
        "sat": 220,
        "effect": "none",
        "xy": [
            0.6499,
            0.3175
        ],
        "ct": 153,
        "alert": "none",
        "colormode": "hs",
        "reachable": true
        },
        "type": "Extended color light",
        "name": "Lamp",
        "modelid": "LCT014",
        "manufacturername": "Philips",
        "uniqueid": "00:17:88:01:02:35:61:ac-0b",
        "swversion": "1.15.2_r19181",
        "swconfigid": "A315E69E",
        "productid": "Philips-LCT014-1-A19ECLv4"
    },
    "5": {
        "state": {
        "on": true,
        "bri": 153,
        "hue": 0,
        "sat": 254,
        "effect": "none",
        "xy": [
            0.6915,
            0.3083
        ],
        "ct": 153,
        "alert": "none",
        "colormode": "hs",
        "reachable": true
        },
        "type": "Extended color light",
        "name": "Floor. Lamp",
        "modelid": "LCT014",
        "manufacturername": "Philips",
        "uniqueid": "00:17:88:01:02:33:bb:a3-0b",
        "swversion": "1.15.2_r19181",
        "swconfigid": "A315E69E",
        "productid": "Philips-LCT014-1-A19ECLv4"
    }
    },
    "groups": {
    "1": {
        "name": "lights",
        "lights": [
        "1",
        "2",
        "3"
        ],
        "type": "LightGroup",
        "state": {
        "all_on": false,
        "any_on": false
        },
        "recycle": false,
        "action": {
        "on": false,
        "bri": 173,
        "hue": 16408,
        "sat": 191,
        "effect": "none",
        "xy": [
            0.4852,
            0.4593
        ],
        "alert": "none",
        "colormode": "hs"
        }
    },
    "2": {
        "name": "main lights",
        "lights": [
        "2",
        "3"
        ],
        "type": "LightGroup",
        "state": {
        "all_on": false,
        "any_on": false
        },
        "recycle": false,
        "action": {
        "on": false,
        "bri": 173,
        "hue": 16408,
        "sat": 191,
        "effect": "none",
        "xy": [
            0.4852,
            0.4593
        ],
        "alert": "none",
        "colormode": "hs"
        }
    },
    "3": {
        "name": "kitchen and bedroom",
        "lights": [
        "1",
        "2"
        ],
        "type": "LightGroup",
        "state": {
        "all_on": false,
        "any_on": false
        },
        "recycle": false,
        "action": {
        "on": false,
        "bri": 254,
        "alert": "none"
        }
    },
    "4": {
        "name": "bedroom and kitchen",
        "lights": [
        "1",
        "2"
        ],
        "type": "LightGroup",
        "state": {
        "all_on": false,
        "any_on": false
        },
        "recycle": false,
        "action": {
        "on": false,
        "bri": 254,
        "alert": "none"
        }
    }
    },
    "config": {
    "name": "Philips hue",
    "zigbeechannel": 15,
    "bridgeid": "001788FFFE46BEC8",
    "mac": "00:17:88:46:be:c8",
    "dhcp": true,
    "ipaddress": "192.168.1.185",
    "netmask": "255.255.255.0",
    "gateway": "192.168.1.1",
    "proxyaddress": "none",
    "proxyport": 0,
    "UTC": "2017-03-10T13:01:54",
    "localtime": "2017-03-10T06:01:54",
    "timezone": "America/Boise",
    "modelid": "BSB002",
    "swversion": "01033990",
    "apiversion": "1.14.0",
    "swupdate": {
        "updatestate": 0,
        "checkforupdate": false,
        "devicetypes": {
        "bridge": false,
        "lights": [],
        "sensors": []
        },
        "url": "",
        "text": "",
        "notify": false
    },
    "linkbutton": false,
    "portalservices": false,
    "portalconnection": "connected",
    "portalstate": {
        "signedon": true,
        "incoming": false,
        "outgoing": true,
        "communication": "disconnected"
    },
    "factorynew": false,
    "replacesbridgeid": null,
    "backup": {
        "status": "idle",
        "errorcode": 0
    },
    "whitelist": {
        "FzDq2O8VoyNJzWg7EI2GDEftnuvLZuBtvDjMPkob": {
        "last use date": "2017-03-10T13:01:54",
        "create date": "2016-12-20T04:44:39",
        "name": "my_hue_app#iphone peter"
        },
        "usArLpdE2yasS1L-une30dy79xuzVTCSNbXt-ELY": {
        "last use date": "2017-01-20T06:28:55",
        "create date": "2016-12-20T06:37:40",
        "name": "ChromeHueRemote#ChromeBrowser"
        },
        "MMldXkx8c7KLto5zquLKg11fbpNtlxC2Y3jQ-1cO": {
        "last use date": "2016-12-20T07:30:31",
        "create date": "2016-12-20T07:22:50",
        "name": "Hue Light Finder#PC"
        },
        "4vdytN48cdtAvzB-FzZbtIgPA7RS-TM28Lh0Ywdf": {
        "last use date": "2016-12-21T15:30:31",
        "create date": "2016-12-21T15:12:49",
        "name": "Echo"
        },
        "6qj3LEjY8NzCZYnvMetUQvUnCkqcnLZQv4LAM56g": {
        "last use date": "2016-12-21T15:15:31",
        "create date": "2016-12-21T15:12:51",
        "name": "Echo"
        },
        "7NSZYavRj5kYfirwVc5qIwFhXlQU-rgwKN86ygZQ": {
        "last use date": "2016-12-21T15:15:31",
        "create date": "2016-12-21T15:12:51",
        "name": "Echo"
        },
        "DWrjjpVxxNz7-mvMoUtK94QHA7H4NUMIFg5CHSDy": {
        "last use date": "2016-12-21T15:15:31",
        "create date": "2016-12-21T15:12:52",
        "name": "Echo"
        },
        "-x3QdI2wNP39t4UrCnCGIaEBbX3gvZPrC8zXvMZS": {
        "last use date": "2017-03-10T12:29:03",
        "create date": "2016-12-21T15:12:52",
        "name": "Echo"
        },
        "TMwzEMMhEICfts38Iz5416lC6M7rr2VINO0bvkla": {
        "last use date": "2017-02-10T05:28:58",
        "create date": "2017-01-20T06:55:03",
        "name": "python_hue"
        },
        "CEeNkjFO53WnQF8erqYFKnXGuWkLCnAPKaQIrjmw": {
        "last use date": "2017-02-17T21:28:59",
        "create date": "2017-02-11T13:02:07",
        "name": "Hue#Motorola DROIDX"
        }
    }
    },
    "schedules": {
    "0948997453999014": {
        "name": "Alarm",
        "description": "Feet up",
        "command": {
        "address": "/api/CEeNkjFO53WnQF8erqYFKnXGuWkLCnAPKaQIrjmw/groups/0/action",
        "body": {
            "scene": "3cdcbc69a-on-5"
        },
        "method": "PUT"
        },
        "localtime": "2017-02-11T07:00:00",
        "time": "2017-02-11T14:00:00",
        "created": "2017-02-11T13:22:50",
        "status": "disabled",
        "autodelete": false,
        "recycle": false
    }
    },
    "scenes": {
    "f253e5e8e-on-0": {
        "name": "Sunset on 1486818561838",
        "lights": [
        "1"
        ],
        "owner": "CEeNkjFO53WnQF8erqYFKnXGuWkLCnAPKaQIrjmw",
        "recycle": true,
        "locked": false,
        "appdata": {},
        "picture": "",
        "lastupdated": "2017-02-11T13:09:05",
        "version": 1
    },
    "eccbc87e4-off-0": {
        "name": "New sceneviolet off 148681883230",
        "lights": [
        "3"
        ],
        "owner": "CEeNkjFO53WnQF8erqYFKnXGuWkLCnAPKaQIrjmw",
        "recycle": true,
        "locked": false,
        "appdata": {},
        "picture": "",
        "lastupdated": "2017-02-11T13:13:37",
        "version": 1
    },
    "0fca3bcbf-on-0": {
        "name": "New sceneviolet on 1486818832309",
        "lights": [
        "3"
        ],
        "owner": "CEeNkjFO53WnQF8erqYFKnXGuWkLCnAPKaQIrjmw",
        "recycle": true,
        "locked": false,
        "appdata": {},
        "picture": "",
        "lastupdated": "2017-02-11T13:13:40",
        "version": 1
    },
    "3cdcbc69a-on-0": {
        "name": "Feet up on 1486819283666",
        "lights": [
        "1",
        "2"
        ],
        "owner": "CEeNkjFO53WnQF8erqYFKnXGuWkLCnAPKaQIrjmw",
        "recycle": true,
        "locked": false,
        "appdata": {},
        "picture": "",
        "lastupdated": "2017-02-11T13:21:11",
        "version": 1
    },
    "3cdcbc69a-on-5": {
        "name": "Feet up fon 1486819386361",
        "lights": [
        "1",
        "2"
        ],
        "owner": "CEeNkjFO53WnQF8erqYFKnXGuWkLCnAPKaQIrjmw",
        "recycle": true,
        "locked": true,
        "appdata": {},
        "picture": "",
        "lastupdated": "2017-02-11T13:22:50",
        "version": 1
    }
    },
    "rules": {},
    "sensors": {
    "1": {
        "state": {
        "daylight": false,
        "lastupdated": "2017-03-10T01:03:00"
        },
        "config": {
        "on": true,
        "long": "113.9966W",
        "lat": "46.8787N",
        "sunriseoffset": 30,
        "sunsetoffset": -30
        },
        "name": "Daylight",
        "type": "Daylight",
        "modelid": "PHDL00",
        "manufacturername": "Philips",
        "swversion": "1.0"
    }
    },
    "resourcelinks": {}
}
*/
