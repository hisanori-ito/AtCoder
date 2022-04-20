#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  
  int number = 1;
  
  for (int i = 0; i < N; i++) {
    int a = number + K;
    int b = number * 2;
    
    if (a < b) {
      number += K;
    }
    else {
      number *= 2;
    }
  }
  
  cout << number << endl;
}