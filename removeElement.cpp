#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int occurrences = 0;
        cout << "Size of Nums: " << nums.size() << endl;
        int i = 0;
        while (i < nums.size() ) {
            if (nums[i] == val) {
                nums.erase(nums.begin() + i); // Erasing element at position i
                occurrences++;
            } else {
                i++;
            }
        }

        // cout << "\nNums now: ";
        // for (int i = 0; i < nums.size(); i++) {
        //     cout << nums[i] << ", ";
        // }
        // cout << endl;

        return nums.size(); // New size after removal of val-elements
    }
};

int main() {
    // Input data
    vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    int val = 2;

    // Expected output
    vector<int> expectedNums = {0, 0, 1, 3, 4}; // Sorted expected array

    // Create a Solution object and call the function
    Solution solvn;
    int k = solvn.removeElement(nums, val);

    // Check the size
    assert(k == expectedNums.size());

    // Sort the first k elements
    sort(nums.begin(), nums.begin() + k);

    // Verify the result
    for (int i = 0; i < k; i++) {
        assert(nums[i] == expectedNums[i]);
    }

    cout << "\nAll tests passed!" << endl;

    return 0;
}
