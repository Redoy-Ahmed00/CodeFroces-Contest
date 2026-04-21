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
    string s;
    cin >> s;

    int n = s.size(), cnt = 0;
    
    for(int i = 0; i < n - 1; i++)
        cnt += (s[i] == s[i + 1]);
    cout << (cnt > 2 ? "NO" : "YES") << nl;


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