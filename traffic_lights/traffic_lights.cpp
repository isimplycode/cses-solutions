#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int x,n,a;
  cin >> x >> n;
  set<int> s;
  multiset<int> ms;
  s.insert(0);
  s.insert(x);
  ms.insert(x);
  for (int i=0; i<n; ++i) {
    cin >> a;
    auto it=s.upper_bound(a);
    auto itt=it;
    itt--;
    s.insert(a);
    ms.erase(ms.find(*it-*itt));
    ms.insert(*it-a);
    ms.insert(a-*itt);
    auto ans=end(ms); ans--;
    cout << *ans << " ";
  }
}
