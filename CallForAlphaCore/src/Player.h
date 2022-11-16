#pragma once

#include "Entity.h"

class Player : public Entity
{
private:
    std::list<Texture2D>::iterator animationIter;
    float frame; 
public:
    const int SPEED = 100;
    float angle;
    Vector2 move;
    Player(std::list<Texture2D> sprite, Vector2 position);
    void GetMovement();
    void Update() override;
};