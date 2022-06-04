#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a;
    cin >> a;
    while (a != 1) {
        cout << to_string(a)+" ";
        if (a%2 == 0) {
            a = a/2;
        } else {
            a = (a*3)+1;
        }
    }
    cout << "1";
}
