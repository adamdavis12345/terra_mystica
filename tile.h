#ifndef TILE_H
#define TILE_H
#include <QObject>

class Tile: public QObject
{
    Q_OBJECT
    Q_PROPERTY(TerrainType terrain READ terrain WRITE setTerrain NOTIFY terrainChanged)
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
    Q_ENUM(TerrainType)

    enum StructureType {
        NO_STRUCTRE = 0,
        DWELLING,
        TRADING_POST,
        TEMPLE,
        STRONGHOLD,
        SANCTUARY
    };
    Q_ENUM(StructureType)
    Tile(TerrainType);
    Tile(const Tile& copy);

    TerrainType terrain() const;
    void setTerrain(const TerrainType &terrain);

    StructureType structure() const;
    void setStructure(const StructureType &structure);

signals:
    void terrainChanged(TerrainType terrain);

private:
    TerrainType m_terrain;
    StructureType m_structure;
};

#endif // TILE_H
