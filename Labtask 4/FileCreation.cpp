#include <iostream>
#include <fstream>

using namespace std;

int main(){
    //create and open a text file
    ofstream MyFile("bsc-inf-12-20.txt");

    //close the file
    MyFile.close();

    return 0;
}