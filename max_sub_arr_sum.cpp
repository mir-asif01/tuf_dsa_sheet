#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> arr)
{
    // int mx = a[0], sum = mx;
    // for (int i = 0; i < a.size(); i++)
    // {
    //     sum += a[i];
    //     if (sum > mx)
    //         mx = sum;
    //     if (sum < 0)
    //         sum = 0;
    //     // if (mx < 0)
    //     //     mx = 0;
    // }
    // return mx;

    //     int minP = arr[0];
    //         int maxP = 0;
    //         for(int i:arr){
    //             maxP = max(maxP, arr[i]-minP);
    //             minP = min(minP,arr[i]);
    //         }
    //         return maxP;
}

vector<int> rearrange_array(vector<int> &arr)
{
    vector<int> neg, pos;
    vector<int> ans(arr.size(), 0);
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 0)
            pos.push_back(arr[i]);
        else
            neg.push_back(arr[i]);
    }
    if (neg.size() > pos.size())
    {
        for (int i = 0; i < pos.size(); i++)
        {
            ans[2 * i] = pos[i];
            ans[2 * i + 1] = neg[i];
        }
        int idx = pos.size() * 2;
        for (int i = pos.size(); i < ans.size(); i++)
        {
            ans[idx] = neg[i];
            idx++;
        }
    }
    else
    {
        for (int i = 0; i < neg.size(); i++)
        {
            ans[2 * i] = pos[i];
            ans[2 * i + 1] = neg[i];
        }
        int idx = neg.size() * 2;
        for (int i = neg.size(); i < ans.size(); i++)
        {
            ans[idx] = pos[i];
            idx++;
        }
    }
}

int main()
{
    // vector<int> a = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    // vector<int> a = {-1};
    // vector<int> a = {10, 7, 5, 8, 11, 9};
    // int res = solve(a);

    vector<int> arr = {2, 4, 5, -1, -3, -4, 6, 7};
    rearrange_array(arr);

    for (auto v : arr)
    {
        cout << v << " ";
    }
    cout << endl;
}