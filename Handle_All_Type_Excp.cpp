#include<bits/stdc++.h>
using namespace std;
int main()
{
    try{
        throw "Looking";

    }
    catch(int e){
        cout<<e<<endl;
    }

    catch(...){
        cout<<"Exception Handled"<<endl;
    }
  return 0;
}