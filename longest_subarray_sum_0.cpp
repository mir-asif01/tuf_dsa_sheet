#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &nums, int k)
{
    map<int, int> hash;
    int mx = 0, psum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        psum += nums[i];
        if (psum == k)
            mx = i + 1;
        else
        {
            if (hash.find(psum) != hash.end())
            {
                mx = max(mx, i - hash[psum]);
            }
            else
            {
                hash[psum] = i;
            }
        }
    }
    return mx;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    vector<int> arr = {10, 5, 2, 7, 1, 9};
    int k = 15;

    cout << solve(arr, k);

    return 0;
}