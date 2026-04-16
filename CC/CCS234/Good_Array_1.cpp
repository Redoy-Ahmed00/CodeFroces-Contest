//Not Solved

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
    int ops = 0;
    for(int i = 0; i < n; i++)
    {
        set<int> s;
        for(int j = i; j < n; j++)
        {   
            if(s.find(v[j])==s.end())
            {
                s.insert(v[j]);
            }
            else
            {
                s.erase(v[j]);
                if(s.size() == 0)
                {
                i = j;
                ops++;
                s.clear();
                break;
                }
            }  
        }
        s.clear();
    }
    cout << ops << endl;
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