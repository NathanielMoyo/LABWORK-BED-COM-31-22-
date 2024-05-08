 #include <iostream>
#include <string>
using namespace std;

int main(){
   
    int* dynamicInteger = new int;
    string* dynamicString = new string;

    cout<<"Enter an integerValue:    ";
    cin>>*dynamicInteger;

    cout<<"Enter a stringValue:     ";
    cin.ignore();
    getline(cin, *dynamicString);
    // cin>>*dynamicString;

    cout<<endl;
    cout<<"The value of the dynamically allocated integer is:   "<<*dynamicInteger<<endl;
    cout<<"The value of the dynamically allocated string is:    "<<*dynamicString<<endl;


    delete dynamicInteger;
    delete dynamicString;

    return 0;
}