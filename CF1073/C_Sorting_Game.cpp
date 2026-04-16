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
    
    int l = 0;
    bool gotone = false;
    int op = -1;
    int zp = -1;
    int ops = 0;

    int maxLen = 0, currLen = 0;
    int startIndex = -1, tempStart = -1;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            if (currLen == 0)
                tempStart = i;
            currLen++;
        }
        else
        {
            if (currLen > maxLen)
            {
                maxLen = currLen;
                startIndex = tempStart;
            }
            currLen = 0;
        }
    }

    
    if (currLen > maxLen)
    {
        maxLen = currLen;
        startIndex = tempStart;
    }

    int immediateZeroIndex = -1;
    if (startIndex != -1 && startIndex + maxLen < n)
        immediateZeroIndex = startIndex + maxLen;    

    op = startIndex;
    zp = immediateZeroIndex;   

    rep(i,op,n)
    {
        if(s[i] != s[op])
            ops++;
    }

    if(op == -1 || zp == -1)
            cout << "Bob" << endl;
    else
    {
        if(ops % 2 == 0)
            cout << "Bob" << endl;
        else
        {
            cout << "Alice" << endl;
            cout << zp-op+1 << endl;
            cout << op+1 << ' ' << zp+1 << endl;
        }
    }
    

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