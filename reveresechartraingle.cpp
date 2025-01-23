
#include <iostream> 
using namespace std;

int main() {
int n= 5;
 char ch='A';
for (int i=0; i<n;  i++) //outer
{
    
    for (int j = i+1;  j <=0; j--)//inner
    {
        cout<<ch<<" ";
        ch++;
    

    }
    cout<<endl;
}

return 0;
}









    

