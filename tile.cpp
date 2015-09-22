#include "tile.h"



tile::tile(TerrainType terrain)
{
    m_terrain = terrain;
    m_structure = NO_STRUCTRE;
}


tile::TerrainType tile::terrain() const
{
    return m_terrain;
}

void tile::setTerrain(const TerrainType &terrain)
{
    m_terrain = terrain;
}
tile::StructureType tile::structure() const
{
    return m_structure;
}

void tile::setStructure(const StructureType &structure)
{
    m_structure = structure;
}

