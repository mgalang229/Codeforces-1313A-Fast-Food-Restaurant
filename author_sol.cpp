#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int a[3];
		cin >> a[0] >> a[1] >> a[2];
		// sort the three elements in non-decreasing order
		sort(a, a + 3);
		int cnt = 0;
		// create a dish from all three elements (separately)
		if (a[2] > 0) {
			a[2]--;
			cnt++;
		}
		if (a[1] > 0) {
			a[1]--;
			cnt++;
		}
		if (a[0] > 0) {
			a[0]--;
			cnt++;
		}
		// create a dish from every pair of the three elements (start from the highest element)
		// "c & b" then "c & a" then "b & a" (this would produce the maximum answer)
		if (a[2] > 0 && a[1] > 0) {
			a[2]--;
			a[1]--;
			cnt++;
		}
		if (a[2] > 0 && a[0] > 0) {
			a[2]--;
			a[0]--;
			cnt++;
		}
		if (a[1] > 0 && a[0] > 0) {
			a[1]--;
			a[0]--;
			cnt++;
		}
		// add 1 to the final answer if all elements are greater than 0
		cout << (a[0] > 0 && a[1] > 0 && a[2] > 0 ? cnt + 1 : cnt) << '\n';
	}
	return 0;
}
