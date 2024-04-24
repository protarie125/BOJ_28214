#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;

ll n, k, p;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n >> k >> p;

  auto ans = 0LL;
  for (auto i = 0; i < n; ++i) {
    auto ct = 0LL;
    for (auto j = 0; j < k; ++j) {
      ll x;
      cin >> x;

      if (0 == x) {
        ++ct;
      }
    }

    if (ct < p) {
      ++ans;
    }
  }
  cout << ans;

  return 0;
}