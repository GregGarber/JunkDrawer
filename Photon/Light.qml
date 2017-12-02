import QtQuick 2.4

LightForm {
    function setState(id, state){
        request('http://philips-hue.net/api/FzDq2O8VoyNJzWg7EI2GDEftnuvLZuBtvDjMPkob/lights/'+id+'/state',
            'PUT', JSON.stringify(state),
            function(res){
                //console.debug("slider got:", res.responseText, " in response to:", JSON.stringify(state));
            });
    }

    function configure(light_id, light_data){
        objectName= "colorLight"+light_id;
        lightID = light_id
        lightData = light_data;
        switchSelected.text = lightData.name;
        switchSelected.enabled = lightData.state.reachable;
    }
}
