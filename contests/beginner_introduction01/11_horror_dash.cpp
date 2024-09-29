#include<iostream>
#include<stdio.h>
using namespace std;

int main (int argc, char *argv[]) {
  int t, i = 0, v, n;
  cin >> t;

  while (i < t) {
    while (scanf("%d", &v) != EOF) {
      int pivot = -1;
      while (v--) {
        scanf("%d", &n);
        if (n > pivot) pivot = n;
      }
      // Why not funtions if while (i++ < t) ?
      printf("Case %d: %d\n", ++i, pivot);
    }
  }

  return 0;
}
