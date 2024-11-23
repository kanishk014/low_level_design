#pragma once
#include "ImageInterface.hpp"
#include "RealImage.hpp"

class ProxyImage : public ImageInterface
{
private:
  RealImage *realImage;
  std::string filename;

public:
  ProxyImage(std::string filename)
  {
    this->filename = filename;
    realImage = NULL;
  }

  void display()
  {
    if (realImage == NULL)
    {
      realImage = new RealImage(filename);
    }

    realImage->display();
  }
};