import QtQuick 2.4
import QtQuick.Dialogs 1.2
import QtQuick.Controls 2.1
import QtQuick.Layouts 1.1
Item {
    id: item_color_light
    width: 470
    height: 100
    property int lightID: -1
    property variant lightData: "none"
    property alias rowLayout: rowLayout
    property alias sliderBrightness: sliderBrightness
    property alias buttonColor: buttonColor
    property alias switchOnOff: switchOnOff
    property alias labelLight: labelLight

    RowLayout {
        id: rowLayout1
        anchors.right: parent.right
        anchors.rightMargin: 5
        anchors.left: parent.left
        anchors.leftMargin: 5
        anchors.top: parent.top
        anchors.topMargin: 5
        Layout.fillHeight: true
        Layout.fillWidth: true
        Layout.alignment: Qt.AlignLeft | Qt.AlignTop
        visible: true

        Label {
            id: labelLight
            text: qsTr("Light")
            verticalAlignment: Text.AlignVCenter
            Layout.fillHeight: true
            Layout.fillWidth: true
        }

        Switch {
            id: switchOnOff
            text: qsTr("On")
            checked: false
            Layout.fillHeight: true
            Layout.fillWidth: false
        }

        Button {
            id: buttonColor
            text: qsTr("Color")
            Layout.fillHeight: true
            Layout.alignment: Qt.AlignRight | Qt.AlignVCenter
        }

    }

    RowLayout {
        id: rowLayout
        anchors.top: rowLayout1.bottom
        anchors.topMargin: 5
        anchors.right: parent.right
        anchors.rightMargin: 5
        anchors.left: parent.left
        anchors.leftMargin: 5
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 5
        Layout.columnSpan: 1
        Layout.rowSpan: 3
        Layout.fillHeight: true
        Layout.fillWidth: true
        Layout.alignment: Qt.AlignLeft | Qt.AlignBottom

        Slider {
            id: sliderBrightness
            stepSize: 1
            to: 255
            Layout.fillHeight: true
            Layout.fillWidth: true
            Layout.rowSpan: 1
            Layout.columnSpan: 1
            Layout.alignment: Qt.AlignRight | Qt.AlignBottom
            value: 127
        }
    }

}
