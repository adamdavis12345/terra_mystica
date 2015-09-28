#include "board.h"
#include "tile.h"
#include <QPoint>
#include <QVector3D>
#include <QDebug>

static Tile tileArray[9][13] =
{
    {Tile(Tile::FARM),Tile(Tile::MOUNTAIN),Tile(Tile::FOREST),Tile(Tile::SWAMP),Tile(Tile::DESERT),Tile(Tile::VOLCANO),
    Tile(Tile::FARM),Tile(Tile::SOIL),Tile(Tile::VOLCANO),Tile(Tile::FOREST),Tile(Tile::SWAMP),Tile(Tile::VOLCANO),Tile(Tile::SOIL)},

    {Tile(Tile::NO_TERRAIN),Tile(Tile::DESERT),Tile(Tile::RIVER),Tile(Tile::RIVER),Tile(Tile::FARM),Tile(Tile::SOIL),
    Tile(Tile::RIVER),Tile(Tile::RIVER),Tile(Tile::DESERT),Tile(Tile::SOIL),Tile(Tile::RIVER),Tile(Tile::RIVER),Tile(Tile::DESERT)},

    {Tile(Tile::RIVER),Tile(Tile::RIVER),Tile(Tile::SOIL),Tile(Tile::RIVER),Tile(Tile::MOUNTAIN),Tile(Tile::RIVER),
    Tile(Tile::FOREST),Tile(Tile::RIVER),Tile(Tile::FOREST),Tile(Tile::RIVER),Tile(Tile::MOUNTAIN),Tile(Tile::RIVER),Tile(Tile::RIVER)},

    {Tile(Tile::NO_TERRAIN),Tile(Tile::FOREST),Tile(Tile::SWAMP),Tile(Tile::DESERT),Tile(Tile::RIVER),Tile(Tile::RIVER),
    Tile(Tile::VOLCANO),Tile(Tile::SWAMP),Tile(Tile::RIVER),Tile(Tile::VOLCANO),Tile(Tile::RIVER),Tile(Tile::VOLCANO),Tile(Tile::FARM)},

    {Tile(Tile::SOIL),Tile(Tile::FARM),Tile(Tile::VOLCANO),Tile(Tile::SWAMP),Tile(Tile::SOIL),Tile(Tile::FARM),
    Tile(Tile::MOUNTAIN),Tile(Tile::DESERT),Tile(Tile::RIVER),Tile(Tile::RIVER),Tile(Tile::FOREST),Tile(Tile::SOIL),Tile(Tile::SWAMP)},

    {Tile(Tile::NO_TERRAIN),Tile(Tile::MOUNTAIN),Tile(Tile::FOREST),Tile(Tile::RIVER),Tile(Tile::RIVER),Tile(Tile::DESERT),
    Tile(Tile::FOREST),Tile(Tile::RIVER),Tile(Tile::RIVER),Tile(Tile::RIVER),Tile(Tile::FARM),Tile(Tile::MOUNTAIN),Tile(Tile::FARM)},

    {Tile(Tile::RIVER),Tile(Tile::RIVER),Tile(Tile::RIVER),Tile(Tile::MOUNTAIN),Tile(Tile::RIVER),Tile(Tile::VOLCANO),
    Tile(Tile::RIVER),Tile(Tile::FOREST),Tile(Tile::RIVER),Tile(Tile::DESERT),Tile(Tile::SOIL),Tile(Tile::SWAMP),Tile(Tile::DESERT)},

    {Tile(Tile::NO_TERRAIN),Tile(Tile::DESERT),Tile(Tile::SWAMP),Tile(Tile::FARM),Tile(Tile::RIVER),Tile(Tile::RIVER),
    Tile(Tile::RIVER),Tile(Tile::SWAMP),Tile(Tile::SOIL),Tile(Tile::RIVER),Tile(Tile::MOUNTAIN),Tile(Tile::FARM),Tile(Tile::MOUNTAIN)},

    {Tile(Tile::VOLCANO),Tile(Tile::SOIL),Tile(Tile::MOUNTAIN),Tile(Tile::SWAMP),Tile(Tile::VOLCANO),Tile(Tile::FOREST),
    Tile(Tile::DESERT),Tile(Tile::VOLCANO),Tile(Tile::MOUNTAIN),Tile(Tile::RIVER),Tile(Tile::SWAMP),Tile(Tile::FOREST),Tile(Tile::VOLCANO)}
};


Board::Board()
{
}

Tile* Board::getTileFromOffset(QPoint point) {
    qDebug()<<point.x()<<"\n"<<point.y()<<"\n";
    qDebug() << tileArray[point.y()][point.x()].terrain();
    return &tileArray[point.x()][point.y()];
}

//Tile* Board::getTileFromCube(QVector3D vector){

//}
