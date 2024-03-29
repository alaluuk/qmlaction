import QtQuick 2.0
import QtQuick.Controls 2.12

Button {
    width: 200
    height: 35
    background: Rectangle {
        color: "#0096FF"
        border.color: "#26282a"
        border.width: 2
        radius: 6
    }
    contentItem: Text {
        text: parent.text
        font.bold: true
        color: "black"
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
    }
}
