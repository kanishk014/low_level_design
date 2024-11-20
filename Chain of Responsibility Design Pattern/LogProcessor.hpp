#pragma once
#include <string>
#include <iostream>
#include "enumLogLevel.hpp"

class LogProcessor
{
public:
  LogProcessor *nextProcessor;

  LogProcessor()
  {
    nextProcessor = NULL;
  }

  virtual void log(int, std::string) = 0;
};