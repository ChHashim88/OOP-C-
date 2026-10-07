#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int> marks;
    marks={10,20,30,40,50};


    vector<int> numb;
    for (int i=0;i<=5;i++){
         numb.push_back(i*23);
    }
    
//Print vector
     cout<<"[ ";
     for(auto it=numb.begin();it!=numb.end();it++){
        cout<<*it<<"  ";
     }
     cout<<"]"<<endl;
     
cout<<"element at index "<<numb[3]<<endl;

cout<<"Size of Vector "<<numb.size()<<endl;


//reverse
reverse(marks.begin(), marks.end());
 cout<<"[ ";
     for(auto it=marks.begin();it!=marks.end();it++){
        cout<<*it<<"  ";
     }
     cout<<"]"<<endl;
     

    return 0;
}