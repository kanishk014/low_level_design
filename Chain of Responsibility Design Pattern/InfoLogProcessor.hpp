#pragma once
#include "LogProcessor.hpp"

class InfoLogProcessor : public LogProcessor
{
public:
  LogProcessor *nextProcessor;
  InfoLogProcessor(LogProcessor *nextProcessor)
  {
    this->nextProcessor = nextProcessor; 
  }

  void log(int logLevel, std::string message)
  {
    if (logLevel == INFO)
    {
      std::cout << "INFO LOG : " << message << std::endl;
    }
    else
    {
      nextProcessor->log(logLevel, message);
    }
  }
};