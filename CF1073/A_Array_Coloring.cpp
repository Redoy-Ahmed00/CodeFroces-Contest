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
    int n;
    cin >> n;

    vi v(n);
    rep(i,0,n)
        cin >> v[i];
    
    int f = v[0]%2;
    int s = v[1]%2;

    bool has = true;
    rep(i,0,n)
    {
        if(i%2==0)
        {
            if(v[i]%2 != f)
                has = false;
        }
        else
        {
            if(v[i]%2 != s)
                has = false;
        }
    }

    if(has)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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