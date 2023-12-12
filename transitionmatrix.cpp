#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> transpose(const vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();

    // 创建新矩阵，行列互换vector<int>(m, 0): 这部分创建了一个包含 m 个整数元素，每个元素的值都是 0 的整数向量。这是通过使用 vector 类模板来创建的，模板参数是 int。

vector<vector<int>>(n, vector<int>(m, 0)); 这部分创建了一个包含 n 行的二维整数向量，每一行都是一个 vector<int>(m, 0)，即包含 m 个整数元素，每个元素的值都是 0 的整数向量
    vector<vector<int>> result(n, vector<int>(m, 0));

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            result[j][i] = matrix[i][j];  // 将元素放置在新矩阵的对应位置
        }
    }

    return result;
}

int main() {
    // 示例用法，使用 using namespace std;
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    vector<vector<int>> result = transpose(matrix);

    // 输出转置后的矩阵
    for (const auto& row : result) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}