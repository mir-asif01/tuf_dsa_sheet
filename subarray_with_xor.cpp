#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> arr, int k)
{
    int xr = 0, cnt = 0;
    map<int, int> mp;
    mp[xr]++;

    for (int i = 0; i < arr.size(); i++)
    {
        xr = xr ^ arr[i];
        int x = xr ^ k;
        cnt = cnt + mp[x];
        mp[xr]++;
    }
    return cnt;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    vector<int> arr = {4, 2, 2, 6, 4};
    int k = 6;
    cout << solve(arr, k);

    return 0;
}