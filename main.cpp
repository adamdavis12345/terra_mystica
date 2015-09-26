#include <QApplication>
#include <QQmlApplicationEngine>
#include<board.h>
#include<tile.h>
#include<QQmlContext>
#include <QPoint>
#include <QtQml>


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    qmlRegisterUncreatableType<Board>("Terra_Mystica",1,0,"Board","don't try to make this");
    qmlRegisterUncreatableType<Tile>("Terra_Mystica",1,0,"Tile","don't try to make this");
    qRegisterMetaType<Tile*>("Tile*");
    QQmlApplicationEngine engine;
    Board gameBoard;
    engine.rootContext()->setContextProperty("board",&gameBoard);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    return app.exec();
}
