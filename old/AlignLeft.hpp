#pragma once

#include "AlignStrategy.hpp"

class AlignLeft : public AlignStrategy
{
public:
  void render(const std::string& text, mock_context context);
  void write(std::ostream& out);
protected:
private:
};

