#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Printer {
public:
    void printAnswer(int answer) {
        cout << answer << '\n';
    }

    void printAnswer(bool answer) {
        cout << (answer ? "true" : "false") << '\n';
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
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        long long y = 0;
        int cx = x;
        
        while (cx > 0) {
            y = y * 10 + cx % 10;
            cx /= 10;
        }
        
        if (x == y)
            return true;
        return false;
    }
};

int main() {
    int x = 121;
    
    Solution solution;
    Printer printer;

    printer.printAnswer(solution.isPalindrome(x));

    return 0;
}