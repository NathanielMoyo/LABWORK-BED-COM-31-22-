#include<iostream>

using namespace std;

int main(){

     //null pointer
     int* pPointer = nullptr;

     int numbersArray[3] = {10, 20, 30};

     //assign address of first element to pointer
     pPointer = numbersArray;

     //output the address of the first element
     cout<<"address of the pPointer: " << pPointer <<endl;
     cout<<"address of numberArray[0]: " <<numbersArray <<endl;

     //output the value of the first element using the pointer and indirection
     cout<<"value at pPointer: " << *pPointer <<endl;

     //this output the value of the second element
     cout<<"the value at ++pPointer: " <<*(++pPointer)<<endl;

     //this assign address of the first element to pointer
     pPointer = numbersArray;

     //this out the value of the firt element
     cout<<"value at pPointer++: " <<*(pPointer++) <<endl;

      return 0;
     }
