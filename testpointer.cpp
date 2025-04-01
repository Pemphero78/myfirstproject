#include <iostream>
using namespace std;

int main (){
int count = 5;
int*pCount = &count;
 cout << "the value of count is :" << count << endl;
 cout << "the address of count is" << &count <<endl;
 cout << "the address of count is" << pCount << endl;
 cout << "the value of count is"<< *pCount <<endl;


 return 0;




}