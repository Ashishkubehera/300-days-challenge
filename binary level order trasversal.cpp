We can use DFS and an array to store the elements with index corresponding to the levels

    3
   / \
  9  20
    /  \
   15   7
For the tree given above we will perform DFS and we will use an array (ans) where ans[0] = [3] the root, ans[1] = [9,20] , ans[2] = [15,7]. The end result will look like this: ans = [[3],[9,20],[15,7]]. We will reverse the array and return the result. How will we do this? -> Explanation in code.

class Solution {
public:

    // Dfs will have the current node, the current level and the current state of ans array
    void dfs(TreeNode* root,int level,vector<vector<int>>& ans){
        if(!root) return; // If the node is NULL return
        if(level == ans.size()) ans.push_back({});  // if index = level of array is ot present, create empty array at that index
        ans[level].push_back(root->val);  // insert the value at index = level
        dfs(root->left,level+1,ans);  // Perform dfs on left sub tree increase level by 1
        dfs(root->right,level+1,ans);  // Perform dfs on right sub tree increase level by 1
    }

    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(!root) return {};  // Return if null
        vector<vector<int>>ans;  // We store our ans in this array
        dfs(root,0,ans);  // Perform dfs and fill ans array, initial level is 0
        reverse(ans.begin(),ans.end()); // reverse array
        return ans;
    }
};
How this will take place->
ans = []
dfs(3,0,[])-> ans[0].push_back(3)
dfs(9,1,[[3]]) ->ans[1].push_back(9)
dfs(20,1,[[3],[9]])
dfs(15,2,[[3],[9,20]])
dfs(7,2,[[3],[9,20],[15]])->ans[2].push_back(7)
ans = [[3],[9,20],[15,7]]
reverse(ans) => [[15,7],[9,20],[3]]
Hope this helps. Thank you!
