#include "raylib.h"
#include "Player.h"
#include "Utils.h"

int main(void)
{
    
    const int screenWidth = 1920;
    const int screenHeight = 1080;

    SetConfigFlags(FLAG_MSAA_4X_HINT);

    InitWindow(screenWidth, screenHeight, "Call For Alpha - Developer version");

    Image playerImage = CropImageFromFile("../resources/Tech Dungeon Roguelite - Asset Pack (DEMO)/Players/players blue x3.png", Rectangle{15, 10, 56, 91});
    
    Player player = Player(LoadTextureFromImage(playerImage), Vector2{screenWidth/2, screenHeight/2});

    SetExitKey(KEY_NULL);

    SetTargetFPS(60);               
    while (!WindowShouldClose())
    {
        if (IsKeyDown(KEY_A)) player.playerPosition.x += -1;    //left
        if (IsKeyDown(KEY_D)) player.playerPosition.x += 1;     //right
        if (IsKeyDown(KEY_W)) player.playerPosition.y += -1;    //up
        if (IsKeyDown(KEY_S)) player.playerPosition.y += 1;     //down

        BeginDrawing();

            DrawTextureEx(player.playerSprite, Vector2{player.playerPosition.x - player.playerSprite.width/2, player.playerPosition.y - player.playerSprite.height/2}, 0, 1, WHITE);
            ClearBackground(RAYWHITE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
