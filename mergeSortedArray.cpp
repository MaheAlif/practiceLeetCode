#include <iostream>
#include <vector> // Required for using vectors
#include<algorithm>
using namespace std;

class Solution
{
public:

    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        // cout << "\nNums1 : ";
        // for (int i = 0; i < m; i++)
        // {
        //     cout << nums1[i] << " - "; // Fixed output syntax
        // }
        // cout << "\nNums2 : ";
        // for (int i = 0; i < n; i++)
        // {
        //     cout << nums2[i] << " - "; // Fixed output syntax
        // }
        nums1.resize(m+n);

        int i = m;
        int j = 0;
        while (j< n)
        {
            nums1[i] = nums2[j];
            i++;
            j++;
        }
        sort(nums1.begin(), nums1.end());
        
    }
};

int main()
{
    int m = 0, n = 0; // Fixed variable declaration
    cout << "Enter M :";
    cin >> m;

    vector<int> arr1(m, 0); // Use vector for dynamic arrays
    cout << "Enter " << m << " number of elements : " << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter N :";
    cin >> n;
    vector<int> arr2(n, 0); // Use vector for the second array
    cout << "Enter " << n << " number of elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    Solution solvn;
    solvn.merge(arr1, m, arr2, n);

    cout << "\nFinal output : ";
        for(int i=0; i< m+n; i++) {
            cout << arr1[i] << " - ";
        }

    return 0;
}
