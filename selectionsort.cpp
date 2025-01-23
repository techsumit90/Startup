#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; // Declare the size of the array
    cout << "Enter the number of elements: ";
    cin >> n; // Input the size of the array

    vector<int> arr(n); // Create a vector of size n

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; // Input the elements of the array
    }



    
    
        

    // Selection sort algorithm
   for(int i = 0; i < n - 1; i++) {
        int minIdx = i; // Assume the minimum is the first element
        for(int j = i + 1; j < n; j++) { // Start from the next element
            if(arr[j] < arr[minIdx]) {
                minIdx = j; // Update minIdx if a smaller element is found
            }
        }
        swap(arr[i], arr[minIdx]); // Swap the found minimum element with the first element
}    // Output the sorted array
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Print each element of the sorted array
    }
    cout << endl;


    return 0; // Return success
}
