#pragma once

#include "raylib.h"

class Player
{
public:
    Player(Texture2D sprite, Vector2 position);
    Vector2 playerPosition;
    Texture2D playerSprite;
};