
    /*
    Time complexity : O(n+m)
    Space complexity : O(n+m)
    */
    
    
   

    
    //Two Pointer approach
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        int x = max(n,m);
        int p1 = 0, p2 = 0;
        string s;
        for(int i = 0; i < x; i++){
            if(p1 < n){
                s.push_back(word1[p1]);
            }
            if(p2 < m){
                s.push_back(word2[p2]);
            }
            p1++;
            p2++;
        }
        return s;
    }
};
    
    
    /*
    Author : AdityaR0811
    https://leetcode.com/problems/merge-strings-alternately/
    */
    
    
