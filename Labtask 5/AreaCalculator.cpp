#include <iostream>
using namespace std;

double AreaSquare(double side){
return side*side;
}
double AreaRec(double length, double width){
return length*width;
}
double AreaTri(double base , double height){
return base*height;
}

int main() {
    cout << "Please select the area of the shape to calculate" << endl;
    cout << "1. Square" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle " << endl;
    cout << "4. Quit Program" << endl;
    cout << " " << endl;
    int choice;

    cin >> choice;
    while(choice<1||choice>4){
       cout << "Enter selection: ";
       cin>>choice;
       cout<<"Please enter valid selection 1 to 4"<<endl;
    }
    double side;
    double length,width;
    double base,height;
    switch (choice) {
        case 1:
            cout<<"Enter side of square: ";
            cin>>side;
            cout<<"The area of Square is "<<AreaSquare(side)<<endl;
            break;
        case 2:
            cout << "Enter side of length & height: ";
            cin >>length>>width;
            cout << "The area of Rectangle is " << AreaRec(length,width)<<endl;
            break;
        case 3:
            cout<<"Enter the side of the triangle base(x) and height(y)"<<endl;
            cin>>base>>height;
            cout << "The area of the triangle is "<<AreaTri(base , height)<< endl;
            break;
        case 4:
            cout<<"Exiting program..."<< endl;
            return 0;
        default:
            cout<<"Invalid selection. Please select a valid option."<< endl;
            break;
    }
    return 0;
}
