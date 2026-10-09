#include<iostream>
using namespace std;
#define SIZE 5


class Queue{
private:
     int arr[SIZE];
     int front;
     int rear;
     int count;
public:
     Queue(){
        front=0;
        rear=0;
        count=0;
     }
     
    bool IsEmpty(){
          return count==0;
    }

    bool IsFull(){
            return count==SIZE;
    }
    
    void Enqueue(int n){
         if(IsFull()){
            cout<<" Queue is Full ";
            return;
         }
         arr[rear]=n;
         rear=(rear+1)%SIZE;
         count++;
    }

    void Dequeue(){
         if(IsEmpty()){
            cout<<" Queue is Empty ";
            return;
         }
         arr[front];
         front=(front+1)%SIZE;
         count--;
    }

    void display(){
        int index=front;
        for(int i=0;i<count;i++){
             cout<<arr[index]<<" ";
             index=(index+1)%SIZE;
        }

    }
     
};

int main(){

  Queue Q1;
  Q1.Enqueue(24);
  Q1.Enqueue(34);
  Q1.Enqueue(76);
  Q1.Enqueue(89);
  Q1.Enqueue(01);
  
  Q1.Dequeue();
  
  Q1.Enqueue(40);
  
  Q1.display();

}