#include <bits/stdc++.h>
using namespace std;
#define MAX 100001

int parent[MAX];

int getRoot (int a) {
    if (a == parent[a]) return a;
    return getRoot(parent[a]);
}

void union_ (int a, int b) {
    int ra = getRoot(a);
    int rb = getRoot(b);
    if (ra != rb) parent[ra] = rb;
}

int32_t main () {
    // freopen("q3_input5.txt", "r", stdin);
    // freopen("q3_output5.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    clock_t start, end;
    start = clock();
    int t;
    cin >> t;
    while (t--) {
        int n, k, l, a, b, r1, r2;
        bool flag = true;
        cin >> n >> k >> l;
        for (int i = 0; i <= n; i++) parent[i] = i;
        while (k--) {
            cin >> a >> b;
            union_(a, b);
        }
        while (l--) {
            cin >> a >> b;
            if (flag) {
                r1 = getRoot(a);
                r2 = getRoot(b);
                if (r1 == r2) flag = false;
            }
        }
        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
        for (int i = 1; i <= n; i++) cout << parent[i] << " "; cout << endl;
    }
    end = clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cerr << "Time taken by program is : " << setprecision(8) << fixed << time_taken << " sec " << endl;
    return 0;
}