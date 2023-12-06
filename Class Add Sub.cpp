#include <iostream>
using namespace std;
// Addition or Subtration
class Addition {

public:
  int Sum;
  Addition(int a, int b) {
    // If Subtraction then change it to -
    Sum = a + b;
  }
};
int main() {
  Addition t(34, 56);
  cout << t.Sum;
  return 0;
}
