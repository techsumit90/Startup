#include <iostream>
#include <limits.h>
using namespace std;

/*int main()
{
    int marks=5;
    int size [marks];
    for (int i=0; i<marks; i++ )
   { cin>>size[i];
   }


    for (int i=0; i<marks; i++ )
    {
        cout<<size[i]<<endl;
        /* code */
    /*}*/
    

/*return 0;*/




//}


int main() {
    int nums = 5;
    int size[nums];
    int smallest =INT_MAX;
    int smallindes = -1;

    // Input the numbers
    for (int i = 0; i < nums; i++) {
        cin >> size[i];
    }

    // Find the smallest number
    for (int i = 0; i < nums; i++) {
        if (size[i] < smallest) {
            smallest = size[i]; 
            smallindes = i;// Update smallest
        }
    }

    // Output the smallest number
    cout << "index of smallest no Smallest is " << smallindes<< endl;
    return 0;
}
