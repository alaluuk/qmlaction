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

    MyButton {
        id: btnShow
        x: 40
        y: 20
        text: qsTr("Näytä tiedot")
        onClicked: {
            txtData.text=person.getData
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
        id: labelInfo
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
        id: labelFname
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
        id: labelLname
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
    MyButton {
        id: btnSave
        x: 280
        y: 180
        text: qsTr("Tallenna")
        onClicked: {
            person.setId(txtId.text);
            person.setFirstname(txtFname.text);
            person.setLastname(txtLname.text);
            person.addTodatabase();
            txtData.text=person.getData
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

    MyButton {
        id: btnDel
        x: 280
        y: 300
        text: qsTr("Poista")
        onClicked: {
            person.setId(txtDelId.text);
            person.delFromDatabase();
            txtData.text=person.getData
        }
    }

    Text {
        id: labelEtsi
        x: 40
        y: 230
        width: 200
        height: 20
        text: "Etsi henkilö"
        font.pixelSize: 12
    }
    Text {
        id: labelSearchId
        x: 40
        y: 260
        width: 40
        height: 20
        text: "ID"
        font.pixelSize: 12
    }
    TextField {
        id: txtSearchId
        x:100
        y:260
        width: 140
        height: 30
        text: ""
        placeholderText: qsTr("ID")
    }
    MyButton {
        id: btnSearch
        x: 40
        y: 300
        text: qsTr("Etsi")
        onClicked: {
            person.setId(txtSearchId.text);
            person.getSelected();
            txtSearchFname.text=person.getFirstname;
            txtSearchLname.text=person.getLastname;

        }
    }

    Text {
        id: labelSearchFname
        x: 40
        y: 340
        width: 40
        height: 20
        text: "Etunimi"
        font.pixelSize: 12
    }
    TextField {
        id: txtSearchFname
        x:100
        y:340
        width: 140
        height: 30
        text: ""
        placeholderText: qsTr("Etunimi")
    }
    Text {
        id: labelSearchLname
        x: 40
        y: 370
        width: 40
        height: 20
        text: "Sukunimi"
        font.pixelSize: 12
    }
    TextField {
        id: txtSearchLname
        x:100
        y:370
        width: 140
        height: 30
        text: ""
        placeholderText: qsTr("Sukunimi")
    }

    MyButton {
        id: btnUpdate
        x: 40
        y: 410
        text: qsTr("Tallenna")
        onClicked: {
            person.setFirstname(txtSearchFname.text);
            person.setLastname(txtSearchLname.text);
            person.updateSelected();
            txtSearchId.text="";
            txtSearchFname.text="";
            txtSearchLname.text="";
            txtData.text=person.getData
        }
    }


}
