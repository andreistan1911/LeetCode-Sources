#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        int answer = s.length();

        for (int i = 0; i < dictionary.size(); i++) {
            if ((int)(s.find(dictionary[i])) != -1)
                answer -= dictionary[i].length();
        }

        return answer;
    }
};

void printAnswer(int x) {   
    printf("%d\n", x);
}

int main() {
    Solution solution;

    // string s = "sayhelloworld";
    // string s = "leetscode";
    string s = "dwmodizxvvbosxxw";
   
    vector<string> dictionary;

    // dictionary.push_back("hello");
    // dictionary.push_back("world");

    // dictionary.push_back("leet");
    // dictionary.push_back("code");
    // dictionary.push_back("leetcode");

    dictionary.push_back("ox");
    dictionary.push_back("lb");
    dictionary.push_back("diz");
    dictionary.push_back("gu");
    dictionary.push_back("v");
    dictionary.push_back("ksv");
    dictionary.push_back("o");
    dictionary.push_back("nuq");
    dictionary.push_back("r");
    dictionary.push_back("txhe");
    dictionary.push_back("e");
    dictionary.push_back("wmo");
    dictionary.push_back("cehy");
    dictionary.push_back("tskz");
    dictionary.push_back("ds");
    dictionary.push_back("kzbu");

    printAnswer(solution.minExtraChar(s, dictionary));

    return 0;
}