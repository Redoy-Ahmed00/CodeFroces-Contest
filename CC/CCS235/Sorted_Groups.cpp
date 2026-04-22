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
    string s;
    cin >> s;

    vi fpos, spos;
    string s1="",s2="",ans="";

    vector<char> sufmax(n);
    sufmax[n-1] = s[n-1];

    for(int i = n-2; i >= 0; i--)
        sufmax[i] = max(s[i], sufmax[i+1]);

    rep(i,0,n)
    {
        if(s[i] == sufmax[i])
        {
            fpos.push_back(i);
            s1 += s[i];
        }
        else
        {
            spos.push_back(i);
            s2+=s[i];
        }
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    int p =s1.size(), q = s2.size();
    int k1 = 0, k2=0;
    rep(i,0,n)
    {
        if(i==fpos[k1])
        {
            ans+=s1[k1];
            k1++;
        }
        else
        {
            ans+=s2[k2];
            k2++;
        }
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