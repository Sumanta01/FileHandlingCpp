#include<bits/stdc++.h>
using namespace std;
int main()
{
    try{
        try{
            throw "how the josh";
        }catch(const char *c){
            cout<<"Character type in inner block --> "<<c<<endl;
            cout<<"Rethrowing the exception"<<endl;
            throw;
        }

    }catch(const char *c){
        cout<<"Character Type in outer block --> "<<c<<endl;
    }
    catch(...){
        cout<<"Unexpected Exception in outer block --> "<<endl;
    }
  return 0;
}