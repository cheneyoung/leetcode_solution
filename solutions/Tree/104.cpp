/*** 
 * @Author: yangzuo
 * @Date: 2021-04-20 15:52:33
 * @Email: yangzuo@tencent.com
 * @LastEditors: yangzuo
 * @LastEditTime: 2021-04-20 16:04:14
 * @FilePath: /leetcode_solution/solutions/Tree/104.cpp
 */
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
#include <iostream>
using namespace std;
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        return max(maxDepth(root->left), maxDepth(root->right)) + 1;

    }
};