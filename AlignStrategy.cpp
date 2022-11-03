#include "AlignStrategy.hpp"

void AlignStrategy::render(const std::string& text, mock_context context)
{
  throw "Not implemented.";
}

void AlignStrategy::write(std::ostream& out)
{
  out << "AlignStrategy: BaseElement";
}

std::ostream& operator<<(std::ostream& out, AlignStrategy& alignment)
{
  alignment.write(out);
  return out;
}
