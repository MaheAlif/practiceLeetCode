#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        // int arraySize = nums.size();
        // vector<int> nums1(arraySize, 0);
        // for (int i = 0; i < nums.size(); i++)
        // {
        //     nums1[i] = nums[i];
        // }

        // int h = 0;
        // while (h < nums1.size() && (h + 1) != nums1.size())
        // {
        //     if (nums1[h] == nums1[h + 1] && (h + 1) != nums1.size())
        //     {
        //         // cout << "\nRemoved num -> " << nums[i + 1] << endl;
        //         nums1.erase(nums1.begin() + (h + 1));
        //     }
        //     else
        //     {
        //         h++;
        //     }
        // }
        // // cout << "Unique Array Size:" << nums1.size() << endl;
        // vector<int> occurenceArray(nums1.size(), 0);
        // int majoritySize = nums.size() / 2;
        // int i = 0;
        // while (i < nums.size())
        // {
        //     for (int j = i + 1; j < nums.size(); j++)
        //     {
        //         if (nums[i] == nums[j])
        //         {
        //             occurenceArray[i]++;
        //         }
        //         else
        //         {
        //             i++;
        //         }
        //     }
        //     if (occurenceArray[i] > majoritySize)
        //     {
        //         return nums[i];
        //     } else {
        //         return 0;
        //     }
        // }
        sort(nums.begin(), nums.end());

        return nums[nums.size() / 2];
    }
};

int main()
{
    vector<int> nums = {1,3,2,3,4,4,4,4,4};

    sort(nums.begin(), nums.end());

    Solution solvn;
    int k = solvn.majorityElement(nums);
    cout << "\nMajority element : " << k << endl;
}