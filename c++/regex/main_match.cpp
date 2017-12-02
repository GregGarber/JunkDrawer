// match_results::format
// - using cmatch, a standard alias of match_results<const char*>
// g++ -std=c++1y main_match.cpp -o main_match
#include <iostream>
#include <regex>

int main ()
{
  std::cmatch m;

  std::regex_match ( "subject", m, std::regex("(sub)(.*)") );

  std::cout << m.format ("the expression matched [$0].\n");
  std::cout << m.format ("with sub-expressions [$1] and [$2].\n");

  return 0;
}
