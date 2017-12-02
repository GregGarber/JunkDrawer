import QtQuick 2.4
import QtQuick.Dialogs 1.2

ColorLightForm {
    property bool isConfigured: false
    ColorDialog {
        id: colorDialog
        title: "Please choose a color"
        onAccepted: {
            console.log("You chose: " + colorDialog.color)
            var state = {
                "hue": parseInt((colorDialog.currentHue * 65384).toFixed(0)),
                "sat": parseInt((colorDialog.currentSaturation *255).toFixed(0))
            };
            setState(lightID, state);
        }
        onRejected: {
            console.log("Canceled")
        }
    }

    buttonColor.onClicked: {
        colorDialog.visible = true
    }
    sliderBrightness.onValueChanged: {
        if( isConfigured ) {
            switchOnOff.checked=true;
        }
        var lightState = { "bri": parseInt(sliderBrightness.value.toFixed(0) )};
        setState(lightID, lightState);
    }

    switchOnOff.onCheckedChanged: {
        var state = { "on": switchOnOff.checked };
        setState(lightID, state)
        lightData.state.on=state.on;
    }

    function setState(id, state){
        request('http://philips-hue.net/api/FzDq2O8VoyNJzWg7EI2GDEftnuvLZuBtvDjMPkob/lights/'+id+'/state',
            'PUT', JSON.stringify(state),
            function(res){
                //console.debug("slider got:", res.responseText, " in response to:", JSON.stringify(state));
            });

    }

    function configure(light_id, light_data){
        //id="light"+light_id;
        objectName= "colorLight"+light_id;
        lightID = light_id
        lightData = light_data;
        labelLight.text = lightData.name;
        switchOnOff.checked = lightData.state.on;
        sliderBrightness.value = lightData.state.bri;
        if(! lightData.state.hasOwnProperty('colormode') ){
            buttonColor.enabled = false;
        }else{
            //65280
            var bulb_color = Qt.hsla( (lightData.state.hue/65384.0),
                         (lightData.state.sat/255.0),
                         (lightData.state.bri/255.0)
                         );
            colorDialog.setCurrentColor(bulb_color );
        }
        labelLight.enabled = lightData.state.reachable;
        switchOnOff.enabled = lightData.state.reachable;
        sliderBrightness.enabled= lightData.state.reachable;
        isConfigured=true;
    }
}
