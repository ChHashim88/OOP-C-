#include<iostream>
using namespace std;

struct LinkList{
     int value;
     LinkList *next;
 };

int main(){
//   LinkList lk1,lk2,lk3;
  
//   lk1.value=25;
//   lk2.value=34;
//   lk3.value=54;

//   lk1.next=&lk2;
//   lk2.next=&lk3;
//   lk3.next=nullptr;

//   cout<<lk1.next->value<<endl;

LinkList *l1=new LinkList;
LinkList *l2=new LinkList;
LinkList *l3=new LinkList;
LinkList *l4=new LinkList;

l1->value=34;
l2->value=56;
l3->value=31;
l4->value=98;

l1->next= l2;
l2->next=l3;
l3->next=nullptr;

//Adding node
l4->next=l2->next;
l2->next=l4;



LinkList *head=l1;
LinkList *current=head;


while(current!=nullptr){
    cout<<current->value<<" ";
    cout<<current->next<<endl;
    current=current->next;
}

delete l1;
delete l2;
delete l3;

    return 0;
}