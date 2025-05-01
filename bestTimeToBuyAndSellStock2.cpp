#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int maxProfit = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            if (i + 1 < prices.size() && prices[i] < prices[i + 1])
            {
                maxProfit += (prices[i + 1] - prices[i]);
            }
        }
        return maxProfit;
    }
};

int main()
{
    Solution s;
    vector<int> prices = {7, 6, 4, 3, 1};
    cout << s.maxProfit(prices) << endl;
    return 0;
}
