#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        cout << "In removeDuplicates function : " << endl;
        int i = 0;
        while (i < nums.size() && (i + 1) != nums.size())
        {
            if (nums[i] == nums[i + 1] && (i + 1) != nums.size())
            {
                cout << "\nRemoved num -> " << nums[i + 1] << endl;
                nums.erase(nums.begin() + (i + 1));
            }
            else
            {
                i++;
            }
        }
        return nums.size();
    }
};

int main()
{
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4}; // Input array
    vector<int> expectedNums = {0, 1, 2, 3, 4};        // The expected answer with correct length

    Solution solvn;

    int k = solvn.removeDuplicates(nums); // Calls your implementation

    assert (k == expectedNums.size());
    // cout << "\nValue of K = " << k << endl;

    for (int i = 0; i < k; i++)
    {
        assert(nums[i] == expectedNums[i]);
        // cout << "nums[" << nums[i] << "]  &  expectedNums[" << expectedNums[i] << "]" << endl;
    }
}