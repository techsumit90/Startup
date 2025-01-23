#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) 
        if (nums[i] == target) return i; 
    return -1; 
}

int main() {
    vector<int> nums = {10, 20, 30, 40, 50};
    int target = 30;
    int result = linearSearch(nums, target);
    cout << (result != -1 ? "Found at index: " + to_string(result) : "Not found") << endl;
    return 0;
}
