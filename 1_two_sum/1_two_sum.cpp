#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    //int target = 9;
    //vector<int> nums {2, 7, 11, 15};

    int target = 6;
    vector<int> nums {3, 2, 4};

    //int target = 6;
    //vector<int> nums {3, 3};

    vector<int> answer;
    unordered_map<int, int> myMap;

    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];
        
        if (myMap.count(complement))
        {
            answer.push_back(myMap[complement]);
            answer.push_back(i);
        }

        myMap[nums[i]] = i;
    }

    cout << answer[0] << ' ' << answer[1];
    return 0;
}