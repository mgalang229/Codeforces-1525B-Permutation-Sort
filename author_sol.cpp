#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// set 'ans' to 2 (minimum number of operations)
		int ans = 2;
		if (is_sorted(a.begin(), a.end())) {
			// if the permutation is already sorted, then change 'ans' to 0
			ans = 0;
		} else if (a[0] == 1 || a[n - 1] == n) {
			// if the first or last element (or both) is in place then, then change 'ans' to 1
			ans = 1;
		} else if (a[0] == n && a[n - 1] == 1) {
			// if the first and last element switched places, then change 'ans' to 3
			ans = 3;
		}
		cout << ans << '\n';
	}
	return 0;
}
