#include<bits/stdc++.h>
using namespace std;

typedef struct {
  string language, country;
} Language;

Language lang[] = {{"BONJOUR", "FRENCH"}, {"CIAO", "ITALIAN"}, 
                  {"HALLO", "GERMAN"}, {"HELLO", "ENGLISH"}, 
                  {"HOLA", "SPANISH"}, {"ZDRAVSTVUJTE", "RUSSIAN"}};  

string detect(string word) {
  int l = 0, h = 6;
  while (l < h) {
    int i = (l + h) / 2, test = word.compare(lang[i].language);

    if (!test) return lang[i].country;
    if (test < 0) h = i;
    else l = i + 1;
  }
  return "UNKNOWN";
}

int main(void) {
  string word;
  int i = 1;

  while (1) {
    cin >> word;
    if (!word.compare("#")) break;
    cout << "Case " << i++ << ": "<< detect(word) << endl;
  }

  return 0;
}
