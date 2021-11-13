/* Valid Palindrome
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

 

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome. */

class Solution {
public:
    bool isPalindrome(string A) {
        int st=0;
        int n = A.size();
        int en = n-1;
        
        while(st<=en){
            
            while(st<en && !isalnum(A[st])) st++;
            while(st<en && !isalnum(A[en])) en--;
            
            if(toupper(A[st]) != toupper(A[en])) return false;
            
            st++;
            en--;
        }
        return true;
    }
    
};
