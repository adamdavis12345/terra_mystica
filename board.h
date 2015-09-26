#ifndef BOARD_H
#define BOARD_H
#include "tile.h"
#include <QObject>
#include<QPoint>

class QPoint;
class QVector3D;

class Board: public QObject
{
   Q_OBJECT
public:
    Board();
public slots:
    Q_INVOKABLE Tile* getTileFromOffset(QPoint point);
    //Tile* getTileFromCube(QVector3D);
};

#endif // BOARD_H
