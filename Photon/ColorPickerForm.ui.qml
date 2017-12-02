import QtQuick 2.4
import QtQuick.Controls 2.1
import QtQuick.Layouts 1.3
import QtQuick.Extras 1.4
import QtQuick.Window 2.3

Item {
    id: itemColorPicker
    width: 470
    height: 400
    property alias rectangleSwatch: rectangleSwatch
    property alias sliderRed: sliderRed

    GridLayout {
        id: gridLayout
        anchors.rightMargin: 5
        anchors.leftMargin: 5
        anchors.bottomMargin: 5
        anchors.topMargin: 5
        clip: false
        visible: true
        rowSpacing: 1
        flow: GridLayout.LeftToRight
        rows: 2
        columns: 2
        anchors.fill: parent

        Label {
            id: labelRed
            color: "#ef2929"
            text: qsTr("Red")
            padding: 6
            Layout.columnSpan: 1
            Layout.minimumWidth: 0
            Layout.preferredWidth: -1
            Layout.fillHeight: false
            font.pointSize: 13
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            leftPadding: 9
            font.wordSpacing: -2
            font.weight: Font.Light
            font.family: "Courier"
            renderType: Text.QtRendering
            styleColor: "#f00000"
            fontSizeMode: Text.Fit
            Layout.fillWidth: true
        }

        Slider {
            id: sliderRed
            stepSize: 0.01
            Layout.alignment: Qt.AlignRight | Qt.AlignVCenter
            Layout.rowSpan: 1
            Layout.fillWidth: true
            value: 0.5
        }

        Label {
            id: labelGreen
            color: "#ef2929"
            text: qsTr("Green")
            padding: 6
            font.wordSpacing: -2
            font.pointSize: 13
            Layout.minimumWidth: 0
            font.family: "Courier"
            fontSizeMode: Text.Fit
            Layout.preferredWidth: -1
            Layout.fillWidth: true
            Layout.columnSpan: 1
            horizontalAlignment: Text.AlignHCenter
            styleColor: "#00f000"
            renderType: Text.QtRendering
            Layout.fillHeight: false
            verticalAlignment: Text.AlignVCenter
            font.weight: Font.Light
            leftPadding: 9
        }

        Slider {
            id: sliderGreen
            Layout.rowSpan: 1
            Layout.fillWidth: true
            value: 0.5
            Layout.alignment: Qt.AlignRight | Qt.AlignVCenter
        }

        Label {
            id: labelBlue
            color: "#ef2929"
            text: qsTr("Blue")
            padding: 6
            font.wordSpacing: -2
            font.pointSize: 13
            Layout.minimumWidth: 0
            font.family: "Courier"
            fontSizeMode: Text.Fit
            Layout.preferredWidth: -1
            Layout.fillWidth: true
            Layout.columnSpan: 1
            horizontalAlignment: Text.AlignHCenter
            styleColor: "#0000f0"
            renderType: Text.QtRendering
            Layout.fillHeight: false
            verticalAlignment: Text.AlignVCenter
            font.weight: Font.Light
            leftPadding: 9
        }

        Slider {
            id: sliderBlue
            Layout.rowSpan: 1
            Layout.fillWidth: true
            value: 0.5
            Layout.alignment: Qt.AlignRight | Qt.AlignVCenter
        }

        Rectangle {
            id: rectangleSwatch
            width: 200
            height: 200
            color: "#ffffff"
            Layout.fillHeight: true
            Layout.fillWidth: true
            Layout.columnSpan: 2
            Layout.rowSpan: 2
        }
    }

}
