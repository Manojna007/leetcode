/* Remove All Adjacent Duplicates In String

You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.

We repeatedly make duplicate removals on s until we no longer can.

Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.

 

Example 1:

Input: s = "abbaca"
Output: "ca"
Explanation: 
For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".*/

class Solution {
public:
    string removeDuplicates(string A) {
         /*stack<char> s;
         for(int i=0;i<A.size();i++){
             if(s.empty() || A[i] != s.top()){
                 s.push(A[i]);
             } else {
                 s.pop();
             }
         }
        string ans="";
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
        */
        
        /// simulate inplace stack
        int stptr = -1;
        for(int i=0;i<A.size();i++){
             if(stptr ==-1 || A[i] != A[stptr] ){
                 stptr++;
                 A[stptr] = A[i];
             } else {
                 stptr--;
             }
         }
         string ans="";
        for(int i=0;i<=stptr;i++){
            ans.push_back(A[i]);
        }
        return ans;
    }
};
