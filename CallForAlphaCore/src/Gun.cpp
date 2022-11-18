#include "Gun.h"
#include "Player.h"

Gun::Gun(std::list<Texture2D> sprite, Vector2 pos) : Entity(sprite, pos)
{
    for (std::list<Texture2D>::iterator iter = texture.begin(); iter != texture.end(); iter++)
    {
        GenTextureMipmaps(&*iter);
    }
}

void Gun::Update()
{
    
}

void Gun::DrawUpdate()
{
    DrawTexturePro(*texture.begin(),Rectangle{0,0,32,32}, Rectangle{position.x,position.y,32,32}, Vector2{-10,16}, angle + 90, WHITE);
}