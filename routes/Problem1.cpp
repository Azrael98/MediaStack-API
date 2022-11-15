#include <bits/stdc++.h>
using namespace std;

void makeArray(int num, vector<int> &res)
{

    while (num != 0)
    {
        res.push_back(num % 10);
        num = num / 10;
    }
    if (res.size() < 4)
        res.push_back(0);
}

int getNumbers(vector<int> &arr)
{
    int num = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        num = num * 10 + arr[i];
    }
    return num;
}

void sortArr(vector<int> &a, vector<int> &b)
{
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    reverse(b.begin(), b.end());
}
bool check(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != arr[0])
            return false;
    }
    return true;
}

int main()
{
    int num;
    cout << "Enter Number:" << endl;
    cin >> num;
    int c = 0;

    while (num != 6174)
    {
        vector<int> arr1;

        vector<int> arr2;
        makeArray(num, arr1);
        if (check(arr1))
            break;

        arr2 = arr1;
        sortArr(arr1, arr2);
        int b = getNumbers(arr1);
        int a = getNumbers(arr2);
        num = a - b;
        c++;
    }

    cout << c << endl;

    return 0;
}
