#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int index = 0; // Position to put the next non-zero number

    // Step 1: Move all non-zero numbers to the front
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[index] = nums[i];
            index++;
        }
    }

    // Step 2: Fill the rest of the array with 0s
    while (index < nums.size()) {
        nums[index] = 0;
        index++;
    }
}

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};

    moveZeroes(nums); // Call the function

    // Print result
    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}
