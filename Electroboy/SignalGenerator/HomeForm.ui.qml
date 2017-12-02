import QtQuick 2.4
import QtPositioning 5.9
import QtQuick.Controls 2.2
import QtQuick.Controls.Material 2.0
import QtQuick.Extras 1.4

Item {
    id: signalGenerator
    width: 800
    height: 480

    Grid {
        id: grid
        anchors.margins: 10
        spacing: 5
        rows: 5
        columns: 5
        anchors.fill: parent
        Row{
            id: row1
            spacing: 5
            Column {
                id: r1Column1

                Label {
                    id: value
                    color: "#ff0000"
                    text: qsTr("0.123456789")
                    font.weight: Font.Bold
                    font.pixelSize: 77
                    verticalAlignment: Text.AlignVCenter
                    horizontalAlignment: Text.AlignLeft
                    anchors.fill: parent
                }
            }
            Column {
                id: r1Column2
            }
            Column {
                id: r1Column3
                Label {
                    id: units
                    color: "#ff0000"
                    text: qsTr("uS")
                    font.weight: Font.Bold
                    font.pixelSize: 77
                    verticalAlignment: Text.AlignVCenter
                    horizontalAlignment: Text.AlignRight
                    anchors.fill: parent
                }
            }
            Column {
                id: r1Column4
            }
            Column {
                id: r1Column5
            }
        }

    }
    Row{
        id: row2
        spacing: 5
        Column {
            id: r2Column1
        }
        Column {
            id: r2Column2
        }
        Column {
            id: r2Column3
        }
        Column {
            id: r2Column4
        }
        Column {
            id: r2Column5
        }
    }

    Row{
        id: row3
        spacing: 5
        Column {
            id: r3Column1
        }
        Column {
            id: r3Column2
        }
        Column {
            id: r3Column3
        }
        Column {
            id: r3Column4
        }
        Column {
            id: r3Column5
        }
    }

    Row{
        id: row4
        spacing: 5
        Column {
            id: r4Column1
        }
        Column {
            id: r4Column2
        }
        Column {
            id: r4Column3
        }
        Column {
            id: r4Column4
        }
        Column {
            id: r4Column5
        }
    }

    Row{
        id: row5
        spacing: 5
        Column {
            id: r5Column1
        }
        Column {
            id: r5Column2
        }
        Column {
            id: r5Column3
        }
        Column {
            id: r5Column4
        }
        Column {
            id: r5Column5
        }
    }


}
