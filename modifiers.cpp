#include <iostream>
using namespace std;
int main(){
  cout<<sizeof(int)<<endl;
  cout<<sizeof(long int)<<endl;
  cout<<sizeof(short int)<<endl;
  cout<<sizeof( long long int )<<endl;
  cout<<sizeof(signed int)<<endl;
  cout<<"size of unsigned modifier"<<sizeof(unsigned int)<<endl;
  /*4
4
2
8
4
size of unsigned modifier4
*/ 
return 0;
  }