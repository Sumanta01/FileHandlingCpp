#include <bits/stdc++.h>
using namespace std;
int main()
{
    try
    {
     throw 87;
    }
    catch (int e)
    {
        cout << "Integer Exception" << endl;
    }
    catch (char const *e)
    {
        cout << "Character Exception" << endl;
    }
    catch (runtime_error &re)
    {
        cout << "Runtime Error Exception" << endl;
    }

    return 0;
}