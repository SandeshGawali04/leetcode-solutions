class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> n;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            int first=nums[i];
            int second=target-first;
            if(n.find(second) != n.end()){
                ans.push_back(i);
                ans.push_back(n[second]);
                break;
            }
            n[first]=i;
        }
        return ans;
    }
};