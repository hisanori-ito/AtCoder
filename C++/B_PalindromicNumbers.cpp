#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, j = 0;
  cin >> A >> B;

  for (int i = A; i <= B; i++) {
    int a, b, c, d;

    a = i / 10000;
    b = i % 10000 / 1000;
    c = i % 10000 % 1000 % 100 / 10;
    d = i % 10000 % 1000 % 100 % 10;

    if ((a == d) && (b == c))
      j++;
  }

  cout << j << endl;
}
