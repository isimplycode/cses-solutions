#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int a,b;
  string s;
  cin >> a >> b;
  vector<vector<int>> v(a,vector<int>(a));
  vector<string> frst(a);
  for (int i=0; i<a; ++i) {
    cin >> frst[i];
  }
  for (int i=0; i<a; ++i) {
    for (int j=0; j<a; ++j) {
      int tree=0;
      if (frst[i][j]=='*')
        tree=1;
      if (i&&j)
        v[i][j]=v[i-1][j]+v[i][j-1]+tree-v[i-1][j-1];
      else if (!i&&j)
        v[i][j]=v[i][j-1]+tree;
      else if (i&&!j)
        v[i][j]=v[i-1][j]+tree;
      else
        v[i][j]=0+tree;
    }
  }
  int d,e,f,g;
  for (int i=0; i<b; ++i) {
    cin >> d >> e >> f >> g;d--;e--;f--;g--;
    if (e&&d)
      cout << v[f][g]-v[f][e-1]-v[d-1][g]+v[d-1][e-1] << "\n";
    else if (!e&&d)
      cout << v[f][g]-v[d-1][g] << "\n";
    else if (e&&!d)
      cout << v[f][g]-v[f][e-1] << "\n";
    else
      cout << v[f][g] << "\n";
  }
}
