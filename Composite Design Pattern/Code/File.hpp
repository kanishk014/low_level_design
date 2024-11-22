#pragma once
#include "FileSystemInterface.hpp"

class File : public FileSystemInterface
{
public:
  std::string name;

  File(std::string name)
  {
    this->name = name;
  }

  void ls()
  {
    std::cout << "File name: " << this->name << std::endl;
  }
};