class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        
        for (int row = 0; row < numRows; row++) {
            vector<int> ansRow(row + 1, 1);              // Initialize the row with 1s
            for (int col = 1; col < row; col++) {
                ansRow[col] = result[row - 1][col - 1] + result[row - 1][col];
            }
            result.push_back(ansRow);
        }
        return result;
    }
};