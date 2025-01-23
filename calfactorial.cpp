#include<iostream>
using namespace std;

int factrialN(int n){  
int fact = 1;
for (int  i = 1; i <= n; i++)
{
    fact *= i;

}
return fact;
}
int main(){
int x,y;
cout<<"enter a first number:"<<endl;
cin>>x;
cout<<"enter a second number:"<<endl;
cin>>y;
int factX=factrialN(x);
int factY=factrialN(y);

 cout << "The factorial of the first number is: " << factX << endl;
  cout << "The factorial of the second number is: " << factY << endl;

    // If you want to add both numbers:
    cout << "The sum of the two factorial numbers is: " << (factX + factY) << endl;

return 0;

}