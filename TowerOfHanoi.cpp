#include<iostream>
#include<string>
using namespace std;

void printMove(int disk,char from_rode ,char to_rode){
     cout<<disk<<" moves from "<<from_rode<<" to rode "<<to_rode<<endl;
}

void move(int n,char from_rode,char to_rode,char aux_rode){
     if(n==1){
        printMove(1,from_rode,to_rode);
       return ;
     }
     move(n-1,from_rode,aux_rode,to_rode);
     printMove(n,from_rode,to_rode);
     move(n-1,aux_rode,to_rode,from_rode);
}

int main(){
    
    int n=3;
    move(n,'A','C','B');
    return 0;
}