#include<iostream>
using namespace std;

int add(int a,int b){
    return a*b;
};


int main(){

   int a=25;
   long long aa=8;
   float b=3.6;
   double bb=23;
   char c='N';
   string cc="Hashim";
   
   if(b>1)
   {
    for(int i=0;i<a;i++){
      cout<<i<<" ";
   }
   }
   else{
    cout<<"Function Can't be proceed ....."<<endl;
   }
   cout<<endl;
   
   while(aa!=a){
      cout<<aa<<" ";
      aa++;
   }
   cout<<endl;

   cout<<c<<endl;
   cout<<cc<<endl;

   cout<<(a<b?b:a)<<endl;

return 0;
};