#pragma once
#include <list>
#include "raylib.h"

class Entity
{
public:
    std::list <Texture2D> texture;
    Vector2 position;
    Entity();
    Entity(std::list<Texture2D> texture, Vector2 pos);
    virtual void Update();
    virtual void DrawUpdate();
};