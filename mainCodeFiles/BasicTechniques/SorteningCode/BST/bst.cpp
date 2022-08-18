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

    vector a = {5, 3, 12, -3, 7, 9, 11, 4, -5, -9, -25};
    sort(a.begin(), a.end());

    // Xuat sau sort
    REP(i, 0, a.size())
    cout << a[i] << " ";
    cout << endl;
    // Trien khai tim kiem nhin phan
    int x;
    cin >> x;
    int start = 0, end = a.size() - 1;
    while (start <= end)
    {
        int k = (start + end) / 2;
        if (a[k] == x)
            cout << "Tim thay " << x << " tai vi tri " << k << ".";
        if (a[k] > x)
            end = k - 1;
        else
            start = k + 1;
    }

    // Ham thay the tim kiem nhi phan
    auto findx = lower_bound(a.begin(),a.end(),x);
    cout << *findx << " ";
}