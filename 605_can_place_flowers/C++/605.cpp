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
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
         if (n == 0)
            return true;

        if (flowerbed.size() == 1) {
            if (n == 1 && flowerbed[0] == 0)
                return true;
            return false;
        }

        if (flowerbed[0] == 0 && flowerbed[1] == 0) {
            flowerbed[0] = 1;
            n--;
        }

        int size1 = flowerbed.size() - 1;
        for (int i = 1; i < size1; i++) {
            if (flowerbed[i - 1] == 0 && flowerbed[i] == 0 && flowerbed[i + 1] == 0) {
                flowerbed[i] = 1;
                n--;
            }
        }

        if (flowerbed[size1] == 0 && flowerbed[size1 - 1] == 0) {
            n--;
        }

        if (n <= 0)
            return true;
        return false;
    }
};

int main() {
    vector<int> flowerbed {1,0,0,0,1,0,0};
    int n = 2;

    Solution solution;
    Printer printer;

    printer.printAnswer(solution.canPlaceFlowers(flowerbed, n));

    return 0;
}