#pragma once

#include "Entity.h"

class Player : public Entity
{
private:
    const int SPEED = 100;
    Vector2 move;
    bool isShooting;
    std::list<Texture2D>::iterator animationIter;
    float frame; 
public:
    float angle;
    Player();
    void DrawUpdate() override;
    void Update() override;
};