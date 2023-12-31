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

    void printAnswer(vector<vector<int>>& answer) {
        for (int i = 0; i < answer.size(); ++i) {
            for (int j = 0; j < answer[i].size(); ++j)
                cout << answer[i][j] << ' ';
            cout << '\n';
        }
    }
};

class Solution {
public:
    int name() {
        return 0;
    }
};

int main() {
    
    Solution solution;
    Printer printer;

    printer.printAnswer(solution.name());

    return 0;
}