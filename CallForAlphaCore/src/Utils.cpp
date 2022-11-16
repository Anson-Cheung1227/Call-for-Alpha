#include "Utils.h"

Image CropImageFromFile(std::string path, Rectangle crop)
{
    Image image = LoadImage(path.c_str());
    ImageCrop(&image, crop);
    ImageResize(&image, crop.width, crop.height);
    return image;
}
int RadiantToDegrees(float radiant)
{
    return radiant * RAD2DEG - 90.0f;
}