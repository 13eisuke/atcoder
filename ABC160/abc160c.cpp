#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;

const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const int int_inf = 100000000;
const double eps = 1e-9;

const int dx[4] = { 1, 0, -1, 0 };
const int dy[4] = { 0, 1, 0, -1 };
 
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int k, n;
    cin >> k >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int m = -1;
    for (int i = 0; i < n; i++) {
        chmax(m, a[i+1] - a[i]);
    }
    chmax(m, k - a[n-1]+ a[0]);
    
    cout << k - m << endl;
    
    return 0;
}

