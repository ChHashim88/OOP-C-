#include<iostream>
#include<string>
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
    
    bool isEmpty(){
        return count==0;
    }
    bool isFull(){
        return count==SIZE;
    }
    
    void enqueue(int val){
    if(isFull()){
        cout << "Queue is full ";
        return;
    }
    arr[rear]=val;
    rear=(rear+1)%SIZE;
    count++;
    }
    void Dequeue(){
    if(isEmpty()){
        cout<<"Queue is Empty"<<endl;
        return;
    }
    cout<<"Delted : "<<arr[front]<<endl;
    front=(front+1)%SIZE;
    count--;
    }

    void display(){
        int index=front;
        for (int i = 0; i < count; i++)
        {
            cout << arr[index] << " ";

            index = (index + 1) % SIZE;
        }

        cout<<endl;
    }

};

int main(){
     Queue q;
     q.enqueue(10);
     q.enqueue(20);
     q.enqueue(30);
     q.enqueue(40);
     q.enqueue(50);
     q.enqueue(70);
     

     q.display();
}