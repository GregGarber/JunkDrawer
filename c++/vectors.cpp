#include <inttypes.h>
#include <iostream>
#include <vector>

using namespace std;

void print_bytes(const void *object, size_t size) {
  size_t i;
  for (i = 0; i < size; i++) {
    std::cout << std::hex << (((const unsigned char *)object)[i] & 0xff) << " ";
  }
  std::cout << std::endl;
}

typedef struct {
  uint8_t a;
  uint8_t b;
  uint8_t c;
} Test;

int main(void) {
  Test test_struct;
  test_struct.a = 0x12;
  test_struct.b = 0x56;
  test_struct.c = 0x9a;
  vector<Test> v;
  v.push_back(test_struct);
  print_bytes(&test_struct, sizeof(test_struct));
  print_bytes(&v, sizeof(v));
  print_bytes(v.data(), sizeof(v.data()));
  print_bytes(&v[0], sizeof(v[0])); // this is what I want

  return 0;
}
