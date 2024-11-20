#pragma once
#include <string>
#include <iostream>
#include "enumLogLevel.hpp"

class LogProcessor {
  public:
  LogProcessor *nextProcessor;

  LogProcessor() {
    nextProcessor = NULL;
  }

  LogProcessor(LogProcessor *nextProcessor) {
    this->nextProcessor = nextProcessor;
  }

  virtual void log(int, std::string) = 0;
};