#include <iostream>
#include <math.h> 
 
using namespace std;
 
const int n = 100;
bool numbersTable[n + 1];
 
int main()
{
    for (int i = 2; i <= sqrt(n); ++i )
    {
        if (numbersTable[i] == true)
            continue;
        for (int j = 2*i ; j <= n; j += i)
            numbersTable[j] = true;
    }
 
    for (int i = 2; i <= n; i++)
        if (numbersTable[i] == false)
            cout << i << endl;
    return 0;
}
