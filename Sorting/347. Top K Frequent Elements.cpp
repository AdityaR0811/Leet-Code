
    /*
    Time complexity : O(N log k)
    Space complexity : O(N)
    */
    
    
    

    
    class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> result;
        for(auto& i: nums){
            if(result.count(i)){
                result[i]++;
            }
            else{
                result[i] = 1;
            }
        }
        vector<pair<int, int>> pairs;
        for(auto itr: result)
        {
            pairs.push_back({itr.second , itr.first});
        }
        vector<int> answer;
        sort(pairs.rbegin(), pairs.rend());
        for(int i = 0 ; i < k ;i++){
            answer.push_back(pairs[i].second);
        }
        return answer;
    }
};
    
    
    /*
    Author : AdityaR0811
    Question Link : https://leetcode.com/problems/top-k-frequent-elements/
    */
    
    
