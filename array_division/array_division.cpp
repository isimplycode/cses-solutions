#include <bits/stdc++.h>
using namespace std;
 
bool isVal(long long mid,long long k,vector<long long> &nums) {
  int groups = 0;
  long long sum = 0;
  for (int i = 0; i < size(nums); i++) {
    if (nums[i] > mid) {
      return false;
    }
    if (sum + nums[i] > mid) {
      ++groups;
      sum = 0;
    }
    sum += nums[i];
  }
  if (sum > 0) {
    ++groups;
  }
  return groups <= k;
}
 
int main() {
  long long a,b,c;
  vector<long long> nums;
  cin >> a >> b;
  long long total=0;
  for (long long i=0; i<a; ++i) {
    cin >> c;
    total+=c;
    nums.push_back(c);
  }
  long long res=0,l=1,r=total;
  while (l<=r) {
    long long m=(r+l)/2;
    if (isVal(m,b,nums)) {
      r=m-1;
      res=m;
    } else {
      l=m+1;
    }
  }
  cout << res;
}
