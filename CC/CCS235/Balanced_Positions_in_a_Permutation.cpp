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
    int n, cnt = 0;
    cin >> n;

    vi v(n);
    rep(i,0,n)
        cin >> v[i];

    rep(i,0,n)
    {
        int l = 0, r = 0;
        for(int j = 0; j <= i-1; j++)
            if(v[i]>v[j])
                l++;
        for(int j = i+1; j < n; j++)
            if(v[i]<v[j])
                r++;

        if(l==r)
        {
            cnt++;
        }
    }
    cout << cnt << nl;
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