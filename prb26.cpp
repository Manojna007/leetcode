/*Arithmetic Slices

An integer array is called arithmetic if it consists of at least three elements and if the difference between any two consecutive elements is the same.

For example, [1,3,5,7,9], [7,7,7,7], and [3,-1,-5,-9] are arithmetic sequences.
Given an integer array nums, return the number of arithmetic subarrays of nums.

A subarray is a contiguous subsequence of the array.
  
  Example 1:

Input: nums = [1,2,3,4]
Output: 3
Explanation: We have 3 arithmetic slices in nums: [1, 2, 3], [2, 3, 4] and [1,2,3,4] itself.

*/

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        if(A.size()<3) return 0;
        int  start=0, end=1,diff,n,sum = 0;
        for (int i =1;i<A. size();i++){
        
            diff = A[end] - A[start];
            while(i+1<A.size()  && A[i+1]-A[i] == diff){
                end++;
                i++;
        }
            n = (end-start)+1;
                                    
            if(n>=3)
            sum+= (n-2)*(n+1-2)/2;
            start = end;
             end++;

         }
        return sum;
    }
    
};
