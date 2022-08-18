#include <bits/stdc++.h>
#include <vector>
using namespace std;
// Pre Definitions
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first;
#define S second;
#define PB push_back;
#define MP make_pair;
#define REP(i, a, b) for (int i = a; i < b; i++)
#define SQ(a) (a) * (a);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a[5] = {0,2,-5,-3,1};
    sort(a,a+5);
    REP(i,0,5)
        cout << a[i] << " ";
    cout << endl;
    int x = -3;
    auto k = lower_bound(a,a+5,x)-a;
    cout << k;
}