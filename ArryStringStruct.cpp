#include<iostream>
#include<string>
using namespace std;

//Preprocessing Derivative
#define SIZE 5
#define STSIZE 3

//STRUCT
struct Student{
    string name;
    int clas;
    int age;
    int rollNum;

    void show(){
        cout<<name<<" is in "<<clas<<" class & its Roll No is "<<rollNum<<". He is of "<<age<<" years"<<endl;
    }
};



int main(){
  int arr[SIZE]={2,6,1,5,3};
  int *p;
  p=arr;
  cout<<p<<endl;
  cout<<*p<<endl;
  int temp;

  for(int i=0;i<SIZE;i++)
  {
     cout<<"Value "<<*p<<" & its Adress "<< p<<endl;
     p++;
  }
  for(int i=0;i<SIZE;i++){
       for(int j=0;j<SIZE;j++){
          if(arr[i]<arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
          }
        
       }
  }
  for(int i=0;i<SIZE;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  
  //Struct
  Student s1;
  s1.name="Arsalan";
  s1.clas=16;
  s1.rollNum=1208456;
  s1.age=25;

  s1.show();

  Student s[STSIZE];
  s[0].name="Ali";
  s[0].clas=14;
  s[0].rollNum=34552;
  s[0].age=23;

  s[1].name="Abdulkareem";
  s[1].clas=13;
  s[1].rollNum=245322;
  s[1].age=24;

  s[2].name="Shakeela";
  s[2].clas=11;
  s[2].rollNum=99552;
  s[2].age=22;

  for(int i=0;i<STSIZE;i++){
     s[i].show();
  }
  
  Student *ss=&s[0];
  cout<<(*ss).name<<endl;


//2D Array 
int ar[2][4]={
    {1,50,3,94},
    {9,2,56,80}
};
cout<<ar[1][2]<<endl;
for(int i=0;i<2;i++){
    cout<<endl;
    for(int j=0;j<4;j++){
       cout<<ar[i][j]<<" ";
    }
}
cout<<endl;
cout<<"sorting of 2d array "<<endl;
//Sorting 2D Array 
for(int i=0;i<2;i++){
    for(int j=0;j<4;j++){
        for(int x=i;x<2;x++){
            for(int y=0;y<4;y++){
                if(ar[i][j]<ar[x][y]){
                    int tp=ar[i][j];
                    ar[i][j]=ar[x][y];
                    ar[x][y]=tp;
                }
            }
        }
    }
}

for(int i=0;i<2;i++){
    cout<<endl;
    for(int j=0;j<4;j++){
       cout<<ar[i][j]<<" ";
    }
    cout<<endl; 
}

 return 0;   
}