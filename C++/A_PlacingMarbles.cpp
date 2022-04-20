#include <bits/stdc++.h>
using namespace std;

int main() {
  int s, a, b, c;
  cin >> s;
  
  a = s / 100;
  
  b = s % 100 / 10;
  
  c = s % 100 % 10;
    
  cout << a + b + c << endl;
}