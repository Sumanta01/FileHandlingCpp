#include <bits/stdc++.h>
#include <exception>
using namespace std;
int main()
{
    int a = 18, b = 0;
    try
    {
        if (b == 0)
        {
            throw "Division by zero Condition!";
        }
        else
        {
            cout << a / b << endl;
        }
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }

    return 0;
}