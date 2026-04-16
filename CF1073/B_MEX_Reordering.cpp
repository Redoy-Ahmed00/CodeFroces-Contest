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
    sort(v.rbegin(), v.rend());

    vi lf(101, 0), rf(101,0);

    rep(i, 0, n)
        rf[v[i]]++;

    bool can = true;

    

    rep(i,0, n)
    {
        int lmex;
        int rmex;

        lf[v[i]]++;
        rf[v[i]]--;

        rep(j,0,101)
        {
            if(lf[j] == 0)
            {
                lmex = j;
                break;
            }
        }

        rep(j,0,101)
        {
            if(rf[j] == 0)
            {
                rmex = j;
                break;
            }
        }

        if(lmex == rmex)
        {
            can = false;
            break;
        }
    }

    if(can)
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