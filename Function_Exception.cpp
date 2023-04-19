#include<bits/stdc++.h>
#include<exception>
using namespace std;
void display()throw(int ,char ,runtime_error){
    throw 99;
}
int main()
{
    try{
        display();
    }
    catch(int e){
        cout<<"Integer Type "<<e<<endl;
    }
    catch(char c){
        cout<<"Character Type "<<c<<endl;
    }
    catch(runtime_error &re){
        cout<<"Runtime Error Type "<<re.what()<<endl;
    }
  return 0;
}