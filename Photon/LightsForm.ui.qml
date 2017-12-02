import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0
import QtQuick.Extras 1.4
import QtWebSockets 1.1

Flickable {

    id: lightFlickable
    width: 480
    height: 800

    flickableDirection: Flickable.VerticalFlick
    property alias columnLayoutLightHolder: columnLayoutLightHolder

    ColumnLayout {
        id: columnLayoutLightHolder
        anchors.rightMargin: 5
        anchors.leftMargin: 5
        anchors.bottomMargin: 5
        anchors.topMargin: 5
        anchors.fill: parent
    }

    Component.onCompleted: {
            lightFlickable.contentHeight = columnLayoutLightHolder.height
    }

}

