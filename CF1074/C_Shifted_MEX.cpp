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
    
    ll n;
    cin >> n;
    vll a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    

    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());

    ll best = 0, cur = 0;
    ll m = a.size();
    for (int i = 0; i < m; i++)
    {
        if (i == 0 || a[i] != a[i-1] + 1)
            cur = 1;
        else
            cur++;

        best = max(best, cur);
    }

    cout << best << "\n";
    
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