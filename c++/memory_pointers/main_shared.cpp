// make_shared example
// g++ -std=c++1y main_shared.cpp -o main_shared
#include <iostream>
#include <memory>
#include <string>

int main () {

  std::shared_ptr<int> foo = std::make_shared<int> (10);
  // same as:
  std::shared_ptr<int> foo2 (new int(10));

  auto bar = std::make_shared<int> (20);

  auto baz = std::make_shared<std::pair<int,int>> (30,40);

  auto frack = std::make_shared<std::pair<int,std::string>> (30,"Fat Tire");
  std::string s = "Flat Tyre\n";
  std::cout << "*foo: " << *foo << '\n';
  std::cout << "*bar: " << *bar << '\n';
  std::cout << "*baz: " << baz->first << ' ' << baz->second << '\n';
  std:: cout << "s:" << s;
  std::cout << "*frack: " << frack->first << ' ' << frack->second << '\n';

  return 0;
}
