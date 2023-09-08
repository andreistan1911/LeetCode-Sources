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
    vector<vector<int>> generate(int numRows) {
        vector<int> firstLine {1};
        vector<int> secondLine {1, 1};

        if (numRows == 1) {
            vector<vector<int>> answer {firstLine};
            return answer;
        }

        vector<vector<int>> answer {firstLine, secondLine};
        
        if (numRows == 2)
            return answer;

        numRows--;

        for (int i = 1; i < numRows; ++i) {
            vector<int> currentLine {1};

            for (int j = 1; j < answer[i].size(); ++j)
                currentLine.push_back(answer[i][j] + answer[i][j - 1]);

            currentLine.push_back(1);
            answer.push_back(currentLine);
        }

        return answer;
    }
};

int main() {
    int numRows = 5;
    
    Solution solution;
    Printer printer;

    printer.printAnswer(solution.generate(numRows));

    return 0;
}