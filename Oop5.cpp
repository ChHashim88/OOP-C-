#include<iostream>
using namespace std;
//namespace 
namespace School
   {
    int age=24;
   };
   namespace College
   {
    int age=25;
   };

//Template Functions
template<typename T>
T Add(T A, T B){
    return A +B;
};
//Multiple datatype templat function
template<typename t,typename u>
auto M(t a,u b){
     return a*b;
};
//Class template
template<typename T>
class Box{
public:
     T volume;
};

int main(){
//namespace
   std::cout<<"Using namespace container same name variables "<<School::age<<std::endl;
   std::cout<<"Using namespace container same name variables "<<College::age<<std::endl;

//Template Function
   cout<<"Using Template Function for Int "<<Add(12,45)<<endl;
   cout<<"Using Template Function for float "<<Add(12.5,13.8)<<endl;

//Multiple datatype templat function
   cout<<"Multiple data type Template function " << M(5,3.7)<<endl;

//Class template
   Box<int> b1;
   Box<double> b2;
   Box<string> b3;
   b1.volume=34;
   b2.volume=45.8;
   b3.volume="The Volume has exceeded the limit";
   cout<<b1.volume<<" Increasing to "<<b2.volume<<" Warning "<<b3.volume<<endl;


    return 0;
}

