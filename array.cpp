#include <bits/stdc++.h>
using namespace std;

void print_array(vector<int> &a)
{
    for (auto v : a)
        cout << v << " ";
    cout << endl;
}

bool isSorted(vector<int> &a, int n)
{
    for (int i = 1; i < n; i++)
    {
        if (a[i] >= a[i - 1])
        {
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int uniqueElements(vector<int> &arr, int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[j] != arr[i])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1;
}

vector<int> left_rotate(vector<int> &arr, int n)
{
    print_array(arr);
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
    return arr;
    print_array(arr);
}

vector<int> rotate_array(vector<int> &arr, int k)
{
    k = k % arr.size();
    int temp[k];

    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = k; i < arr.size(); i++)
    {
        arr[i - k] = arr[i];
    }
    for (int i = arr.size() - k; i < arr.size(); i++)
    {
        arr[i] = temp[i - (arr.size() - k)];
    }
    return arr;
}

vector<int> move_zeroes(int n, vector<int> &a)
{
    // vector<int> temp;

    // for (int i = 0; i < n; i++)
    // {
    //     if (a[i] != 0)
    //     {
    //         temp.push_back(a[i]);
    //     }
    // }
    // for (int i = 0; i < temp.size(); i++)
    // {
    //     a[i] = temp[i];
    // }

    // for (int j = temp.size(); j < n; j++)
    // {
    //     a[j] = 0;
    // }
    // for (auto v : a)
    //     cout << v << " ";
    // cout << endl;

    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            j = i;
            break;
        }
    }

    if (j == -1)
    {
        return a;
    }

    for (int i = j + 1; i < n; i++)
    {
        if (a[i] != 0)
        {
            swap(a[i], a[j]);
            j++;
        }
    }

    return a;
}

bool linear_search(vector<int> &arr, int k)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == k)
        {
            return true;
        }
    }
    return false;
}

vector<int> union_array(vector<int> &a, vector<int> &b)
{
    int i = 0;
    int j = 0;
    vector<int> u;

    while (i < a.size() && j < b.size())
    {
        if (a[i] <= b[j])
        {
            if (u.size() == 0 || u.back() != a[i])
            {
                u.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if (u.size() == 0 || u.back() != b[j])
            {
                u.push_back(b[j]);
            }
            j++;
        }
    }
    while (j < b.size())
    {
        if (u.size() == 0 || u.back() != b[j])
        {
            u.push_back(b[j]);
        }
        j++;
    }
    while (i < a.size())
    {
        if (u.size() == 0 || u.back() != a[i])
        {
            u.push_back(a[i]);
        }
        i++;
    }

    return u;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        vector<int> arr;
        cin >> N;
        int k;
        cin >> k;
        for (int i = 0; i < N; i++)
        {
            int n;
            cin >> n;
            arr.push_back(n);
        }

        // cout << linear_search(arr, k);
        // vector<int> res = move_zeroes(N, arr);
        // for (auto v : res)
        // {
        //     cout << v << " ";
        // }
        cout << endl;
        // rotate_array(arr, N);
        // left_rotate(arr, N);
        // cout << isSorted(arr, N) << endl;
        // cout << uniqueElements(arr, N) << endl;
        // cout << uniqueElements(arr, N) << endl;
    }
}