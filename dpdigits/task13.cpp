#include <bits/stdc++.h>

using namespace std;

const int LEN = 300;
const long long oo = LLONG_MAX / 3;

long long dp[LEN + 10][11], x[LEN + 10];

long long cal(int i, int s) {
	if (dp[i][s] != -1) return dp[i][s];
	dp[i][s] = 0;
	if (i == LEN) return 0;
	for (int j = 0; j <= min(9, s); ++j) {
		dp[i][s] += cal(i + 1, s - j);
		if (dp[i][s] > oo) dp[i][s] = oo;
	}
	return dp[i][s];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	memset(dp, -1, sizeof(dp));
	dp[LEN][0] = 1;
	for (int i = 1; i <= 10; ++i) dp[LEN][i] = 0;
	cal(1, 10);
	long long k;
	cin >> k;
	for (int i = 0, s = 10; i < LEN; ++i) {
		for (int j = 0; j <= min(9, s); ++j) {
			if (k > dp[i + 1][s - j]) {
				k -= dp[i + 1][s - j];
			} else {
				x[i] = j;
				s -= j;
				break;
			}
		}
	}
	for (int i = 0, ok = 0; i < LEN; ++i) {
		if (x[i] != 0) ok = 1;
		if (ok) cout << x[i];
	}
	return 0;
}