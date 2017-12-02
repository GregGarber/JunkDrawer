import QtQuick 2.7

LightsForm {
    id: lightsPage
    objectName: "lightsPage"

    function initLights(theLights){
        for (var key in theLights) {
            if (theLights.hasOwnProperty(key)) {
                var obj = theLights[key];
                var aLight = makeLight(obj);
                aLight.configure(key, obj);
            }
        }
    }

    function makeLight(the_light){
        var component = Qt.createComponent("ColorLight.qml");
        var aColorLight = component.createObject( lightsPage.columnLayoutLightHolder );

        if (aColorLight === null) {
            console.log("Error creating object");
        }
        return aColorLight;
    }
}

/* doesn't work on objects, but should be good for arrays
    for(var idx = 0, len=theLights.length; idx < len; idx++ ){
        console.log("light:",idx);
    }
    */
