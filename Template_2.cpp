#include <bits/stdc++.h>
using namespace std;
template <class C1, class C2>
class Temple
{
public:
    C1 data;
    C2 data2;
    Temple(C1 data, C2 data2)
    {
        this->data = data;
        this->data2 = data2;
    }
    void display()
    {

        cout << this->data << endl;
        cout << this->data2 << endl;
    }
};
int main()
{
    Temple<int, char> tm(143, 'S');
    tm.display();
    return 0;
}