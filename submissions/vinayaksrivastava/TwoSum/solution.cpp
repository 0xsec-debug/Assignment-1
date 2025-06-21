#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> map; // To store number and its index

    for (int i = 0; i < nums.size(); i++) {
        int need = target - nums[i]; // What number we need

        // If needed number is already in map
        if (map.find(need) != map.end()) {
            return {map[need], i}; // Return the two indexes
        }

        // Save the current number with its index
        map[nums[i]] = i;
    }

    return {}; // In case no answer found (but question says one solution always exists)
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    // Print the result
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}


