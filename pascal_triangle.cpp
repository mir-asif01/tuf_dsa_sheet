#include <bits/stdc++.h>
using namespace std;

// problem-1, get the value from row

int getValue(int n, int r)
{
  long long ans = 1;
  for (int i = 0; i < r; i++)
  {
    ans = ans * (n - i);
    ans = ans / (i + 1);
  }
  return ans;
}

vector<int> getrow(int row)
{
  long long ans = 1;
  vector<int> ansRow;

  ansRow.push_back(1);

  for (int col = 1; col < row; col++)
  {
    ans = ans * (row - col);
    ans = ans / col;
    ansRow.push_back(ans);
  }
  return ansRow;
}

vector<vector<int>> pascalTriangle(int n)
{
  vector<vector<int>> ans;

  for (int i = 1; i < n; i++)
  {
    ans.push_back(getrow(i));
  }
  return ans;
}

int main()
{
  int n;
  cin >> n;
  vector<vector<int>> ans = pascalTriangle(n);

  for (int i = 0; i < n; i++)
  {
    cout << ans[0][i];
  }

  // cout << getValue(10, 3);
  return 0;
}
