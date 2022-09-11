/* 
Given an integer array nums, return the most frequent even element.

If there is a tie, return the smallest one. If there is no such element, return -1.

 

Example 1:

Input: nums = [0,1,2,2,4,4,1]
Output: 2
Explanation:
The even elements are 0, 2, and 4. Of these, 2 and 4 appear the most.
We return the smallest one, which is 2.
*/



class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n=nums.size();
        map<int,int>count;
        int maxx=0;
        for(int i=0;i<n;++i){
            if(nums[i]%2==0){
                count[nums[i]]++;
                maxx=max(count[nums[i]],maxx);
            }
        }
        for(auto& x:count){
            if( x.second==maxx) return x.first;
        }
    return -1;
    }
    
};
