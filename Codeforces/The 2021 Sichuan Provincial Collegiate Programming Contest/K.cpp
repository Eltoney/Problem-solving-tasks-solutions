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
#include <cstring>
using namespace std;


int main(int argc, char* argv[])
{
        int p, k;
        cin >> p >> k;
        int tempK = k;
        vector<int> perm;
        int start = 1;
        while (tempK--)
        {
            for (int i = start; i <= p; i += k)
            {
                if (i <= p)
                {
                    perm.push_back(i);
                }
                else
                {
                    break;
                }
            }
            start++;
        }
        

        for (int idx = 0; idx < perm.size() - 1; idx++)
        {
            cout << perm[idx] << " ";
        }
        cout << perm[p - 1];
}
