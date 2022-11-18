#pragma once
#include "Entity.h"

class Gun : public Entity
{
public:
    float angle;
    Gun(std::list<Texture2D> sprite, Vector2 pos);
    void Update() override;
    void DrawUpdate() override;
};