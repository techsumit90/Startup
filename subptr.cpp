#include <iostream>
using namespace std;


int main() {

int arr[]={1,2,3,4,5};

int* ptr2;
int* ptr1=ptr2+3;
cout<<ptr1-ptr2<<endl;
return 0;

}