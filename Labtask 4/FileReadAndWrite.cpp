#include <iostream>
#include <fstream>
using namespace std;
int main(){

char data [100];
ofstream outfile;
outfile.open("afile.txt");

cout<<"Writing to the file"<<endl;
cout<<"Enter your name:";
cin.getline(data,100);

outfile<< data <<endl;

cout<<"Enter your age:";
cin>>data;
cin.ignore();

outfile.close();

ifstream infile;
infile.open("afile.txt");

cout<<"Reading from the file" << endl;
infile >>data ;

infile >> data;
cout<<data << endl;

infile.close();

return 0 ;

}
