#include "Player.h"
#include "Utils.h"
#include <math.h>

extern const int screenWidth;
extern const int screenHeight;

Player::Player() : Entity()
{
    frame = 0;

    std::list<Texture2D>::iterator iter = texture.begin();

    Image playerImage = CropImageFromFile("../resources/Tech Dungeon Roguelite - Asset Pack (DEMO)/Players/players blue x3.png", Rectangle{0, 0, 96, 96});

    texture.insert(texture.begin(), LoadTextureFromImage(playerImage));
    
    iter = texture.end();

    for (int i = 0; i < 3; i++)
    {
        playerImage = CropImageFromFile("../resources/Tech Dungeon Roguelite - Asset Pack (DEMO)/Players/players blue x3.png", Rectangle{(float)96 * i, 96 * 3, 96, 96});

        texture.insert(iter, LoadTextureFromImage(playerImage));

        iter++;
    }

    for (iter = texture.begin(); iter != texture.end(); iter++)
    {
        GenTextureMipmaps(&*iter);
    }
    position = Vector2{(float)screenWidth/2, (float)screenHeight/2};

    UnloadImage(playerImage);
}

void Player::Update()
{
    move.x = 0;
    move.y = 0;
    if (IsKeyDown(KEY_A)) move.x--;     //left
    if (IsKeyDown(KEY_D)) move.x++;     //right
    if (IsKeyDown(KEY_W)) move.y--;     //up
    if (IsKeyDown(KEY_S)) move.y++;     //down
    position.x += move.x * SPEED * GetFrameTime();
    position.y += move.y * SPEED * GetFrameTime();
    angle = RadiantToDegrees(atan2(GetMouseY() - position.y + 20, GetMouseX() - position.x + 24));
}

void Player::DrawUpdate()
{
    if(move.x == 0 && move.y == 0) animationIter = texture.begin();
    else if (animationIter == texture.begin()) animationIter++;
    DrawTexturePro(*animationIter, Rectangle{0,0, (float)(*animationIter).width, (float)(*animationIter).height}, Rectangle{position.x,position.y, (float)(*animationIter).width, (float)(*animationIter).height}, Vector2{48, 72}, angle + 90, WHITE);
    frame += GetFrameTime();
    if (frame > 0.1)
    {
        animationIter++;
        frame = 0;
    }
    if (animationIter == texture.end()) animationIter = texture.begin();
}