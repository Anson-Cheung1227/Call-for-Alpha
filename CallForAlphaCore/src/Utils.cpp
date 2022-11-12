#include "Utils.h"

Image CropImageFromFile(std::string path, Rectangle crop)
{
    Image image = LoadImage("../resources/Tech Dungeon Roguelite - Asset Pack (DEMO)/Players/players blue x3.png");
    ImageCrop(&image, crop);
    ImageResize(&image, crop.width, crop.height);
    return image;
}