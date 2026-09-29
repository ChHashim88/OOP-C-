#include<iostream>
#include<string>
using namespace std;

struct student{
    string name;
    int rollno;
};

int main(){
     int heighest=0;
     string Sname;

    //Cin , Cout
     int val;
     cout<<"Enter Value"<<endl;
     cin>>val;
     cout<<"Entered value is = "<<val<<endl;
    
     //Intiger array
     int array[5]={12,25,24,36,4};
     for(int i=4;i>=0;i--){
        cout << array[i] <<endl;
     }

     //2d Array
     int arr[3][3]={{2,4,5},{4,5,6},{7,8,9}};
     for(int i=0;i<3;i++){
        cout<<" "<<endl;
        for(int j=0;j<3;j++){
            cout<<arr[i][j];
        }
     }
     cout<<""<<endl;
    
     //Char array
     char a[]="Hello";
     for(int i=0;i<5;i++){
        cout<<a[i];
     }
     cout<<endl;

     //Simple struct
     student s1;
     s1.name="Ali";
     s1.rollno=23;

     student s2;
     s2.name="Murtaza";
     s2.rollno=45;

     cout<<s1.name<<" "<<s1.rollno<<endl;
     cout<<s2.name<<" "<<s2.rollno<<endl;


     //struct as an array 
     student n[3];
     n[0].name="Jameel";
     n[0].rollno=99;

     n[1].name="Manzar";
     n[1].rollno=89;

     n[2].name="HUSSAIN";
     n[2].rollno=81;
    

     for(int i=0;i<2;i++){
        cout<<n[i].name<<" "<<n[i].rollno<<endl;
         if(n[i].rollno>heighest){
            heighest=n[i].rollno;
            Sname=n[i].name;
         }
        
     } cout<<Sname<<"  have the heighest rollno  "<<heighest<<endl;
     

     //sortion of struct as an array
     for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
           if(n[i].rollno>n[j].rollno){
             student temp= n[i];
              n[i]=n[j];
              n[j]= temp;
              
           }
        }
     }
     for(int i=0;i<3;i++){
        cout<<n[i].name<<" Have the "<<n[i].rollno<<" .  ";
     }
    return 0;

}

