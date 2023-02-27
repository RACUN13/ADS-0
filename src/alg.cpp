#include <iostream>

using namespace std;

int gcd(int a, int b) {
  int c;
  while (b != 0) {
    c = a % b;
    a = b;
    b = c;
  }
return a;
}

int main() {
  cout << gcd(40, 60) << endl;
}
