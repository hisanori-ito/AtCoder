#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, fx = 0;
  cin >> N;

  for (int i = 8; i >= 0; i--) {
    int x = pow(10, i + 1);
    int z = N % x;

    z = z * 10 / x;
    fx += z;
  }

  if (N % fx == 0) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
}
