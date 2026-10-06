#include<iostream>
#include<string>
using namespace std;


//Abstraction over loading 
class Student{
public:
    string name;
    int age ;
    int rollNo;
    int year;

    Student();
    Student(int year);
    ~Student(){
        cout<<"Destroyed"<<endl;
    }

};

Student::Student(){
   year=01;
   cout << "Student is a freshie its education year is  "<<year << endl;
     
};

Student::Student(int year){
   this->year=year;
   cout <<"Student education year is "<<year <<endl;
}

//over Riding
class Point{
public:
   int x;
   int y;
};

class Shape{
public:
  int numb_of_points;
  Point *points;

  virtual float getArea()=0;
};

class Triangle : public Shape{
public:
    Triangle(){
        numb_of_points=3;
    
    
    points = new Point[numb_of_points];
    points[0].x=0;
    points[0].y=0;
    points[1].x=4;
    points[1].y=0;
    points[2].x=0;
    points[2].y=3;
 
}
      float getArea(){
        return 0.5*4*3;
    }

    ~Triangle(){
        delete[] points;
    }

};

//Static Methods
class Employee{
public:
  string name;

  static int id_count;
  
  Employee(){
    id_count++;
  }

  static void display(){
   cout<<"No of Employee are "<<id_count<<endl;
  }

  ~Employee(){
    cout<<"Destroyed"<<endl;
  }

};
int Employee::id_count=0;

//Virtual Function
class Plugins{
  public:
  virtual void applyfilter()=0;
};
class MakeItBlack:public Plugins{
    public:
    void applyfilter(){
        cout<<"Apply the black filter"<<endl;
    }
};
class MakeItWhite:public Plugins{
    public:
    void applyfilter(){
        cout<<"Apply the White filter"<<endl;
    }
};
Plugins *getfilter(){
    int choice;
    cout<<"Press 1 for blackFilter"<<endl;
    cout<<"Press 2 for WhiteFilter"<<endl;
    cin>>choice;
    if(choice==1){
        return new MakeItBlack;
    }
    else{
        return new MakeItWhite;
    }
};

int main(){

//over loading 
Student s1;
s1.name="Jamshaid";
s1.age =26;
s1.rollNo=07;
cout << s1.name << " age is " << s1.age << " and its Roll No is " << s1.rollNo << endl;
Student s2(11);


//overRiding
Triangle t1;
cout<<"Area of triangle is "<<t1.getArea()<<endl;


//Static Method 
Employee e1,e2,e3,e4,e5;
Employee::display();


//Virtual Functions 
Plugins *p;
p = getfilter();
p->applyfilter();





return 0;
}