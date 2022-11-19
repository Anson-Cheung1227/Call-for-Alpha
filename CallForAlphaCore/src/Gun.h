#pragma once
#include "Entity.h"

class Gun : public Entity
{
public:
    float angle;
    Gun();
    void Update() override;
    void DrawUpdate() override;
};

class Pistol : public Gun
{    
public:
    Pistol();
    void DrawUpdate() override;
};