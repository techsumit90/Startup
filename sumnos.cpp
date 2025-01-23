#include<iostream>
using namespace std;


double minofTwo(double a, double b){
 

    double s = a+b;
    return s;
}




int main(){


double x,y;
cout<<"Enter the two numbers=";
cin>>x>>y;
cout<<"The sum of the two numbers is "<<minofTwo(x,y)<<endl;

    return 0;
}








    /*#include <iostream> 
using namespace std;

int main() {
     int n;
      int Sum = 0; 
      cout<<"enter  no:";
      cin>>n;

for(int i=1; i<=n; i++)
{ 

    if (i%3 == 0) 
    { 
    Sum += i; 

}

}
 
cout << "The sum of numbers from 1 to " << n << " that are divisible by 3 is: " << Sum << endl;

 return 0;
}*/