#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl "\n"
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define rrep(i, a, b) for(int i = (a); i >= (b); i--)

typedef long long ll;
typedef vector <int> vi;
typedef vector <double> vd;
typedef vector <ll> vll;

void solve()
{
    long long s, k, m;
    cin >> s >> k >> m;

    long long ans;

    if (s <= k) 
        ans = s * (m / k + 1) - m;
    else
    {
        long long f = m / k;
        long long r = m % k;

        if (f % 2 == 1)
            ans = k - r;
        else
            ans = s - k;
    }

    cout << max(0LL, ans) << endl;
}


int main ()
{
    optimize();
              
    int t = 1;
    cin >> t;

    while(t--)
        solve();
        
    return 0;
}