#include "board.h"
#include "tile.h"
static tile tileArray[13][9] =
{
    tile(tile::FARM),tile(tile::MOUNTAIN),tile(tile::FOREST),tile(tile::SWAMP),tile(tile::DESERT),tile(tile::VOLCANO),
    tile(tile::FARM),tile(tile::SOIL),tile(tile::VOLCANO),tile(tile::FOREST),tile(tile::SWAMP),tile(tile::VOLCANO),tile(tile::SOIL),

    tile(tile::NO_TERRAIN),tile(tile::DESERT),tile(tile::RIVER),tile(tile::RIVER),tile(tile::FARM),tile(tile::SOIL),
    tile(tile::RIVER),tile(tile::RIVER),tile(tile::DESERT),tile(tile::SOIL),tile(tile::RIVER),tile(tile::RIVER),tile(tile::DESERT),

    tile(tile::RIVER),tile(tile::RIVER),tile(tile::SOIL),tile(tile::RIVER),tile(tile::MOUNTAIN),tile(tile::RIVER),
    tile(tile::FOREST),tile(tile::RIVER),tile(tile::FOREST),tile(tile::RIVER),tile(tile::MOUNTAIN),tile(tile::RIVER),tile(tile::RIVER),

    tile(tile::NO_TERRAIN),tile(tile::FOREST),tile(tile::SWAMP),tile(tile::DESERT),tile(tile::RIVER),tile(tile::RIVER),
    tile(tile::VOLCANO),tile(tile::SWAMP),tile(tile::RIVER),tile(tile::VOLCANO),tile(tile::RIVER),tile(tile::VOLCANO),tile(tile::FARM),

    tile(tile::SOIL),tile(tile::FARM),tile(tile::VOLCANO),tile(tile::SWAMP),tile(tile::SOIL),tile(tile::FARM),
    tile(tile::MOUNTAIN),tile(tile::DESERT),tile(tile::RIVER),tile(tile::RIVER),tile(tile::FOREST),tile(tile::SOIL),tile(tile::SWAMP),

    tile(tile::NO_TERRAIN),tile(tile::MOUNTAIN),tile(tile::FOREST),tile(tile::RIVER),tile(tile::RIVER),tile(tile::DESERT),
    tile(tile::FOREST),tile(tile::RIVER),tile(tile::RIVER),tile(tile::RIVER),tile(tile::FARM),tile(tile::MOUNTAIN),tile(tile::FARM),

    tile(tile::RIVER),tile(tile::RIVER),tile(tile::RIVER),tile(tile::MOUNTAIN),tile(tile::RIVER),tile(tile::VOLCANO),
    tile(tile::RIVER),tile(tile::FOREST),tile(tile::RIVER),tile(tile::DESERT),tile(tile::SOIL),tile(tile::SWAMP),tile(tile::DESERT),

    tile(tile::NO_TERRAIN),tile(tile::DESERT),tile(tile::SWAMP),tile(tile::FARM),tile(tile::RIVER),tile(tile::RIVER),
    tile(tile::RIVER),tile(tile::SWAMP),tile(tile::SOIL),tile(tile::RIVER),tile(tile::MOUNTAIN),tile(tile::FARM),tile(tile::MOUNTAIN),

    tile(tile::VOLCANO),tile(tile::SOIL),tile(tile::MOUNTAIN),tile(tile::SWAMP),tile(tile::VOLCANO),tile(tile::FOREST),
    tile(tile::DESERT),tile(tile::VOLCANO),tile(tile::MOUNTAIN),tile(tile::RIVER),tile(tile::SWAMP),tile(tile::FOREST),tile(tile::VOLCANO),
};

Board::Board()
{

}

