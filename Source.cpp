#include<iostream>
#include<string>
using namespace std;

bool isKPeriodic(const string& str, int K)
{
    int n = str.size();
    if (n < K)
        return false;
    for (int i = 0; i < K; i++)
    {
        if (str[i] != str[n - K + i])
            return false;
    }
    return true;
}
int main()
{

    string str;
    int K;
    cout << "Enter string: ";
    getline(cin, str);
    cout << "Enter K: ";
    cin >> K;
    if (isKPeriodic(str, K))
        cout << "Yes";
    else
        cout << "No";
    return 0;

}
