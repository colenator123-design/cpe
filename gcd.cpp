#include<iostream>
#include<vector>
using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b) {
        vector<int> arr; // 使用 vector 動態儲存
        if (a < b) {
            cout << "[" << 0 << ";" << b << "]" << endl;
            continue;
        }
        int i = 0;
        while (b != 0) {
            arr.push_back(a / b);
            int temp = b;
            b = a % b;
            a = temp;
            i++;
        }
        cout << "[";
        for (int j = 0; j < i; j++) {
            cout << arr[j];
            if (j < i - 1) {
                cout << ",";
            }
        }
        cout << "]" << endl;
    }
    return 0;
}
