import QtQuick 2.4

ColorPickerForm {
    property color currentColor: "white"
    sliderRed.onValueChanged: {
        currentColor.r = sliderRed.value
        console.log("color red:",currentColor.r)
        rectangleSwatch.color=currentColor
    }
}
