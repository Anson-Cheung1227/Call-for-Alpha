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
    Player(std::list<Texture2D> sprite, Vector2 position);
    void GetMovement();
    void Update() override;
};