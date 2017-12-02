import QtQuick 2.4
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.1
import Qt.labs.settings 1.0

Item {
    width: 480
    height: 800
    property alias textInfo: textInfo
    property alias buttonKey: buttonKey
    property alias textInputKey: textInputKey
    property alias labelKey: labelKey
    property alias textInputUrl: textInputUrl
    property alias labelUrl: labelUrl

    Settings{
        id: savedSettings
        category: "Hub"
        property alias textInputKey: textInputKey.text
        property alias textInputUrl: textInputUrl.text
    }
    ColumnLayout {
        id: columnLayoutHub
        anchors.rightMargin: 5
        anchors.leftMargin: 5
        anchors.bottomMargin: 5
        anchors.topMargin: 5
        anchors.fill: parent

        RowLayout {
            id: rowLayoutUrl
            width: 100
            height: 100

            Label {
                id: labelUrl
                text: qsTr("URL")
            }

            TextInput {
                id: textInputUrl
                width: 80
                height: 20
                Layout.fillWidth: true
                font.pixelSize: 12
            }
        }

        RowLayout {
            id: rowLayoutKey
            width: 100
            height: 100

            Label {
                id: labelKey
                text: qsTr("Key")
            }

            TextInput {
                id: textInputKey
                width: 80
                height: 20
                text: qsTr("")
                Layout.fillWidth: true
                font.pixelSize: 12
            }

            Button {
                id: buttonKey
                text: qsTr("Get")
            }
        }

        Text {
            id: textInfo
            text: qsTr("")
            Layout.fillHeight: true
            Layout.fillWidth: true
            font.pixelSize: 12
        }
    }
}
