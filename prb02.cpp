//Reverse String

class Solution {
public:
    void reverseString(vector<char>& s) {
        stack <char> stk;
        for(int i=0;i<s.size();i++){
            stk.push(s[i]);
        }
        
        for(int i=0;i<s.size();i++){
            s[i]=stk.top();
            stk.pop();
        }
        /*int p=0,q=s.size()-1;
        while(p<=q){
            swap(s[p],s[q]);
            p++;q--;
        }*/
        
    }
};
