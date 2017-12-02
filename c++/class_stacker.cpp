#include <inttypes.h>
#include <string.h>
#include <vector>
struct Shit {
  int a;
  uint8_t *b;
};

class Stackee {
public:
  int a;
};

class Stack {
public:
  std::vector<Shit> shit;
  template <class T> void append(T skee) {
    Shit s;
    // Stackee skee;
    const void *ptr = &skee;
    s.a = 3;
    s.b = new uint8_t(sizeof(skee));
    memcpy(s.b, ptr, sizeof(skee));
    shit.push_back(s);
  }
  /*
  void append(){
      Shit s;
      Stackee skee;
      const void *ptr = &skee;
      s.a = 3;
      s.b = new uint8_t(sizeof(skee));
      memcpy( s.b, ptr, sizeof(skee) );
      shit.push_back(s);
  }
  */
};

int main(void) {
  Stack stack;
  Stackee skee;
  stack.append(skee);
  // stack.append();
  return 0;
}
