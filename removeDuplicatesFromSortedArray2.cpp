#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int i=0;
        while(i<nums.size() && (i+2)!=nums.size()) {
            if(nums[i] == nums[i+1] && nums[i] == nums[i+2]) {
                cout << "Nums to be erased : " << nums[i+2] << endl;
                nums.erase(nums.begin() + (i+2));
            } else {
                i++;
            }
        }
        return nums.size();
    }
};

int main()
{
    vector<int> nums = {0,0,1,1,1,1,2,3,3}; // Input array
    vector<int> expectedNums = {0,0,1,1,2,3,3};        // The expected answer with correct length

    Solution solvn;

    int k = solvn.removeDuplicates(nums); // Calls your implementation

    assert(k == expectedNums.size());
    // cout << "\nValue of K = " << k << endl;

    for (int i = 0; i < k; i++)
    {
        // assert(nums[i] == expectedNums[i]);
        cout << "nums[" << nums[i] << "]  &  expectedNums[" << expectedNums[i] << "]" << endl;
    }
    cout << "Test passed!!!" << endl;
}