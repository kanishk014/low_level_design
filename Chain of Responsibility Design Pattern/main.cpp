#include <bits/stdc++.h>
#include "InfoLogProcessor.hpp"
#include "DebugLogProcessor.hpp"
#include "ErrorLogProcessor.hpp"
#include "LogProcessor.hpp"

using namespace std;

int main()
{
  LogProcessor *logger = new InfoLogProcessor(new DebugLogProcessor(new ErrorLogProcessor(NULL)));

  logger->log(INFO, "This is info message");
  logger->log(DEBUG, "This is debug message");
  logger->log(ERROR, "This is error message");

  return 0;
}