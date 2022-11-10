#pragma once

#include "ImageLoader.hpp"

#include <string>

class BMP_ImageLoader : public ImageLoader
{
protected:
  std::string image_content;
};

