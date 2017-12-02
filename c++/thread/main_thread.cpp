// thread example
// g++ -std=c++1y main_thread.cpp -o main_thread -lpthread
#include <iostream>       // std::cout
#include <thread>         // std::thread
 
void foo() 
{
  // do stuff...
  std::cout << "This is foo \n";
}

void bar(int x)
{
  // do stuff...
  std::cout << "This is bar " << x << ".\n";
}

int main() 
{
  std::cout << "Hardware Concurrency: " << std::thread::hardware_concurrency()<<"\n";
  std::thread first (foo);     // spawn new thread that calls foo()
  std::thread second (bar,0);  // spawn new thread that calls bar(0)

  std::cout << "main, foo and bar now execute concurrently...\n";

  // synchronize threads:
  first.join();                // pauses until first finishes
  second.join();               // pauses until second finishes

  std::cout << "foo and bar completed.\n";

  return 0;
}
//Edit & Run

