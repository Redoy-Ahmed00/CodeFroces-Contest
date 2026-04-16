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
    int n, k, zc = 0, ans = 0;
    cin >> n >> k;

    string s;
    cin >> s;

    rep(i,0,n)
    {
        if(s[i]=='0')
            zc++;
        else 
        {
            ans += min(zc, k);
            k = max(k-zc,0);
            zc = 0;
        }
    }
        
    int oc = count(s.begin(), s.end(), '1'); 
    cout << oc+ans << endl;
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