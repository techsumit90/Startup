
#include <iostream> 
using namespace std;

int main() {
int n= 3;
char ch ='A';

 //char ch='A';
for (int i=0; i<n;  i++ ) //outer
{
    
    for (int j = 0; j <n; j++)//inner
    {
        cout<<ch<<" ";
    ch++; //to dont repeat

    }
    cout<<endl;
}
cout<<"after pattern:"<<ch<<endl;//10
return 0;
}









    

