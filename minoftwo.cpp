#include<iostream>
using namespace std;




int minofTwo(int a, int b){

    if (a<=b)
    {
        return a;

    }else{
        return b;
    }
    
}

int main(){


double x,y;
cout<<"Enter the two numbers=";
cin>>x>>y;
cout<<"The sum of the two numbers is "<<minofTwo(x,y)<<endl;



  
    
    return 0;
}






