class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>s;
        vector<vector<int>>result;
        sort(nums.begin(),nums.end());
        for(int i=0;i<pow(2,nums.size());i++){
            vector<int>temp;
            for(int j=0;j<nums.size();j++){
                if(i&1<<j)temp.push_back(nums[j]);
            }
            s.insert(temp);
        }
        for (auto x:s)result.push_back(x);
        return result;
    }
};