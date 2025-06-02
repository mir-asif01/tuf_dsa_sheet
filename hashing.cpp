#include <bits/stdc++.h>
using namespace std;

void printHelloHash()
{
    string name;
    cin >> name;
    cout << "Your name is : " << name << endl;
}

void intHash()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // precompute
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    for (auto v : hash)
        cout << v << " ";
    cout << endl;

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // fetching the hashed values
        cout << hash[n] << endl;
    }
}

void charHash()
{
    string s;
    cin >> s;

    // pre compute
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a'] += 1;
    }

    for (auto c : hash)
        cout << c << " ";
    cout << endl;

    int t;
    cin >> t;
    while (t--)
    {
        char c;
        cin >> c;
        // fetch
        cout << hash[c - 'a'] << endl;
    }
}

void hashingWithMap()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // precompute
    // map<int, int> m;
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }

    cout << endl;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << m[n] << endl;
    }
}

int main()
{
    // hashingWithMap();
    //  charHash();
    //  intHash();
    printHelloHash();
    return 0;
}
