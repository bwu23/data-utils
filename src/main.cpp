#include <iostream>
#include "TableFormatter.h"
using namespace std;

void foo(int x) {
  cout << x + 1 << endl;
}

int main() {
  void (*func_ptr) (int) = foo;
  func_ptr(3);
}