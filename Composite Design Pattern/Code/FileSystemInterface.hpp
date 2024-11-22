#pragma once
#include <string>
#include <vector>
#include <iostream>

class FileSystemInterface {
  public:
  virtual void ls() = 0;
};