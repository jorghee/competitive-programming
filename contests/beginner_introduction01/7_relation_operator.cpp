#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
  int t = 0, a = 0, b = 0, i = 0;
  cin >> t;

  while (i++ < t) {
    cin >> a >> b;
    if (a < b)
      cout << "<" << endl;
    else if (a == b)
      cout << "=" << endl;
    else
      cout << ">" << endl;
  }

  return 0;
}
