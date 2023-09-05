#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

class Printer {
public:
    void printAnswer(int answer) {
        cout << answer << '\n';
    }

    void printAnswer(bool answer) {
        cout << answer << '\n';
    }

    void printAnswer(string answer) {
        cout << answer << '\n';
    }

    void printAnswer(vector<int>& answer) {
        for (int i = 0; i < answer.size(); ++i)
            cout << answer[i] << ' ';
        cout << '\n';
    }
};

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        multiset<int, greater<int>> mset (nums.begin(), nums.end());
        multiset<int, greater<int>>::iterator itr = mset.begin();

        while (k > 1)
            ++itr, --k;

        return *itr;
    }
};

int main() {
    vector<int> nums {3, 2, 1, 5, 6, 4};
    int k = 2;
    
    Solution solution;
    Printer printer;

    printer.printAnswer(solution.findKthLargest(nums, k));

    return 0;
}