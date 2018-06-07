#include <iostream>
#include <string>
#include <vector>
#include <iterator>

/// auto-cout-ing a vector of cout-able variables using template classes
template <class T>
void CoutVector(const std::vector<T>& v)
{
  std::copy(std::begin(v), std::end(v), std::ostream_iterator<T>(std::cout," "));
}

/// main function with argc inputs of argv
int main(int argc, char* argv[])
{
  const std::vector<std::string> args(argv, argv + argc);

  CoutVector(args);

  std::cout << "\n";
}
