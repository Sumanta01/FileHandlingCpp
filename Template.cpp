#include<iostream>
using namespace std;
class vector{
    public:
    int *arr;
    int s;
    
        vector(int m){
        arr = new int[m];
        s = m;
    }
    int dotProduct(vector &v){
        int ans = 0;
        for(int i=0;i<s;i++){
            ans += this->arr[i] * arr[i];
        }
        return ans;
    }
};

int main()
{
  vector v1(4);
    v1.arr[0]=1;
    v1.arr[1]=2;
    v1.arr[2]=3;
    v1.arr[3]=4;
    vector v2(4);
    v2.arr[0]=5;
    v2.arr[1]=6;
    v2.arr[2]=7;
    v2.arr[3]=8;
    cout<<v1.dotProduct(v2);





  return 0;
}