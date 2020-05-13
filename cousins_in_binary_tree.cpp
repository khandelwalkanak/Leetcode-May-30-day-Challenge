/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) 
    {
        queue<TreeNode*> q;
        q.push(root);
        vector<pair<TreeNode*,int>> v;
        int level = 0;
        while(!q.empty())
        {
            int s = q.size();
            for(int i = 0; i < s; i++)
            {
                TreeNode* t = q.front();
                q.pop();
                vector<TreeNode*>temp = {t->left, t->right};
                for(auto i : temp)
                {
                    if(i)
                    {
                        if(i->val == x || i->val == y)
                        {
                            v.emplace_back(t, level + 1);
                        }
                        if(v.size() == 2)
                        {
                            return v[0].first != v[1].first && v[0].second == v[1].second;
                        }
                        q.push(i);
                    }
                }
            }
            if(v.size() == 1)
            {
                return false;
            }
            level++;
        }
        return false;
    }
};