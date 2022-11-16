#pragma once

#include <iostream>
#include "raylib.h"
Image CropImageFromFile(std::string path, Rectangle crop);
int RadiantToDegrees(float radiant);