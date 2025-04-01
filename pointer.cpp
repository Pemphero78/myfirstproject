#include <iostream>
using namespace std;

int main(){

    int firstvalue;
    int secondvalue;

    int* pPointer = nullptr;

    pPointer = &firstvalue;
    *pPointer = 10;

    pPointer = &secondvalue;
    *pPointer = 20;

    cout << "firstvalue is :"<< firstvalue <<'\n';
    cout << "secondvalue is:" << secondvalue << '\n';
    cout << "the address og first value"<< &firstvalue<<endl;

    return 0;






}