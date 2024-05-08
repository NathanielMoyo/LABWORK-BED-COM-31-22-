#include <iostream>
using namespace std;

int main(){
    string letter[]={"B123","C234","A345","C15","B177","G3003","C235","B179"};
    int SizeOfArray=sizeof(letter)/sizeof(letter[0]);
    for (int i=0;i<SizeOfArray;++i){
        if(letter[i][0]=='B'){
            cout<<letter[i]<<endl;
        }
    }
    return 0;
}