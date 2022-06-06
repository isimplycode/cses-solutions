#include <bits/stdc++.h>
using namespace std;

int main() {
  int a;
  cin >> a;
  set<int> s;
  for(int i=0; i<a; i++) {
    int b;
    cin >> b;
    s.insert(b);
  }
  cout << s.size();
}
