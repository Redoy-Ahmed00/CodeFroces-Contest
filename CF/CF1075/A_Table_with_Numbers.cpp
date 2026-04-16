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
    int n, h, l;
    cin >> n >> h >> l;

    int cntn = 0, cnth = 0, cntl = 0;

    rep(i,0,n)
    {
        int a;
        cin >> a;

        if(a <= h)  cnth++;
        if(a <= l)  cntl++;
        if(a <= h || a <= l)  cntn++;
    }

    int valid = min(cnth, cntl);

    cout << min(valid, cntn/2) << endl;
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