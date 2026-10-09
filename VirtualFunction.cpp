#include<iostream>
using namespace std;

class Plugin{
public:
    virtual void applyfilter()=0;
};

class Blackfilter:public Plugin{
public:
    void applyfilter(){
        cout<<"Black"<<endl;
    }
};

class Whitefilter:public Plugin{
public:
    void applyfilter(){
        cout<<"White"<<endl;
    }
};

Plugin * getfilter(){
    int choice;
    cin>>choice;
    if(choice==1){
        return new Blackfilter;
    }
    else{
        return new Whitefilter;
    }
};

int main(){
   
    Plugin *p;
    p=getfilter();
    p->applyfilter();


    delete p;

    return 0;
}