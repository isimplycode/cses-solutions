#include <bits/stdc++.h>
using namespace std;

int main() {
	string s,t;
	cin >> s >> t;
	int dp[size(s)+1][size(t)+1];
	for (int i=0; i<=size(s); ++i) {
		for (int j=0; j<=size(t); ++j) {
			dp[i][j]=INT_MAX;
		}
	}
	dp[0][0]=0;
	for (int i=0; i<=size(s); ++i) {
		for (int j=0; j<=size(t); ++j) {
			if (i) dp[i][j]=min(dp[i-1][j]+1,dp[i][j]);
			if (j) dp[i][j]=min(dp[i][j-1]+1,dp[i][j]);
			if (i&&j) {
				if (s[i-1]==t[j-1]) {
					dp[i][j]=min(dp[i][j],dp[i-1][j-1]);
				} else {
					dp[i][j]=min(dp[i][j],dp[i-1][j-1]+1);
				}
			}
		}
	}
	cout << dp[size(s)][size(t)];
}
