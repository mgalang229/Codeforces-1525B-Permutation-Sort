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
		vector<int> b = a;
		sort(b.begin(), b.end());
		bool checker = true;
		for (int i = 0; i < n; i++) {
			if (a[i] != b[i]) {
				// check if the permutation is already sorted
				checker = false;
				break;
			}
		}
		if (checker) {
			// if it's already sorted, then output 0
			cout << 0;
		} else if (a[0] == b[0] && a[n - 1] == b[n - 1]) {
			// if the first AND last elements are in place, then output 1
			cout << 1;
		} else if ((a[0] == b[0]) || (a[n - 1] == b[n - 1])) {
			// if the first OR last element is in place, then output 1
			cout << 1;
		} else if (a[0] == b[n - 1] && a[n - 1] == b[0]) {
			// if the first and last elements switched places, then output 3
			/*
		
			For example:
			5 4 2 3 1
			2 3 4 5 1 - 1st operation
			2 1 3 4 5 - 2nd operation
			1 2 3 4 5 - 3rd operation
			
			*/
			cout << 3;
		} else {
			// otherwise, the minimum number of operations will always be 2
			cout << 2;
		}
		cout << '\n';
	}
	return 0;
}
