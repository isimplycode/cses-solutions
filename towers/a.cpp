#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b;
	cin >> a;
	vector<int> v;
	for (int i=0; i<a; ++i) {
		cin >> b;
		int l=0,r=size(v),m;
		while (l<r) {
			m=(r+l)/2;
			if (v[m]>b) {
				r=m;
			} else {
				l=m+1;
			}
		}
		if (l!=size(v)) {
			v[l]=b;
		} else {
			v.push_back(b);
		}
	}
	cout << size(v);
}
