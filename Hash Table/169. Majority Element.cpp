
    /*
    Time complexity : O(n)
    Space complexity : O(n)
    */
    
    
    /*
    Additional Notes : None
    */

    
    class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int, int> answer;
        int n = nums.size();
        for(auto& i: nums){
            if(answer.count(i)){
                answer[i]++;
            }
            else{
                answer[i] = 1;
            }
        }
        for(auto itr: answer){
            if(itr.second > (n/2)){
                return itr.first;
            }
        }
        return 0;
    }
};
    
    
    /*
    Author : AdityaR0811
    Question Link : .
    */
    
    