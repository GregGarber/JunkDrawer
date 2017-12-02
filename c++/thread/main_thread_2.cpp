// thread example
// g++ -std=c++1y main_thread.cpp -o main_thread -lpthread
#include <iostream>       // std::cout
#include <thread>         // std::thread
#include <mutex>
#include <unistd.h>
 
std::mutex mu;

void shared_cout(std::string words, int numOne, int numTwo=0){
    mu.lock();
    std::cout <<  words << numOne << " "<< numTwo <<"\n";
    mu.unlock();
}

void foo() 
{
  // do stuff...
    for(int i=0; i<10; i+=2){
        shared_cout("This is foo", i, 1);
        //std::cout << "This is foo "<< i <<"\n";
        usleep(1000*1000);
    }
}

void bar(int x)
{
  // do stuff...
    for(int i=1; i<10; i+=2){
        shared_cout("This is bar", i, 2);
        //std::cout << "This is bar " << x << " "<< i <<"\n";
        usleep(1000*1000);
    }
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

