#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &a, int N)
{
    vector<int> hash(N + 1, 0);
    for (int i = 0; i < N + 1; i++)
    {
        if (a[i] <= N)
        {
            hash[a[i]] = 1;
        }
    }
    for (int i = 1; i <= N; i++)
    {
        if (hash[i] == 0)
        {
            cout << i;
        }
    }
}

int main()
{
    vector<int> arr = {1, 2, 4, 5};
    int N = arr.size();
    solve(arr, N);
}
