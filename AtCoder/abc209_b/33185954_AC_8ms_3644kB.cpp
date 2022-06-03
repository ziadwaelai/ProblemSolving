#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#define ll long long
#define endl '\n'
#define rep(x, start, end) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
#define sn(n) scanf("%d", &n)
#define done return 0
using namespace std;
///////////////Zee///////////////
string &removeDuplicate(string &str)
{
    int length = str.length();
    for (int i = 0; i < length; i++)
    {
        char currChar = str[i];
        for (int j = i + 1; j < length; j++)
        {
            if (currChar == str[j])
                str.erase(remove(str.begin() + j, str.end(), str[j]), str.end());
        }
    }
    return str;
}
bool cheak(ll q, ll w)
{
    return q > w;
}
int find(ll arr[100], ll n)
{
    int c = 0;
    rep(i, 0, n)
    {
        if (arr[i] == 3)
        {
            c = i + 1;
            break;
        }
    }
    return c;
}
ll a[2000];
ll b[2000];

int main()
{
  //  freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    /* ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);*/

    int n, x, sum;
    cin >> n >> x;
    int arr[n + 5];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        sum += arr[i];

        if (i % 2 == 0)
        {
            sum -= 1;
        }
    }

    if (sum <= x)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    done;
}
