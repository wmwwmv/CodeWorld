//@ Including Header
#include <csl_std.h>

/*
 *  Name : hdu5494.cpp
 *  Date : 2015年10月5日 下午6:18:50
 *  Copyright : fateud.com
 *  Anti-Mage : The magic ends here.
 */

#define N 1010
int a[N], b[N];

//@ Main Function
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int _, __ = 1;
  for(std::cin >> _; _; --_, ++__) {
    //std::cout << "Case #" << __ <<": ";
    int n, m; cin >> n >> m;
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) cin >> b[i];
    sort(a, a + n, less<int>());
    sort(b, b + n, greater<int>());
    int ans = 0;
    rep(i, 0, m) ans += a[i] - b[i];
    cout << (ans > 0 ? "YES" : "NO") << endl;
  }
  return 0;
}
