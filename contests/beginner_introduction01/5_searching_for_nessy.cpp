#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
  int t = 0, n = 0, m = 0, i = 0; 
  cin >> t;

  while (i++ < t) {
    cin >> n >> m;
    cout << (n / 3) * (m / 3) << endl;
  }

  return 0;
}

