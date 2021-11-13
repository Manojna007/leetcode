/* Given a string columnTitle that represents the column title as appear in an Excel sheet, return its corresponding column number.

For example:

A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28 
...
 

Example 1:

Input: columnTitle = "A"
Output: 1
Example 2:

Input: columnTitle = "AB"
Output: 28
Example 3:

Input: columnTitle = "ZY"
Output: 701
Example 4:

Input: columnTitle = "FXSHRXW"
Output: 2147483647 */


class Solution {
public:
    int titleToNumber(string str) {
        int ans=0;
        long long pw=1;
        for(int i=str.size()-1;i>=0;i--){
            ans= ans +(str[i]-64)*pw;
            pw= pw*26;
        }
        return ans;
    }
};
