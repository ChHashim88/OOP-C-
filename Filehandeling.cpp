#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
   ofstream file;

   file.open("sample.txt");
   file<<"Hello How are you?"<<endl;
   file<<"This is C++ file handeling"<<endl;
   file<<"Thats my first try hope so it will work"<<endl;

   file.close();

   ifstream readfile;
   readfile.open("sample.txt");
   string line;
   while(getline(readfile,line)){
       cout<<line<<endl;
   }

   readfile.close();



    return 0;
}