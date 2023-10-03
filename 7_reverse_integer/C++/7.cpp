#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        int y = 0;

        while (x) {
            if (y > 214748364 || y < -214748364)
                return 0;

            y = 10 * y + (x % 10);
            x /= 10;
        }

        return y;
    }
};

void printAnswer(int answer) {
    cout << answer << '\n';
}

int main() {
    int x = 120;
    
    Solution solution;

    printAnswer(solution.reverse(x));

    return 0;
}