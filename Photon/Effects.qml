import QtQuick 2.4

EffectsForm {

    id: effectsPage
    objectName: "effectsPage"

    function initLights(theLights){
        console.log("effects initLights called");
        for (var key in theLights) {
           if (theLights.hasOwnProperty(key)) {
              var obj = theLights[key];
                console.log("light:",key);
                var aLight = makeLight(obj);
               aLight.configure(key, obj);
           }
        }
    }

    function makeLight(the_light){
        var component = Qt.createComponent("Light.qml");
        console.debug(component);
        var aColorLight = component.createObject( effectsPage.columnLayoutLights );
        if (aColorLight === null) {
            console.log("Error creating object");
        }
        return aColorLight;
    }

}
