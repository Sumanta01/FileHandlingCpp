#include<bits/stdc++.h>
#include<exception>
using namespace std;
int main()
{
    int a=56,b=0;
    try{
        if(b==0){
            throw runtime_error("Division by zero Condition!");
        }
        else{
            cout<<a/b<<endl;
        }
    }catch(runtime_error &re){
        cout<<re.what()<<endl;
    }
  return 0;
}