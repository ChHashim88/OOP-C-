#include<iostream>
#include<string>
using namespace std;

template<typename t>
t add(t a,t b){
  return a+b;
}

template<typename t,typename u>
auto multi(t a,u b){
    return a*b;
}

template<typename T>
class Box{
public:
    T value;
    Box(){

    }
    Box(T v){
       value=v;
    }
    void Show(){
        cout<<value<<endl;
    }
};

int main(){
    
    cout<< add(23,45)<<endl;
    cout<<add(2.45,12.4)<<endl;

    cout << multi(12,3.45)<<endl;
    Box<int> b1(41);
    Box<double> b2(23.54);
    Box<string> b3("Hello");

    b1.Show();
    b2.Show();
    b3.Show();
    return 0;
}