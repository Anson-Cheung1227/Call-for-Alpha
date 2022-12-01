#include "EntityManager.h"

void EntityManager::UpdateEntities()
{
    for (std::vector<Entity*>::iterator iter = gameEntities.begin(); iter != gameEntities.end(); iter++)
    {
        (*iter)->Update();
    }
}
void EntityManager::DrawUpdateEntities()
{
    for (std::vector<Entity*>::iterator iter = gameEntities.begin(); iter != gameEntities.end(); iter++)
    {
        (*iter)->DrawUpdate();
    }
}