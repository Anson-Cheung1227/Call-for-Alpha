#include "Gun.h"
#include "Player.h"
#include "Utils.h"

Gun::Gun() : Entity()
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

Pistol::Pistol() : Gun()
{
    Image pistolImage = CropImageFromFile("../resources/GUNS_V1.00/V1.00/Sprite-sheets/Pistol_V1.00/Weapon/[FULL]PistolV1.01.png", Rectangle{0,0,32,32});
    texture.insert(texture.begin(), LoadTextureFromImage(pistolImage));
}

void Pistol::DrawUpdate()
{
    DrawTexturePro(*texture.begin(),Rectangle{0,0,32,32}, Rectangle{position.x,position.y,32,32}, Vector2{-10,16}, angle + 90, WHITE);
}