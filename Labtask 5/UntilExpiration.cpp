#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main (){
    srand(time(nullptr));

    int daysUntilExpiration = rand()%12;

if (daysUntilExpiration<=10){
    cout<<"Your subcription will expire soon. Renew now!"<<endl;
}
else if (daysUntilExpiration<=5){
    cout<<"Renew now and save 10%!"<< endl;
}
else if (daysUntilExpiration==1){
    cout<<"Your subcription expires within a day!"<< endl;
    cout<<"Renew now and save 20%"<<endl;
}
else{
    cout<<"You Have an active subcription." <<endl;
}
return 0;
}
