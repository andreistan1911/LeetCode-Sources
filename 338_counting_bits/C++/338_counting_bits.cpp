#include <iostream>
#include <vector>

using namespace std;

void printAnswer(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
        printf("%d ", v[i]);
    printf("\n");
}

int main()
{
    int n = 5;
    vector<int> ans;

    for (int i = 0; i <= n; i++)
    {
        int nrOnes = 0;

        for (int j = 1; j <= i; j <<= 1)
        {
            if (i & j)
            {
                nrOnes++;        
            }
        }

        ans.push_back(nrOnes);
    }

    printAnswer(ans);

    return 0;
}