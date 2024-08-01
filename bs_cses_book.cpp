#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define MOD 10000007
#define mem(a, b) memset(a, b, sizeof(a))
#define vi vector<int>
#define pb push_back

ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }

void optimize()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
void solve()
{
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);
/*
    int left = 0, right = n - 1;
    while (left <= right)
    {

        int mid = (left + right) / 2;

        if (arr[mid] == x)
            cout << "found at index " << mid + 1 << endl;

        if (arr[mid] > x)
            right = mid - 1;

        else
            left = mid + 1;
    }
*/


    /*int k = 0;
    for (int i = n / 2; i >= 1; i /= 2)
    {
        while (k + i < n && arr[k + i] <= x)
            k += i;
    }

    if (arr[k] == x)
        cout << "found at index " << k + 1 << endl;
*/
    
    
    
    auto k = lower_bound(arr, arr + n, x) - arr;
    if (k < n && arr[k] == x)
    {
        cout << "found at " << k + 1 << endl;
    }
    else
    {
        cout << "not found" << endl;
    }

    
    
    // occuance check
    auto a = lower_bound(arr, arr + n, x);
    auto b = upper_bound(arr, arr + n, x);
    cout << "occuarnce ok " << x << " is " << b - a <<" times" << endl;

    // occurance check short using equal_range
    auto r = equal_range(arr, arr + n, x);
    cout << r.second - r.first << endl;
}

int main()
{
    optimize();
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
