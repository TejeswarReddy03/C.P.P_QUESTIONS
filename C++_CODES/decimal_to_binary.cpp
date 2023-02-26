#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  long n;
  cin >> n;
  long ans = 0;
  int i = 0;
  while (n != 0) {
    ans += (n % 2) *(long) pow(10, i);

    n /= 2;
    i++;
  }
  cout << ans;
}
