#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

int main (int argc, char *argv[]) {
  int tests = 0;
  unsigned long long k = 0;
  cin >> tests;

  for (int i = 0; i < tests; i++) {
    cin >> k;
    cout << (unsigned long long)(floor(sqrt(1 + 8 * k)) - 1) / 2 << endl;
  }

  return 0;
}
