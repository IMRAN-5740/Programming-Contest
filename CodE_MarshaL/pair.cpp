// C++ implementation of above approach
#include <iostream>
using namespace std;

// Function to count the pairs
int countPairs(int A, int B)
{

    // Variable to store a number of special pairs
    int cnt = 0;

    for (int i = 0; i <= A; ++i)
    {
        for (int j = i; j <= A; ++j)
        {
            // Calculating AND of i, j
            int AND = i & j;

            // Calculating OR of i, j
            int OR = i | j;

            // If the conditions are met,
            // then increment the count of special pairs
            if (OR == A and AND == B)
            {
                cnt++;
            }
        }
    }
    return cnt;
}

// Driver code
int main()
{
    int A ,B;
    cin>>A>>B;
    int k=countPairs(A, B);
 cout<<k<<endl;
    return 0;
}
