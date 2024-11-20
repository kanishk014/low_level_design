#pragma once
#include "LogProcessor.hpp"

class DebugLogProcessor : public LogProcessor
{
public:
  DebugLogProcessor(LogProcessor *nextProcessor)
  {
    this->nextProcessor = nextProcessor;
  }

  void log(int logLevel, std::string message)
  {
    if (logLevel == DEBUG)
    {
      std::cout << "DEBUG LOG : " << message << std::endl;
    }
    else
    {
      nextProcessor->log(logLevel, message);
    }
  }
};