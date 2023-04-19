#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    ofstream ss("Sample_File.txt");
    cout<<"Enter your name : ";
    string name;
    getline(cin, name);
    ss<<"My name is: "<<name;
    ss.close();

    ifstream inp("Sample_File.txt");
    string cnt;
    getline(inp, cnt);
    cout<<cnt;
    inp.close();


  return 0;
}