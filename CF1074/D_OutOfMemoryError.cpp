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
    ll n, m, h;

    cin >> n >> m >> h;

    vll ia(n+1), tmp(n+1), crash(n+1,0);
    ll crashed = 0;
    

    rep(i,1,n+1)
    {
        cin >> ia[i];
        tmp[i] = ia[i];
    }

    rep(i,1,m+1)
    {
        ll b, c;
        cin >> b >> c;

        if(crash[b] == crashed)
            tmp[b] += c;
        else
        {
            crash[b] = crashed;
            tmp[b] = ia[b];
            tmp[b] += c;
        }

        if(tmp[b] > h)
            crashed++;
    }

    rep(i,1,n+1)
    {
        if(crash[i] == crashed)
            cout << tmp[i];
        else
            cout << ia[i];
        if(i < n+1)
            cout << ' ';
    }
    cout <<endl;

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