#pragma once

#include<string>
#include<iostream>

// fix this later
class mock_context {
};

class AlignStrategy
{
public:
  virtual void render(const std::string& text, mock_context context) = 0;

  /// Needed for printing
  virtual void write(std::ostream& out) = 0;
  friend std::ostream& operator<<(std::ostream& out, AlignStrategy& alignment);

};

