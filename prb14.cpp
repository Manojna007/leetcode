/*Remove All Adjacent Duplicates in String II 

You are given a string s and an integer k, a k duplicate removal consists of choosing k adjacent and equal letters from s and removing them, causing the left and the right side of the deleted substring to concatenate together.

We repeatedly make k duplicate removals on s until we no longer can.

Return the final string after all such duplicate removals have been made. It is guaranteed that the answer is unique.

Input: s = "deeedbbcccbdaa", k = 3
Output: "aa"
Explanation: 
First delete "eee" and "ccc", get "ddbbbdaa"
Then delete "bbb", get "dddaa"
Finally delete "ddd", get "aa"*/

class Solution {
public:
   
    class Pair{
        public:
        char first;   /// character
        int second;    /// count
        Pair(char f,int s){
            first = f;
            second = s;
        }
    };
    string removeDuplicates(string A, int k) {
        
        stack<Pair> s;
        
   // inbuilt pair class
         for(int i=0;i<A.size();i++){
             if(s.empty() || A[i] != s.top().first){
                 /// push a pair
                 Pair p(A[i],1); 
                 s.push(p);
             } else {
                 /// A[i] = top element 
                 s.top().second++;
                 int count = s.top().second;
                 if(count==k){
                     s.pop();
                 }
                 
             }
         }
        
        string ans="";
        while(!s.empty()){
            int count = s.top().second;
            while(count--){
                 ans.push_back(s.top().first);
            }
            s.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
        
    
    /// inbuilt pair class
    
     /*string removeDuplicates(string A, int k) {
        
        stack<pair<char,int> > s;
         for(int i=0;i<A.size();i++){
             if(s.empty() || A[i] != s.top().first){
                 /// push a pair
                // pair p = {A[i],1};
                 pair p(A[i],1);
                 s.push(p);
                 //s.push(make_pair(A[i],1));
             } else {
                 /// A[i] = top element 
                 s.top().second++;
                 int count = s.top().second;
                 if(count==k){
                     s.pop();
                 }
                 
             }
         }
        
        string ans="";
        while(!s.empty()){
            int count = s.top().second;
            while(count--){
                 ans.push_back(s.top().first);
            }
            s.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans; */
    
    }
};
