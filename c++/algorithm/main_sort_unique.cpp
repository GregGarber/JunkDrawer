// sort algorithm example
#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector

bool myfunction (int i,int j) { return (i<j); }
bool myfunction2 (int i,int j) { return (i==j); }

struct myclass {
  bool operator() (int i,int j) { return (i<j);}
} myobject;

int main () {
  int myints[] = {32,71,12,45,26,80,12,53,33};
  //I added 2nd 12
  //std::vector<int> myvector (myints, myints+8);               // 32 71 12 45 26 80 53 33
  std::vector<int> myvector (myints, myints+9);               // 32 71 12 45 26 80 53 33

  // using default comparison (operator <):
  std::sort (myvector.begin(), myvector.begin()+4);           //(12 32 45 71)26 80 53 33

  // using function as comp
  std::sort (myvector.begin()+4, myvector.end(), myfunction); // 12 32 45 71(26 33 53 80)

  // using object as comp
  std::sort (myvector.begin(), myvector.end(), myobject);     //(12 26 32 33 45 53 71 80)

  // print out content:
  std::cout << "myvector contains:";
  for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

// begin unique

  std::vector<int>::iterator it_uniq;
  it_uniq=std::unique (myvector.begin(), myvector.end(), myfunction2);
  myvector.resize( std::distance(myvector.begin(),it_uniq) );
  // print out content:
  std::cout << "myvector contains:";
  for (it_uniq=myvector.begin(); it_uniq!=myvector.end(); ++it_uniq)
    std::cout << ' ' << *it_uniq;
  std::cout << '\n';


// end unique
  return 0;
}
