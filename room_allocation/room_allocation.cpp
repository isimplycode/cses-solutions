#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n,a,b;
  cin >> n;
  int ans[n];
  vector<pair<pair<int,int>,int>> v(n);
  for (int i=0; i<n; ++i) {
    cin >> a >> b;
    v[i].first.first=a;
    v[i].first.second=b;
    v[i].second=i;
  }
  sort(begin(v),end(v));
  priority_queue<pair<int,int>> pq;
  int res=1;
  for (int i=0; i<n; ++i) {
    if (!pq.size()) {
      pq.push({-v[i].first.second,1});
      ans[v[i].second]=1;
    } else {
      if (-pq.top().first>=v[i].first.first) {
        int d=pq.size();
        res=max(res,d+1);
        pq.push({-v[i].first.second,d+1});
        ans[v[i].second]=(d+1);
      } else {
        pq.push({-v[i].first.second,pq.top().second});
        ans[v[i].second]=pq.top().second;
        pq.pop();
      }
    }
  }
  cout << res << "\n";
  for (int i=0; i<n; ++i) {
    cout << ans[i] << " ";
  }
}
