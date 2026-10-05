//Linked list , Adding node , delting node 
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

#define SIZE 5
#define ABS(a) (a<0?-(a):(a))

#define INCLUDE
#ifdef INCLUDE
void processInventory() {
    cout << "Processing Inventory Items..." << endl;
}
#endif

struct LinkList{
    int value;
    LinkList *next;
};

class Employee{
    public:
       string name;
       int age;
       int salary;

       void SignIn();

};
void Employee::SignIn(){
   cout<<"Working ....."<<endl;
};


int main(){
   
   LinkList  n1, n2, n3, n4, n5;
   
   n1.value=30;
   n2.value=40;
   n3.value=50;
   n4.value=60;
   n5.value=25;

   n1.next=&n2;
   n2.next=&n3;
   n3.next=&n4;
   n4.next=nullptr;

//Adding Node In Middle 
   n5.next=n2.next;
   n2.next=&n5;

// simple delete node
   n5.next=n3.next;


   LinkList *head=&n1;
   



   LinkList *temp=head;
   while(temp!=nullptr){
        cout<<temp->value<<endl;
        temp=temp->next;
   }

//File Handeling
   //ofstream for write data file
   ofstream file;
   file.open("sample.txt");
   file<<"Hello World"<<endl;
   file.close();

   //ifsream for read data from file 
   ifstream form;
   form.open("sample.txt");
   string text;
   getline(form, text); 
   form >> text;
   cout << text;
   form.close();
   cout<<endl;


//PreProcessor Dervatives & Macros
   for(int i=0;i<SIZE;i++){
      cout<<i<<" ";
   }
   
   int val=-3;
   cout << ABS(val) <<endl;

   #ifdef INCLUDE
   processInventory();
   #endif 


//Classes
   //By Instance
   Employee e1;
   e1.name="Hashim";
   e1.age=25;
   e1.SignIn();

   //By refrence
   Employee *e = new Employee;
   e->name="jamshaid";
   e->age=27;
   e->salary=45890;

   cout << e1.name <<" age is "<<e1.age <<endl;
   cout<<e->name<<" age is "<<e->age<<" and earnig Rs "<<e->salary<< endl;  



return 0;
}


