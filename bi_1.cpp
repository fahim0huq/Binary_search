#include <bits/stdc++.h>
using namespace std;
// 6
// 1 3 5 6 7 8 
// tofind:7
//time complexity --> O(log N). 
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //sort(arr, arr + n);
    //to apply binary search array must be sorted.
    int find;
    cin >> find;
    int low = 0, mid, high = n - 1;
    while (high - low > 1)
    {
        int mid = (high + low) / 2;
        if (arr[mid] < find)
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    if (arr[low] == find)
    {
        cout << "position= " << low << " value: " << arr[low] << " Found" << endl;
    }
    else if (arr[high] == find)
    {
        cout << "position= " << high << " value: " << arr[high] << " Found" << endl;
    }
    else
    {
        cout << "NOT FOUND" << endl;
    }

    return 0;
}