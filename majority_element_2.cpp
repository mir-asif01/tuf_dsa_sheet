#include <bits/stdc++.h>
using namespace std;
vector<int> solve(vector<int> v)
{
    vector<int> ans;
    map<int, int> mp;

    int n = v.size();
    int m = (int)n / 3 + 1;

    for (int i = 0; i < n; i++)
    {
        mp[v[i]]++;
        if (mp[v[i]] == m)
        {
            ans.push_back(v[i]);
        }
        if (ans.size() == 2)
            break;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    vector<int> v = {1, 1, 1, 1, 3, 2, 2, 2};

    vector<int> res = solve(v);
    for (auto v : res)
        cout << v << " " << endl;

    return 0;
}