#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> num={23,34,12,90,12};
    num.push_back(40);

    for(int n: num){
        cout<<n<<" ";
    }

    cout<<endl;

    vector<int> Rollno;

    for(int i=0;i<8;i++){
        Rollno.push_back(i*34);
    }

    cout<<"[";
    for(auto it=Rollno.begin();it!=Rollno.end();it++){
        cout<<*it<<" ";
    };
    cout<<"]"<<endl;

    return 0;
}