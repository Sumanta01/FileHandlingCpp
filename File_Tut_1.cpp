#include <bits/stdc++.h>
#include <fstream>
using namespace std;
int main()
{
  string str = "Sumanta Swain !!!!";

  // Opening the file using Constructor
  // ofstream out("Sample_File.txt"); // Write Operation
  // out<<str;
  string str2;
  // Opening the file using Constructor
  ifstream in("Sample_File_2.txt"); // Read Operation
  // in>>str2;
  getline(in, str2); // Read the space in the string

  cout << str2;

  return 0;
}