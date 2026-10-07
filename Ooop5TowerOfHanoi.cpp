#include<iostream>
using namespace std;

void printMove(int disk,char from_rod,char to_rod){
    cout<<"Move Disk "<<disk<<" from Rod "<<from_rod<<" to rod "<<to_rod<<endl;
}
void moveDisk(int n,char from_rod,char to_rod,char aux_rod){
    if(n==1){
        printMove(1,from_rod,to_rod);
        return ;
    }

    moveDisk(n-1,from_rod,aux_rod,to_rod);

    printMove(n,from_rod,to_rod);

    moveDisk(n-1,aux_rod,to_rod,from_rod);
}

int main(){
    int n=3;
    moveDisk(n,'A','C','B');
    return 0;
}