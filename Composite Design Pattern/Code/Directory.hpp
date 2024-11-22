#pragma once
#include "FileSystemInterface.hpp"

class Directory : public FileSystemInterface
{
public:
  std::string name;
  std::vector<FileSystemInterface *> fileSystemList;

  Directory(std::string name)
  {
    this->name = name;
  }

  void add(FileSystemInterface *obj)
  {
    fileSystemList.push_back(obj);
  }

  void ls()
  {
    std::cout << "Directory name: " << this->name << std::endl;

    for (auto obj : fileSystemList)
    {
      obj->ls();
    }
  }
};