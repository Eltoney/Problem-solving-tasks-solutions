#include <iostream>
#include <fstream>
#include <iomanip>
#include <cassert>  
#include <vector>
#include <string>
#include <queue>
#include <ctime>
#include <cmath>
#include <stack>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#include <algorithm>
#include <set>

#include <cstring>
using namespace std;


int main(int argc, char* argv[])
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, m;
        cin >> n >> k >> m;
       
        vector<int> happinessValues(n) , ingredients(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ingredients[i];

        }
        int compeleteCycle = n + n;
        int compeleteCycleCount = m / compeleteCycle;
        int compeleteCycleReminder = m % compeleteCycle;
        set<int> spot;
        for (int i= 0; i< compeleteCycle; i++)
        {
            int turIdx = i % n;
            if (spot.count(ingredients[turIdx]))
            {
                spot.erase(ingredients[turIdx]);
                happinessValues[turIdx] += 1;
            }
            else
            {
                spot.insert(ingredients[turIdx]);
            }
        }
        spot.clear();
        for (int i = 0; i < n; i++)
        {
            happinessValues[i] *= compeleteCycleCount;
        }
        for (int i = 0; i < compeleteCycleReminder; i++)
        {
            int turIdx = i % n;

            if (spot.count(ingredients[turIdx]))
            {
                spot.erase(ingredients[turIdx]);
                happinessValues[turIdx] += 1;
            }
            else
            {
                spot.insert(ingredients[turIdx]);
            }
        }

        for (int i = 0; i < n-1; i++)
        {
            cout << happinessValues[i] << " ";
        }
        cout << happinessValues[n-1] ;

        cout << "\n";
    }
        
}
