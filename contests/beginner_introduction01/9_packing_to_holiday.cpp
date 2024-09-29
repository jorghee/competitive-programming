#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
  int t = 0, i = 0, l = 0, w = 0, h = 0;
  cin >> t;

  while (i++ < t) {
    cin >> l >> w >> h;
    if (l <= 20 && w <= 20 && h <= 20)
      cout << "Case " << i << ": good" << endl;
    else
      cout << "Case " << i << ": bad" << endl;
  }
  
  return 0;
}
