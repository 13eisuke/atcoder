#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const double eps = 1e-9;

int main()
{
    ll N, K, S, tmp = 1000000000;
    cin >> N >> K >> S;
    if (S == 1000000000) tmp = 1;
    for (int i = 0; i < K; i++) cout << S << " ";
    for (int i = K; i < N; i++) cout << tmp << " ";
    return 0;
}

