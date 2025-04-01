#include <iostream>
using namespace std;

int main() {

    srand(time(0));
    int daysuntilExperation=rand()%12;

    if(daysuntilExperation==0)
    cout << "your subscription expired" << endl;
    else if(daysuntilExperation==1)
    cout << "your subscription expires in aday renew now and save 20%!"<<endl;
    else if (daysuntilExperation<=10)
    cout << "your subscription will expire soon renew now!"<<endl;
    else
    cout<< "you have an active subscription"<<endl;
     

    return 0;








}