/*
*  author: i_64 "Mrunal Ahire"
*  created: 01/05/2020, 12:50:16 AM
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#define int            long long
#define endl           '\n'
#define x              first
#define y              second
#define remove         erase
#define pb             push_back
#define mod1           1000000007
#define mod2           998244353
#define xrange(i,s,n)  for(int i=s;i<n;i++)
#define yrange(i,n,s)  for(int i=n;i>=s;i--)
#define deb(x)         cerr<<'\t'<<#x<<" is "<<(x)<<endl
#define usefile        freopen("q1_input0.txt","r",stdin);freopen("q1_output0.txt","w",stdout);
#define debvec(v)      cerr<<#v<<" is [ ";for(auto el:v)cerr<<el<<" ";cerr<<"]\n";
#define debmap(m)      cerr<<#m<<" is [ ";for(auto p:m)cerr<<"("<<p.x<<","<<p.y<<") ";cerr<<"]\n";
#define tezz           int32_t main(){ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);solve();return 0;}
#define tezzn          int32_t main(){ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0); int32_t t;cin>>t;while(t--)solve();return 0;}
using namespace std;
// . . . S O L U T I O N . . . B E G I N S . . . F R O M . . . H E R E . . .

string s;

void solve () {
    cin >> s;
    int even = 0, odd = 0;
    xrange(i, 0, s.length()) {
        if (s[i] == '-') continue;
        if (i & 1) odd += (s[i] - '0');
        else even += (s[i] - '0');
    }
    int diff = abs(even - odd);
    if (diff % 11 != 0) cout << "NO" << endl;
    else if ((even+odd) % 3 != 0) cout << "NO" << endl;
    else cout << "YES" << endl;
}
tezzn