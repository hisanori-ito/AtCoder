#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, min_times = 100, times = 0;
  cin >> N;
  
  for (int i = 0; i < N; i++) {
    int A, tmp;
    cin >> A;
    
    while (A % 2 == 0) {
      A /= 2; 
      times++;
    }
    
    tmp = times;
    min_times = min(tmp, min_times);
    times = 0;
  }
  
  cout << min_times << endl; 
}
