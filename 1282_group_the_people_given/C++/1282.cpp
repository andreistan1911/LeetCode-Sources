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
    vector<vector<int>> groupThePeople(vector<int>& groupSizes){
        vector<vector<int>> groups, answer;

        for (int i = 0; i < groupSizes.size(); ++i) {
            int size = groupSizes[i];

            int j;
            for (j = 0; j < groups.size(); ++j) {
                if (groups[j][0] == size) {
                    if (groups[j][1] > 0) {
                        groups[j].push_back(i);
                        --groups[j][1];
                        break;
                    }
                }
            }

            if (j == groups.size()) {
                vector<int> newGroup {size, size - 1, i};

                groups.push_back(newGroup);
            }
        }

        for (int i = 0; i < groups.size(); ++i) {
            vector<int> group(groups[i].begin() + 2, groups[i].end());

            answer.push_back(group);
        }

        return answer;
    }
};

int main() {
    vector<int> groupSizes {3,3,3,3,3,1,3};
    
    Solution solution;
    Printer printer;

    printer.printAnswer(solution.groupThePeople(groupSizes));

    return 0;
}