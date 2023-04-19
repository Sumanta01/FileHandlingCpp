#include<bits/stdc++.h>
using namespace std;
class OverSpeed:public exception{
    int speed;
    public:
    const char* what(){
        return "Check out your speed otherwise you are in RIP";
    }
    void getSpeed(){
        cout<<"Your Car speed is "<<speed<<endl;
    }
    void setSpeed(int speed){
        this->speed=speed;
    }
};

class Car{
    int speed;
    public:
    Car(){
        speed=0;
        cout<<" Speed is "<<speed<<endl;
    }
    void accelerate(){
        for(;;){
            speed+=10;
            cout<<"Speed is "<<speed<<endl;
            if(speed>=250){
                OverSpeed os;
                os.setSpeed(speed);
                throw os;
            }
        }
    }

};
int main()
{
    Car c;
    try{
        c.accelerate();
    }
    catch(OverSpeed &os){
        cout<<os.what()<<endl;
        os.getSpeed();
    }
  return 0;
}