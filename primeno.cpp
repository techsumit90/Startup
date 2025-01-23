#include <iostream>
using namespace std;

int main() {
int n;

cout<<"Enter an number==";
cin>>n;
bool isPrime = true;
for (int i=2; i*i<=n; i++)
{
  if (n%i==0)
  {
    isPrime= false;
    break;/* code */
  }
  
}

if (isPrime == true)
{
    cout<<"The number is prime\n"<<n;

}else{


    cout<<"is not a prime\n"<<n;
}

}








