#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void printStack(stack<int> s) {
        cout << "\n";
        while(!s.empty()) {
            cout << s.top() << " - ";
            s.pop();
        }
    }
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        k = k % n; 
        if (k == 0) return; 
        
        // Reverses the entire array
        reverse(nums.begin(), nums.end());
        
        // Reverses the first k elements
        reverse(nums.begin(), nums.begin() + k);
        
        // Reverses remaining elements
        reverse(nums.begin() + k, nums.end());
        for(int i=0; i<n; i++) {
            cout << nums[i] << " ";
        }
    }
};

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 4;
    Solution sol;
    sol.rotate(nums, k);
    return 0;
}
