#include<iostream>
#include<string>
using namespace std;

class Animal{
private:
    bool dangered;
public:
    int age;
    string gender;

    Animal(){
        cout<<"Animal is created .... ";
    }

    void show(){
        cout<<age<<" is its age & it is a "<<gender<<" & it is dangered "<<getter()<<endl;
    }

    void setter(bool a){
        dangered=a;
    }
    
    bool getter(){
        return dangered;
    }


    ~Animal(){
        cout<<"Class is deleted .."<<endl;
    }
  
};

class Cat:public Animal{
public:

  Cat(){
    cout<<"Its Cat"<<endl;
  }

  Cat(int age){
    if(age>15)
      cout<<"its an old cat ...."<<endl;
    else
      cout<<"Its Cat"<<endl;
  }

  ~Cat(){
      cout<<"Class is deleted .."<<endl;
  }
};

class Dog:public Animal{
public:
    
    Dog(){
        cout<<"Its Dog"<<endl;
    }

    void show(){
        cout<<age<<"  "<<gender<<endl;
    }

    ~Dog(){
        cout<<"Class is deleted .."<<endl;
    }
};




int main(){
    
    Cat c1;
    c1.age=25;
    c1.gender="female";
    c1.setter(false);
    c1.show();
    
    Dog d1;
    d1.age=12;
    d1.gender="Male";

    d1.show();



    return 0;
}