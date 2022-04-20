#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;

  if (((N % 500 == 0) && (A != 0)) || (A >= N % 500)) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
}