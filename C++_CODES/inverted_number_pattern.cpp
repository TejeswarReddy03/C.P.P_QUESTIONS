#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int i = 1;
  while (i <= n) {
    int o = n + 1 - i;
    int g = o;
    while (o > 0) {
      cout << g;
      o--;
    }

    int k = 1;
    while (k != i) {
      cout << " ";
      k++;
    }
    i++;
    cout << endl;
  }
}
