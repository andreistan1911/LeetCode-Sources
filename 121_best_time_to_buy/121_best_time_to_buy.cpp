#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> prices {7, 1, 5, 3, 6, 4};
    //vector<int> prices {7, 6, 4, 3, 1};

    int maxProfit = 0;

    for (int L = 0, R = 1; R < prices.size(); R++)
    {
        int profit = prices[R] - prices[L];

        if (profit < 0)
            L = R;
        else
            maxProfit = profit > maxProfit ? profit : maxProfit;
    }

    // return maxProfit;

    cout << maxProfit << endl;
    return 0;
}