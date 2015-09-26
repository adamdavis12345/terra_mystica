#include "tile.h"



Tile::Tile(TerrainType terrain):
    m_terrain  (terrain),
    m_structure (NO_STRUCTRE)
{}

Tile::Tile(const Tile &copy):
    m_terrain (copy.terrain())
{ }


Tile::TerrainType Tile::terrain() const
{
    return m_terrain;
}

void Tile::setTerrain(const TerrainType &terrain)
{
    m_terrain = terrain;
    emit terrainChanged(terrain);
}
Tile::StructureType Tile::structure() const
{
    return m_structure;
}

void Tile::setStructure(const StructureType &structure)
{
    m_structure = structure;
}

