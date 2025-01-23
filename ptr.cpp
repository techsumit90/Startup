#include <iostream>
using namespace std;

int main() {
    int a=10;
    int *p = &a; 
    int **s=&p;
    cout<<&p<<endl;
    cout<<**s<<endl;
       return 0;
} 