#pragma once
#include <vector>
#include "Entity.h"

class EntityManager
{
public:
    std::vector<Entity*> gameEntities;
    void UpdateEntities();
    void DrawUpdateEntities();
};