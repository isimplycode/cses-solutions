#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c;
	cin >> a >> b;
	vector<int> v;
	for (int i=0; i<a; ++i) {
		cin >> c;
		v.push_back(c);
	}
	int dp[b+1];
	dp[0]=0;
	for (int i=1; i<b+1; ++i) {
		dp[i]=INT_MAX;
	}
	for (int i=1; i<b+1; ++i) {
		for (auto j : v) {
			if (i-j>=0) {
				if (dp[i-j]!=INT_MAX)
					dp[i]=min(dp[i],dp[i-j]+1);
			}
		}
	}
	if (dp[b]!=INT_MAX) {
		cout << dp[b];
	} else {
		cout << -1;
	}
}
