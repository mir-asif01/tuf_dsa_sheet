#include <bits/stdc++.h>
using namespace std;

void p1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void p2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void p3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}

void p4(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
}

void p5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void p6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void p7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < (2 * i) + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void p8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < (2 * n - (2 * i + 1)); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void p9(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < (2 * i) + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < (2 * n - (2 * i + 1)); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void p10(int n)
{
    for (int i = 0; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void p11(int n)
{
    int s = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            s = 1;
        else
            s = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << s << " ";
            s = 1 - s;
        }
        cout << endl;
    }
}

void p12(int n)
{
    int s = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int j = 1; j <= s; j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
        s -= 2;
    }
}

void p13(int n)
{
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num += 1;
        }
        cout << endl;
    }
}

void p14(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char c = 'A'; c <= 'A' + i; c++)
        {
            cout << c << " ";
        }
        cout << endl;
    }
}

void p15(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char c = 'A'; c <= 'A' + (n - i - 1); c++)
        {
            cout << c << " ";
        }
        cout << endl;
    }
}

void p16(int n)
{
    for (int i = 0; i < n; i++)
    {
        char c = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << c << " ";
        }
        cout << endl;
    }
}

void p17(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        char c = 'A';
        int b = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << c << " ";
            if (j <= b)
                c++;
            else
                c--;
        }

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void p18(int n)
{
    for (int i = 0; i < n; i++)
    {
        char c = 'A' + n - 1;
        for (int j = 0; j <= i; j++)
        {
            cout << c << " ";
            c--;
        }
        cout << endl;
    }
}

void list_v(vector<int> v)
{
    cout << "Elements : ";
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}

void stl()
{

    // pair<int, pair<int, int>> p1 = {1, {2, 5}};
    // cout << p1.first << endl;
    // cout << p1.second.second << endl;

    // pair<int, int>
    //     p = {1, 3};
    // cout << p.first << " " << p.second;

    // pair<int, int> arr[] = {{1, 2}, {3, 5}, {8, 10}};

    // cout << arr[0].first;

    // vector<int> v;
    // v.push_back(3);
    // v.push_back(5);
    // v.push_back(7);
    // v.emplace_back(9);
    // v.emplace_back(11);

    // cout << v[0];

    // list_v(v);

    // v.pop_back();

    // vector<int> v(3, 10);

    // v.insert(v.begin(), 99);
    // v.insert(v.begin() + 1, 3, 191);

    // for (auto it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *(it) << " ";
    // }
    // cout << endl;

    // v.erase(v.begin() + 1, v.begin() + 4);

    // v.clear();
    // list_v(v);
    // cout << v.empty();

    priority_queue<int> pq;
    pq.push(1);
    pq.push(2);
    pq.push(5);
    pq.push(3);
    pq.push(4);

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
}

void countDigit(int n)
{
    int count = 0;
    while (n > 0)
    {
        int last = n % 10;
        count++;
        n = n / 10;
    }
    cout << count;
}

void reverseDigits(int n)
{
    int rev_dig = 0;
    while (n > 0)
    {
        int last = n % 10;
        rev_dig = (rev_dig * 10) + last;
        n /= 10;
    }
    cout << rev_dig;
}

void palindrom(int n)
{
    int actual = n;
    int rev_dig = 0;
    while (n > 0)
    {
        int last = n % 10;
        rev_dig = (rev_dig * 10) + last;
        n /= 10;
    }
    if (rev_dig == actual)
        cout << "true" << endl;
    else
        cout << "false" << endl;
}

void armstrongNumber(int n)
{
    int actual = n;
    int sumOfDigitsCube = 0;
    while (n > 0)
    {
        int last = n % 10;
        sumOfDigitsCube = sumOfDigitsCube + last * last * last;
        n /= 10;
    }
    if (sumOfDigitsCube == actual)
        cout << "true" << endl;
    else
        cout << "false" << endl;
}

void allDivisions(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}

void gcd(int n1, int n2)
{
    while (n1 > 0 && n2 > 0)
    {
        if (n1 > n2)
        {
            n1 = n1 % n2;
        }
        else
        {
            n2 = n2 % n1;
        }
    }
    if (n1 == 0)
    {
        cout << n2;
    }
    else
    {
        cout << n1;
    }
}

int SumOfN(int n)
{
    if (n < 1)
    {
        return 0;
    }
    return n + SumOfN(n - 1);
}

int factorial(int n)
{
    if (n < 1)
        return 1;
    return n * factorial(n - 1);
}

void reverseArray(int i, int arr[], int n)
{
    if (i >= n / 2)
        return;

    swap(arr[i], arr[n - i - 1]);
    reverseArray(i + 1, arr, n);
}

bool palindromeString(int i, string &s)
{
    if (i >= s[s.size() - i - 1] / 2)
        return true;
    if (s[i] != s[s.size() - i - 1])
        return false;
    palindromeString(i + 1, s);
}

int fibo(int n)
{
    if (n <= 1)
        return n;
    int l = fibo(n - 1);
    int sl = fibo(n - 2);
    return l + sl;
}

int main()
{

    // int n;
    // cin >> n;
    // cout << fibo(n);

    // string name;
    // cin >> name;
    // cout << palindromeString(0, name);
    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    //     cin >> arr[i];
    // reverseArray(0, arr, n);

    // for (int i = 0; i < n; i++)
    //     cout << arr[i] << " ";

    // int n;
    // cin >> n;
    // // cout << SumOfN(n);
    // cout << factorial(n);

    // int t;
    // cin >> t;
    // for (int i = 0; i < t; i++)
    // {
    //     int n1, n2;
    //     // cin >> n1 >> n2;
    //     // p18(n);
    //     // countDigit(n);
    //     // reverseDigits(n);
    //     // palindrom(n);
    //     // armstrongNumber(n);
    //     // allDivisions(n);
    //     // gcd(n1, n2);
    // }

    // stl();

    return 0;
}