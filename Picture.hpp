#pragma once

#include <string>

class Picture
{
public:
  virtual std::string url() = 0;
  virtual std::string dim() = 0;
  virtual std::string content() = 0;
protected:

private:

};

