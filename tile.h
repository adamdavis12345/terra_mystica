#ifndef TILE_H
#define TILE_H


class tile
{
public:
    enum TerrainType {
        DESERT = 0,
        FARM,
        SOIL,
        SWAMP,
        FOREST,
        MOUNTAIN,
        VOLCANO,
        RIVER,
        NO_TERRAIN
    };
    enum StructureType {
        NO_STRUCTRE = 0,
        DWELLING,
        TRADING_POST,
        TEMPLE,
        STRONGHOLD,
        SANCTUARY
    };
    tile(TerrainType);

    TerrainType terrain() const;
    void setTerrain(const TerrainType &terrain);

    StructureType structure() const;
    void setStructure(const StructureType &structure);

private:
    TerrainType m_terrain;
    StructureType m_structure;
};

#endif // TILE_H
