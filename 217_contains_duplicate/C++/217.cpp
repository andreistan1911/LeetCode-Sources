#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> set;

        for (int x : nums)
            if (set.count(x))
                return true;
            else
                set.insert(x);

        return false;
    }
};

void printAnswer(bool answer)
{   
    cout << (answer ? "true" : "false") << '\n';
}

int main()
{
    //vector<int> nums {1, 2, 3, 1};
    //vector<int> nums {1, 2, 3, 4};
    vector<int> nums {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    
    Solution solution;
    printAnswer(solution.containsDuplicate(nums));

    return 0;
}