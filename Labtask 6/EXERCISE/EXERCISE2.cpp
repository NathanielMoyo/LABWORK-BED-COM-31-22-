#include <iostream>
using namespace std;

int main(){
    double arrayDouble;
    int numberOfRows = 0;
    int numberOfColumns = 0;
    
    int** dynamicMemory = new int*[numberOfRows];

    cout<<"Enter number of rows:  ";
    cin>>numberOfRows;
    cout<<"Enter number of columns:  ";
    cin>>numberOfColumns;

    while(numberOfRows > 3 && numberOfColumns  > 3){
        cout<<"Please enter dimensions not exceeding 3! \n";
        cout<<"Enter number of rows:  ";
        cin>>numberOfRows;
        cout<<"Enter number of columns:  ";
        cin>>numberOfColumns;
    }
    //allocate memory for each row
    for(int i = 0; i < numberOfRows; i++){
        dynamicMemory[i] = new int[numberOfColumns];
    }
    
    //initialise the array
    arrayDouble = 1;
    for(int i = 0; i < numberOfRows; ++i){
        for(int j = 0; j < numberOfColumns; ++j){
            dynamicMemory[i][j] = arrayDouble++;
        }
    }

    //print the array
    for(int i = 0; i < numberOfRows; ++i){
        for(int j = 0; j < numberOfColumns; ++j){
            cout <<dynamicMemory[i][j]<<"  ";
        }
        cout<<endl;
    }

    //memory clean up
    for(int i = 0; i < numberOfRows; ++i){
        delete[] dynamicMemory[i];
    }
    

    delete[] dynamicMemory;

    return 0;
}