#include<iostream>
using namespace std;

#define SIZE 5
//Macros
#define ABS(x) ((x)<0?(-x):(x))

#define STACK
#define VERSION 2

int main(){
    int a[SIZE]={24,34,54,54,22};
    for(int i=0;i<SIZE;i++){
        cout<<a[i]<<" ";
    }
cout<<endl;

cout<<ABS(SIZE)<<endl;

#ifdef STACK
   cout<<"Skack with ifdef "<<endl;
#endif


//IF ELSE Preprocessing Derivatives
#if VERSION == 1
   cout<<"Version 1"<<endl;
#elif VERSION == 2
   cout<<"Version 2"<<endl;
#else
   cout<<"Other Version"<<endl;
#endif

   return 0;
}