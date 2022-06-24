#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c;
	cin >> a;
	vector<pair<int,int>> v;
	for (int i=0; i<a; ++i) {
		cin >> b >> c;
		v.push_back({b,c});
	}
	sort(begin(v),end(v));
	long long currtime=0,res=0;
	for (int i=0; i<size(v); ++i) {
		currtime+=v[i].first;
		res+=v[i].second-currtime;
	}
	cout << res;
}
