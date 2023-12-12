#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        vector<int> lands;
        int Li;

        while (cin >> Li && Li != 0) {
            lands.push_back(Li);
        }

        sort(lands.begin(), lands.end(), greater<int>());

        long long totalCost = 0;
        long long budget = 5000000;

        for (int i = 0; i < lands.size(); ++i) {
            long long currentCost = 2 * pow(lands[i], i + 1);  // Update the power to i + 1
            if (totalCost + currentCost > budget) {
                cout << "Too expensive" << endl;
                break;
            }
            totalCost += currentCost;
        }

        if (totalCost <= budget) {
            cout << totalCost << endl;
        }
    }

    return 0;
}
