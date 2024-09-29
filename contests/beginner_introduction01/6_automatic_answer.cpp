#include <cstdlib>
#include <iostream>
using namespace std;

int main (int argc, char *argv[]) {
  int t = 0, n = 0, i = 0, r = 0;
  cin >> t;

  while (i++ < t) {
    cin >> n;
    n = ((n * 567 / 9 + 7492) * 235 / 47) - 498; 
    cout << abs(n / 10) % 10 << endl;
  }

  return 0;
}
