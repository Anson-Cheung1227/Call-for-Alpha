#include "raylib.h"
#include "Entity.h"
#include "Player.h"
#include "Gun.h"
#include "Utils.h"
#include <math.h>

extern const int screenWidth = 1920;
extern const int screenHeight = 1080;

int main(void)
{
    #pragma region Window

    SetConfigFlags(FLAG_MSAA_4X_HINT);

    InitWindow(screenWidth, screenHeight, "Call For Alpha - Developer version");

    SetExitKey(KEY_NULL);

    #pragma endregion Window

    Player player = Player();

    Pistol pistol = Pistol();

    while (!WindowShouldClose())
    {
        player.Update();
        pistol.position = player.position;
        pistol.angle = player.angle;
        BeginDrawing();

            DrawFPS(10, 15);
            player.DrawUpdate();
            pistol.DrawUpdate();
            ClearBackground(BLACK);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
