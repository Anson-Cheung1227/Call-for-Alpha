#include "raylib.h"
#include "Player.h"
#include "Utils.h"
#include <math.h>

const int screenWidth = 1920;
const int screenHeight = 1080;

int main(void)
{
    #pragma region Window

    SetConfigFlags(FLAG_MSAA_4X_HINT);

    InitWindow(screenWidth, screenHeight, "Call For Alpha - Developer version");

    SetExitKey(KEY_NULL);

    #pragma endregion Window

    std::list<Texture2D> playerTexture;

    std::list<Texture2D>::iterator iter = playerTexture.begin();

    Image playerImage = CropImageFromFile("../resources/Tech Dungeon Roguelite - Asset Pack (DEMO)/Players/players blue x3.png", Rectangle{0, 0, 96, 96});

    playerTexture.insert(playerTexture.begin(), LoadTextureFromImage(playerImage));
    
    iter = playerTexture.end();

    for (int i = 0; i < 3; i++)
    {
        playerImage = CropImageFromFile("../resources/Tech Dungeon Roguelite - Asset Pack (DEMO)/Players/players blue x3.png", Rectangle{96 * i, 96 * 3, 96, 96});

        playerTexture.insert(iter, LoadTextureFromImage(playerImage));

        iter++;
    }

    Player player = Player(playerTexture, Vector2{screenWidth/2, screenHeight/2});

    UnloadImage(playerImage);

    Image pistolImage = CropImageFromFile("../resources/GUNS_V1.00/V1.00/Sprite-sheets/Pistol_V1.00/Weapon/[FULL]PistolV1.01.png", Rectangle{0,0,32,32});
    Texture2D gun = LoadTextureFromImage(pistolImage);
    GenTextureMipmaps(&gun);

    UnloadImage(pistolImage);

    while (!WindowShouldClose())
    {
        player.GetMovement();

        BeginDrawing();

            DrawFPS(10, 15);
            player.Update();
            DrawTexturePro(gun, Rectangle{0,0,32,32}, Rectangle{player.position.x,player.position.y,32,32}, Vector2{-10,16}, player.angle + 90, WHITE);
            ClearBackground(BLACK);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
