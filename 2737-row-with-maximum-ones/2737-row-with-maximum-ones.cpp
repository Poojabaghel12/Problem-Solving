class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> ans;
        int n = mat.size();

        int countOne = INT_MIN;
        int rowNo = -1;

        for(int i=0; i<n; i++){
            int count = 0;
            for(int j=0; j<mat[i].size(); j++){
                if(mat[i][j] == 1){
                    count++;
                }
            }
            if(count > countOne){
                countOne = count;
                rowNo = i;
            }
        }
        ans.push_back(rowNo);
        ans.push_back(countOne);
        return ans;
    }
};