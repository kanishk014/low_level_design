#pragma once
#include "ImageInterface.hpp"

class RealImage : public ImageInterface {
  public:
  std::string filename;

  RealImage(std::string filename) {
    this->filename = filename;
    loadImageFromDisk();
  }

  void loadImageFromDisk() {
    std::cout << "Loading image from disk: " << filename << std::endl;
  }

  void display() {
    std::cout << "Displaying image: " << filename << std::endl;
  }
};