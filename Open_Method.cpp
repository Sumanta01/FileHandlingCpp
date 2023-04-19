#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    ofstream ss;
    ss.open("Sample_File.txt");
    ss<<"Go for a long date with my fv girl"<<endl;
    ss<<"That date was very romantic ";
    ss.close();

    ifstream inp;
    string str,str2;
    inp.open("Sample_File.txt");
    getline(inp, str);
    cout<<str<<endl;
    getline(inp, str2);
    cout<<str2<<endl;
    while(inp.eof()==0){
        getline(inp, str);
        cout<<str<<endl;
    }
    inp.close();

  return 0;
}