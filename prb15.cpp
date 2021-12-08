/* 3Sum 
 Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
 Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        const int n = nums.size();
        vector<vector<int>> p = {};
        int lft , rgt;
        for(int i = 0; i < n ; i++) {
            // Skipping dupplicates
            if(i && nums[i] == nums[i-1])
                continue;
        
            // 2 Pointer
            lft = i + 1;
            rgt = n - 1;
            while( lft < rgt ) {
                if(nums[i] + nums[lft] + nums[rgt] > 0)
                    rgt--;
                else if(nums[i] + nums[lft] + nums[rgt] < 0)
                    lft++;
                else {
                    p.push_back({nums[i] , nums[lft] , nums[rgt]});
                    int le = nums[lft] , re = nums[rgt];
                    // Skipping dupplicates
                    while(lft < rgt && nums[lft] == le)
                        lft++;
                    while(lft < rgt && nums[rgt] == re)
                        rgt--;
                }
            }
        }
        return p;
    }
};
