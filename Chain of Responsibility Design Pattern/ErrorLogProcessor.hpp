#pragma once
#include "LogProcessor.hpp"

class ErrorLogProcessor : public LogProcessor {
  public:
  ErrorLogProcessor(LogProcessor* nextProcessor) {
    this->nextProcessor = nextProcessor;
  }

  void log(int logLevel, std::string message) {
    if (logLevel == ERROR) {
      std::cout << "ERROR LOG : " << message << std::endl;
    }
    else {
      nextProcessor->log(logLevel, message);
    }
  }
};