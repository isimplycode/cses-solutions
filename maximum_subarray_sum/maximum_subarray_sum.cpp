#include <bits/stdc++.h>
using namespace std;

int main(){
	int a;
	cin >> a;
	long long max = INT_MIN;
	long long currmax = 0;
	for (int i = 0; i < a; i++) {
		int b;
		cin >> b;
		currmax += b;
		if (currmax > max){
			max = currmax;
			}
		if (currmax < 0) {
			currmax = 0;
			}
		}
	cout << max;
}
