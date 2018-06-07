#include <iostream>
#include <string>
#include <vector>
#include <iterator>

template <class T>
void CoutVector(const std::vector<T>& v)
{
  std::copy(std::begin(v), std::end(v), std::ostream_iterator<T>(std::cout," "));
}


int main(int argc, char* argv[])
{
  const std::vector<std::string> args(argv, argv + argc);

  CoutVector(args);

  std::cout << "\n";
}
