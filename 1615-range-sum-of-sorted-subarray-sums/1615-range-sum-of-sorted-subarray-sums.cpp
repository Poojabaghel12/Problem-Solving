// class Solution {
// public:
//     vector<int> sums;
//     int rangeSum(vector<int>& nums, int n, int left, int right) {
//         int sum = 0;
//         const unsigned int M = 1000000007;  //10^9+7
//         vector<int> csum;
//         for(int i=0; i<n; i++){
//             sum = (sum+nums[i])%M;
//             csum.push_back(sum);
//         }

//         for(int i=0; i<n; i++){
//             sums.push_back(csum[i]);
//             for(int j=i+1; j<n; j++){
//                 sums.push_back(csum[j] - csum[i]);
//             }
//         }
//         sum = 0;
//         sort(sums.begin(), sums.end());
//         for(int i=left-1; i<=right-1; i++){
//             sum += sums[i];
//         }
//         return sum;
//     }
// };

class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        const unsigned int M = 1000000007;  //10^9+7
        vector<int> sums;
        
        // Generate all subarray sums
        for(int i = 0; i < n; i++){
            int sum = 0;
            for(int j = i; j < n; j++){
                sum = (sum + nums[j]) % M;
                sums.push_back(sum);
            }
        }
        
        // Sort the sums
        sort(sums.begin(), sums.end());
        
        // Calculate the range sum from 'left' to 'right'
        int sum = 0;
        for(int i = left-1; i < right; i++){
            sum = (sum + sums[i]) % M;
        }
        
        return sum;
    }
};
