#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;

    vec.push_back(56);
    
    vec.push_back(16);
    vec.push_back(76);
    
    vec.push_back(86);
     cout<<"after puch back elements size="<<vec.size()<<endl;

     vec.pop_back();
     /*for (int val: vec)
     {
        /* code */
        //cout<<val<<endl;
     //}*/
      cout<<"vector at 0 element is="<<vec.at(0)<<endl;

     cout<<"vector at back element is="<<vec.back()<<endl;
     cout<<"vector at front  element is="<<vec.front()<<endl;
    

     return 0;
}