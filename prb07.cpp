// max sum subarray

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res=nums[0];
        int maxx=nums[0];
        for(int i=1;i<nums.size();i++){
            maxx= max(maxx+nums[i],nums[i]);
            res=max(res,maxx);
        }
        return res;
    }
};
