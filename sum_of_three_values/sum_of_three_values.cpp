#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c;
	cin >> a >> b;
	unordered_map<int, vector<int>> m;
	vector<int> v;
	for (int i=0; i<a; ++i) {
		cin >> c;
		v.push_back(c);
		m[c].push_back(i);
	}
	sort(begin(v),end(v));
	for (int i=0; i<a; ++i) {
		int l=0, r=a-1;
		while (l<r) {
			if (v[l]+v[r]>b-v[i]) {
				r--;
			} else if (v[l]+v[r]==b-v[i]&&i!=l&&i!=r) {
				unordered_map<int,int> count;
				count[v[l]]++;
				count[v[r]]++;
				count[v[i]]++;
				for (auto& k : count) {
					for (int j=0; j<k.second; ++j) {
						cout << m[k.first][j]+1 << " ";
					}
				}
				return 0;
			} else {
				l++;
			}
		}
	}
	cout << "IMPOSSIBLE";
}
