#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    inline bool nonAlphanumeric (char c) {
        return !(isalpha(c) || isdigit(c));
    }

    bool isPalindrome(string s) {
        for (int i = 0, j = s.length() - 1; i < j; i++, j--) {
            s[i] = tolower(s[i]);
            s[j] = tolower(s[j]);

            if (nonAlphanumeric(s[i]))
                j++;
            else if (nonAlphanumeric(s[j]))
                i--;
                
            else if (s[i] != s[j])
                return false;
        }

        return true;
    }
};

void printAnswer(bool answer) {   
    cout << (answer ? "true" : "false") << '\n';
}

int main() {
    string s = "A man, a plan, a canal: Panama";
    //string s = "race a car";
    
    Solution solution;
    printAnswer(solution.isPalindrome(s));

    return 0;
}