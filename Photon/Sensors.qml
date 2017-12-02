import QtQuick 2.4
SensorsForm {
    id: sensorsPage
    function initSensors(theSensors){
        console.log("the sensors called");
        //going to make some bad assumptions since I don't have another sensor
        //to play with. For now, assume sensor 1 is the hub's daylight sensor
        for (var key in theSensors) {
            console.log('key:' + key);
            if(key === "1" ){
                if (theSensors.hasOwnProperty(key)) {
                    for( var subkey in theSensors[key]){
                        console.log('sub key:' + subkey);
                        if(subkey==="config"){
                            if (theSensors[key].hasOwnProperty(subkey)) {
                                if (theSensors[key][subkey].hasOwnProperty("on")) {
                                    switchOn.checked = theSensors[key][subkey]["on"];
                                }
                                if (theSensors[key][subkey].hasOwnProperty("long")) {
                                    textInputLongitude.text = theSensors[key][subkey]["long"];
                                }
                                if (theSensors[key][subkey].hasOwnProperty("lat")) {
                                    textInputLatitude.text = theSensors[key][subkey]["lat"];
                                }
                                if (theSensors[key][subkey].hasOwnProperty("sunriseoffset")) {
                                    textInputSunriseOffset.text = theSensors[key][subkey]["sunriseoffset"];
                                }
                                if (theSensors[key][subkey].hasOwnProperty("sunsetoffset")) {
                                    textInputSunsetOffset.text = theSensors[key][subkey]["sunsetoffset"];
                                }

                            }

                        } else if(subkey==="state"){
                            if (theSensors[key].hasOwnProperty(subkey)) {
                                if (theSensors[key][subkey].hasOwnProperty("daylight")) {
                                    labelDaylight.text = theSensors[key][subkey]["daylight"] ? "Daylight":"Nighttime";
                                }
                                if (theSensors[key][subkey].hasOwnProperty("lastupdated")) {
                                    labelUpdated.text = theSensors[key][subkey]["lastupdated"];
                                }
                            }
                        }else{
                            if (theSensors[key].hasOwnProperty(subkey)) {
                                var info = addInfo();
                                info.configure(subkey,  theSensors[key][subkey]);
                            }
                        }
                    }
                }
            }
        }
    }

    function addInfo(){
        var component = Qt.createComponent("InfoItem.qml");
        var anInfo = component.createObject( sensorsPage.columnLayoutInfoHolder );
        if (anInfo === null) {
            console.log("Error creating sensor info component");
        }
        return anInfo;
    }

}
