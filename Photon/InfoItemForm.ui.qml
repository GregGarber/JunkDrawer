import QtQuick 2.4
import QtQuick.Controls 2.1
import QtQuick.Layouts 1.1

Item {
    id: item1
    width: 480
    height: 40
    property alias labelValue: labelValue
    property alias labelKey: labelKey

    Row {
        id: row
        Layout.fillHeight: false
        Layout.fillWidth: true
        Layout.alignment: Qt.AlignLeft | Qt.AlignTop

        Label {
            id: labelKey
            text: qsTr("Key")
        Layout.fillHeight: true
        Layout.fillWidth: true
        Layout.alignment: Qt.AlignLeft | Qt.AlignTop
        }

        Label {
            id: labelValue
            text: qsTr("Value")
        Layout.fillHeight: true
        Layout.fillWidth: true
        Layout.alignment: Qt.AlignLeft | Qt.AlignTop
        }
    }
}
