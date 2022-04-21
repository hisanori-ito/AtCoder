#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K, sum_dist = 0;
  cin >> N >> K;

  for (int i = 0; i < N; i++) {
    int x, dist_A, dist_B;
    cin >> x;

    // ロボットAの場合
    dist_A = 2 * x;

    // ロボットBの場合
    if (K >= x)
      dist_B = 2 * (K - x);
    else
      dist_B = 2 * (x - K);

    if (dist_A <= dist_B)
      sum_dist += dist_A;
    else
      sum_dist += dist_B;
  }

  cout << sum_dist << endl;
}
