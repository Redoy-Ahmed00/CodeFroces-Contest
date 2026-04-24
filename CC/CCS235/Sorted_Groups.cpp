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
    string s, ans;
    cin >> s;
    ans = s;
    char mx = s[0];
    
    string g1 = "",g2 = "";
    vi i1,i2;

    rep(i,0,n)
    {
        if(s[i]>=mx)
        {
            mx=s[i];
            g1+=s[i];
            i1.push_back(i);
        }
        else
        {
            g2+=s[i];
            i2.push_back(i);
        }
    }
    
    sort(g1.begin(),g1.end());
    sort(g2.begin(),g2.end());

    int i = 0;
    for(auto x : i1)
    {
        ans[x] = g1[i++];
    }
    i = 0;
    for(auto x : i2)
    {
        ans[x] = g2[i++];
    }
    cout << ans << nl;
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