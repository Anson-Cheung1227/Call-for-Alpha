#include "Player.h"

Player::Player(Texture2D sprite, Vector2 position) : playerSprite(sprite), playerPosition(position)
{
    SetTextureFilter(playerSprite, TEXTURE_FILTER_TRILINEAR);
};