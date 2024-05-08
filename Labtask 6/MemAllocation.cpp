#include<iostream>

using namespace std;

int main(){
    int numberOfElements =0;
    int* dynamicArry = nullptr;

    cout<<"how many numbers would you like to type? "<<endl;
    cin>> numberOfElements;

    dynamicArry = new int[numberOfElements];
    if(dynamicArry == nullptr){
        cout<<"Error: memory could not be allocated";
    }
    else{
        for(int i =0; i < numberOfElements; i++){
            cout<<"Enter number: " <<endl;
            cin >>dynamicArry[i];     }

            cout<<"you have entered: "<<endl;

            for
            (int j =0; j<numberOfElements; j++){
                cout<<dynamicArry[j]<<" ,";
            }

            delete[]dynamicArry;

    }
    return 0;
}
