/*
*  author: i_64 "Mrunal Ahire"
*  created: 01/05/2020, 12:40:24 AM
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
#define usefile        freopen("q2_input0.txt","r",stdin);freopen("q2_output0.txt","w",stdout);
#define debvec(v)      cerr<<#v<<" is [ ";for(auto el:v)cerr<<el<<" ";cerr<<"]\n";
#define debmap(m)      cerr<<#m<<" is [ ";for(auto p:m)cerr<<"("<<p.x<<","<<p.y<<") ";cerr<<"]\n";
#define tezz           int32_t main(){ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);solve();return 0;}
#define tezzn          int32_t main(){ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0); int32_t t;cin>>t;while(t--)solve();return 0;}
using namespace std;
// . . . S O L U T I O N . . . B E G I N S . . . F R O M . . . H E R E . . .


int n;

void solve () {
    cin >> n;
    int a[n];
    xrange(i, 0, n) cin >> a[i];
    int g = a[0], i = 1;
    while (g != 1 && i < n) {
        g = __gcd(a[i], g);
        i++;
    }
    if (g == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
}
tezzn
