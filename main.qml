import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.0
import myNameSpace.person 1.0


ApplicationWindow {
    id: root
    width: 600
    height: 480
    visible: true

    Person {
        id:person
    }

    Button {
            id: btnShow
            x: 40
            y: 20
            width: 200
            height: 30
            text: qsTr("Näytä tiedot")
            onClicked: {
                txtData.text=person.getData
            }
            background:
                        Rectangle {
                            implicitWidth: 100
                            implicitHeight: 40
                            color: "#64ADC6"
                            border.color: "#26282a"
                            border.width: 1
                            radius: 4
                        }
        }

        Text {
            id: txtData
            x: 40
            y: 60
            width: 200
            height: 30
            text: "Tulos"
            font.pixelSize: 12
        }
        Text {
            id: labeInfo
            x: 280
            y: 20
            width: 200
            height: 20
            text: "Lisää henkilö"
            font.pixelSize: 12
        }
        Text {
            id: labelID
            x: 280
            y: 60
            width: 40
            height: 20
            text: "ID"
            font.pixelSize: 12
        }
        TextField {
            id: txtId
            x:340
            y:60
            width: 140
            height: 30
            text: ""
            placeholderText: qsTr("ID")
        }
        Text {
            id: labeFname
            x: 280
            y: 100
            width: 40
            height: 20
            text: "Etunimi"
            font.pixelSize: 12
        }
        TextField {
            id: txtFname
            x:340
            y:100
            width: 140
            height: 30
            text: ""
            placeholderText: qsTr("Etunimi")
        }
        Text {
            id: labeLname
            x: 280
            y: 140
            width: 40
            height: 20
            text: "Sukunimi"
            font.pixelSize: 12
        }
        TextField {
            id: txtLname
            x:340
            y:140
            width: 140
            height: 30
            text: ""
            placeholderText: qsTr("Sukunimi")
        }
        Button {
                id: btnSave
                x: 280
                y: 180
                width: 200
                height: 30
                text: qsTr("Tallenna")
                onClicked: {
                    person.setId(txtId.text);
                    person.setFirstname(txtFname.text);
                    person.setLastname(txtLname.text);
                    person.setTodatabase();
                    txtData.text=person.getData
                }
                background:
                            Rectangle {
                                implicitWidth: 100
                                implicitHeight: 40
                                color: "#64ADC6"
                                border.color: "#26282a"
                                border.width: 1
                                radius: 4
                            }
            }

        Text {
            id: labelPoista
            x: 280
            y: 230
            width: 200
            height: 20
            text: "Poista henkilö"
            font.pixelSize: 12
        }
        Text {
            id: labelDelId
            x: 280
            y: 260
            width: 40
            height: 20
            text: "ID"
            font.pixelSize: 12
        }
        TextField {
            id: txtDelId
            x:340
            y:260
            width: 140
            height: 30
            text: ""
            placeholderText: qsTr("ID")
        }
        Button {
                id: btnDel
                x: 280
                y: 300
                width: 200
                height: 30
                text: qsTr("Poista")
                onClicked: {
                    person.setId(txtDelId.text);
                    person.delFromDatabase();
                    txtData.text=person.getData
                }
                background:
                            Rectangle {
                                implicitWidth: 100
                                implicitHeight: 40
                                color: "#64ADC6"
                                border.color: "#26282a"
                                border.width: 1
                                radius: 4
                            }
            }
}
