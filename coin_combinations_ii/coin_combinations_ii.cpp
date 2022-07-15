#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c;
	int MOD=1000000000+7;
	cin >> a >> b;
	vector<int> v;
	for (int i=0; i<a; ++i) {
		cin >> c;
		v.push_back(c);
	}
	int dp[b+1];
	dp[0]=1;
	for (int i=1; i<b+1; ++i) {
		dp[i]=0;
	}
	for (auto i : v) {
		for (int j=1; j<=b; ++j) {
			if (j-i>=0) {
				dp[j]+=dp[j-i];
				dp[j]=dp[j]%MOD;
			} 
		}
	}
	cout << dp[b];
}
