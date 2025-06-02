#include <bits/stdc++.h>
using namespace std;

void selection_sort()
{
    int n = 6;
    int arr[n] = {13, 46, 24, 52, 20, 9};
    for (auto v : arr)
        cout << v << " ";
    cout << endl;
    for (int i = 0; i <= n - 1; i++)
    {
        int min = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        swap(arr[i], arr[min]);
    }
    cout << "Selection sort" << endl;
    for (auto v : arr)
        cout
            << v << " ";
    cout << endl;
}

void bubble_sort()
{
    int n = 6;
    int arr[n] = {13, 46, 24, 52, 20, 9};
    // int arr[n] = {1, 3, 5, 6, 7, 8};
    for (auto v : arr)
        cout << v << " ";
    cout << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (auto v : arr)
        cout << v << " ";
    cout << endl;
}

void insertion_sort()
{
    int n = 6;
    int arr[n] = {13, 46, 24, 52, 20, 9};
    for (auto v : arr)
        cout << v << " ";
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j - 1] > arr[j])
            {
                swap(arr[j - 1], arr[j]);
            }
        }
    }
    for (auto v : arr)
        cout << v << " ";
    cout << endl;
}

void m(vector<int> &arr, int l, int mid, int r)
{
    vector<int> t;
    int left = l;
    int right = mid + 1;

    while (left <= mid && right <= r)
    {
        if (arr[left] <= arr[right])
        {
            t.push_back(arr[left]);
            left++;
        }
        else
        {
            t.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        t.push_back(arr[left]);
        left++;
    }
    while (right <= r)
    {
        t.push_back(arr[right]);
        right++;
    }
    for (int i = l; i <= r; i++)
    {
        arr[i] = t[i - l];
    }
}

void ms(vector<int> &arr, int l, int r)
{
    if (l >= r)
    {
        return;
    }
    int mid = (l + r) / 2;
    ms(arr, l, mid);
    ms(arr, mid + 1, r);
    m(arr, l, mid, r);
}

int partition(vector<int> &arr, int low, int high)
{
    int i = low;
    int j = high;
    int pivot = arr[low];
    while (i < j)
    {
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }
        while (arr[j] > pivot && j >= low + 1)
        {
            j--;
        }
        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void qs(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pIndex = partition(arr, low, high);
        qs(arr, low, pIndex - 1);
        qs(arr, pIndex + 1, high);
    }
}
int main()
{
    int n = 6;
    vector<int> arr = {12, 33, 9, 5, 21, 24, 2};
    // cout << arr.size() << endl;
    for (auto v : arr)
        cout << v << " ";
    cout << endl;
    qs(arr, 0, arr.size() - 1);
    for (auto v : arr)
        cout << v << " ";
    cout << endl;
    // insertion_sort();
    // selection_sort();
    // bubble_sort();
    return 0;
}