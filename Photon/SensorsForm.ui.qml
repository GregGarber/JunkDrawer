import QtQuick 2.4
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.1

Item {
    width: 480
    height: 800
    property alias columnLayoutInfoHolder: columnLayoutInfoHolder
    property alias labelDaylight: labelDaylight
    property alias labelUpdated: labelUpdated
    property alias button: button
    property alias textInputSunsetOffset: textInputSunsetOffset
    property alias textInputSunriseOffset: textInputSunriseOffset
    property alias textInputLatitude: textInputLatitude
    property alias textInputLongitude: textInputLongitude
    property alias switchOn: switchOn
    property int sensorID: 0

    ColumnLayout {
        id: columnLayout
        anchors.rightMargin: 5
        anchors.leftMargin: 5
        anchors.bottomMargin: 5
        anchors.topMargin: 5
        anchors.fill: parent

        GroupBox {
            id: groupBoxState
            Layout.fillHeight: false
            Layout.fillWidth: true
            title: qsTr("State")

            ColumnLayout {
                id: columnLayoutState
                anchors.fill: parent

                RowLayout {
                    id: rowLayoutUpdated
                    anchors.right: parent.right
                    anchors.rightMargin: 5
                    anchors.left: parent.left
                    anchors.leftMargin: 5
                    anchors.top: parent.top
                    anchors.topMargin: 5

                    Label {
                        id: labelLastUpdated
                        text: qsTr("Last Update:")
                    }

                    Label {
                        id: labelUpdated
                        text: qsTr("")
                    }
                }

                RowLayout {
                    id: rowLayoutDaylight
                    width: 100
                    height: 100

                    Label {
                        id: labelDaylight
                        text: qsTr("")
                    }
                }
            }
        }

        GroupBox {
            id: groupBoxConfig
            Layout.fillHeight: false
            Layout.fillWidth: true
            title: qsTr("Configuration")

            ColumnLayout {
                id: columnLayoutConfig
                anchors.fill: parent

                RowLayout {
                    id: rowLayoutOn
                    Layout.fillHeight: true
                    Layout.fillWidth: true

                    Switch {
                        id: switchOn
                        text: qsTr("On")
                        Layout.fillHeight: false
                        Layout.fillWidth: false
                    }
                }

                RowLayout {
                    id: rowLayoutLongitude

                    Label {
                        id: labelLongitude
                        text: qsTr("Longitude")
                    }

                    TextInput {
                        id: textInputLongitude
                        color: "#ffffff"
                        text: qsTr("Text Input")
                        font.family: "Times New Roman"
                        Layout.fillWidth: true
                        font.pixelSize: 12
                    }
                }

                RowLayout {
                    id: rowLayoutLatitude

                    Label {
                        id: labelLatitude
                        text: qsTr("Latitude")
                    }

                    TextInput {
                        id: textInputLatitude
                        color: "#ffffff"
                        text: qsTr("Text Input")
                        Layout.fillWidth: true
                        font.pixelSize: 12
                    }
                }

                RowLayout {
                    id: rowLayoutSunriseOffset

                    Label {
                        id: labelSunriseOffset
                        text: qsTr("Sunrise Offset")
                    }

                    TextInput {
                        id: textInputSunriseOffset
                        color: "#ffffff"
                        text: qsTr("Sunrise Offset")
                        Layout.fillWidth: true
                        font.pixelSize: 12
                    }
                }

                RowLayout {
                    id: rowLayoutSunsetOffset
                    Label {
                        id: labelSunsetOffset
                        text: qsTr("Sunset Offset")
                    }

                    TextInput {
                        id: textInputSunsetOffset
                        color: "#ffffff"
                        text: qsTr("Text Input")
                        Layout.fillWidth: true
                        font.pixelSize: 12
                    }
                }
            }
        }

        GroupBox {
            id: groupBoxInfo
            width: 200
            height: 200
            Layout.fillWidth: true
            title: qsTr("Information")

            ColumnLayout {
                id: columnLayoutInfoHolder
                anchors.fill: parent
            }
        }

        Button {
            id: button
            text: qsTr("Apply")
            Layout.alignment: Qt.AlignRight | Qt.AlignVCenter
        }

    }
}
