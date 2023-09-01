#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n + 1);

        ans[0] = 0;

        for (int i = 0; i <= n; i++)
            ans[i] = ans[i >> 1] + (i & 1);

        return ans;
    }
};

void printAnswer(vector<int> v)
{   
    for (int i = 0; i < v.size(); i++)
        printf("%d ", v[i]);
    printf("\n");
}

int main()
{
    int n = 10;
    Solution s;

    printAnswer(s.countBits(n));
    return 0;
}