#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int maxProfit = 0;
        int minPrice = INT_MAX;
        int minPriceIndex = 0;
        int maxPrice = INT_MIN;
        int maxPriceIndex = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            if (minPrice > prices[i])
            {
                minPrice = prices[i];
                minPriceIndex = i;
            }
        }
        if (minPriceIndex == prices.size() - 1)
        {
            return 0;
        }
        else
        {
            for (int i = minPriceIndex + 1; i < prices.size(); i++)
            {
                if (maxPrice < prices[i])
                {
                    maxPrice = prices[i];
                    maxPriceIndex = i;
                }
            }
        }
        return maxPrice - minPrice;
    }
};

int main()
{
    Solution s;
    vector<int> prices = {7, 6, 4, 3, 1};
    cout << s.maxProfit(prices) << endl;
    return 0;
}