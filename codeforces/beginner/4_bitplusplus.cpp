#include <iostream>
#include <string>
using namespace std;

int main (int argc, char *argv[]) {
  int n{}, i{}, operation{};
  string str;
  cin >> n; 

  while (i++ < n) {
    cin >> str;
    (str.find('+') != str.npos) ? operation++ : operation--;
  }

  cout << operation << endl;

  return 0;
}
