import QtQuick 2.4
import QtQuick.Controls 1.3
import QtQuick.Window 2.2
import QtQuick.Dialogs 1.2
import Terra_Mystica 1.0

ApplicationWindow {
    title: qsTr("Terra Mystica")
    width: 640
    height: 480
    visible: true
    visibility: "Maximized"
    menuBar: MenuBar {
        Menu {
            title: qsTr("&File")
            MenuItem {
                text: qsTr("&Open")
                onTriggered: messageDialog.show(qsTr("Open action triggered"));
            }
            MenuItem {
                text: qsTr("E&xit")
                onTriggered: Qt.quit();
            }
        }
    }

    GridView{
        anchors.fill:parent
        model: 116
        id: boardGrid
        cellHeight: parent.height/9
        cellWidth: parent.width/13
        delegate: Rectangle{
            property int blah : modelData/13
            property point mypoint: Qt.point(modelData%13,blah)
            height: boardGrid.cellHeight
            width: boardGrid.cellWidth
            property variant colorArray: ["yellow","darkgreen","brown","purple","green","grey","red","blue","clear"]
            color: colorArray[board.getTileFromOffset(mypoint).terrain]
        }

    }

    MessageDialog {
        id: messageDialog
        title: qsTr("May I have your attention, please?")

        function show(caption) {
            messageDialog.text = caption;
            messageDialog.open();
        }
    }
}
