#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
  int t, i = 0, w = 0, h = 0;
  cin >> t;

  while (i++ < t) {
    cin >> w;
    int high = -1, low = 0, back = -1;
    while (w--) {
      cin >> h;
      if (h > back) high++;
      if (h < back) low++;
      back = h;
    }
    cout << "Case " << i << ": " << high << " " << low << endl;
  }

  return 0;
}
