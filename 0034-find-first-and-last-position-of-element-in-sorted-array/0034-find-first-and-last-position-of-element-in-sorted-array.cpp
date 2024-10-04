class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2, -1);
        result[0] = sRange(nums, target);
        result[1] = eRange(nums, target);
        return result; 
    }

    int sRange(vector<int>& nums, int target) {
        int n = nums.size();
        int s=0;
        int e = n-1;
        int ans = -1;
        int mid = s+((e-s)/2);
    
        while(s<=e){
            if(nums[mid]==target){
                ans=mid;
                e=mid-1;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+((e-s)/2);
        }
        return ans;
    }

    int eRange(vector<int>& nums,  int target) {
        int n = nums.size();
        int s=0;
        int e = n-1;
        int ans = -1;
        int mid = s+((e-s)/2);
        
        while(s<=e){
            if(nums[mid]==target){
                ans=mid;
                s=mid+1;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+((e-s)/2);
        }
        return ans;
    }    
};