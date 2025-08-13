#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

string a[] = {"Football", "Running", "Swimming"};
int n;
ll cnt = 0;

void fun(int i,string cur,string ans) {

    if (i == 1) {
        cnt++;
        cout << ans << endl;
        return;
    }
    for (auto j : a) {
        if (j != cur) {
            fun(i-1,j,ans+" "+j);
        }
    }
}

void solve() {
    cin >> n;
    for (auto cur:a) {
        fun(n, cur,cur);
    }
    cout << "count = " << cnt << endl;
}

int main() {
    Fast;
    int tt = 1;
    //cin >> tt;
    while (tt--)solve();
}




