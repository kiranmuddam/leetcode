#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode* createTree(vector<int> nodesArr, TreeNode* root, int i, int arrSize) { 
    if (i < arrSize) { 
        TreeNode* temp = new TreeNode(nodesArr[i]); 
        root = temp; 
  
        root->left = createTree(nodesArr, 
                   root->left, 2 * i + 1, arrSize); 
  
        root->right = createTree(nodesArr, 
                  root->right, 2 * i + 2, arrSize); 
    } 
    return root; 
} 

void inOrder(TreeNode* root) { 
    if (root != NULL) { 
        inOrder(root->left); 
        cout << root->val <<" "; 
        inOrder(root->right); 
    } 
}

void BFS(TreeNode* root) {
    queue<TreeNode *> q;
    q.push(root);
    while (q.empty() == false) {
        TreeNode *node = q.front();
        cout << node->val << " ";
        q.pop();
        if (node->left != NULL)
            q.push(node->left);
        if (node->right != NULL)
            q.push(node->right);
    }
}

int maxLevelSum(TreeNode* root) {
    if(root == NULL) return 1;
    unordered_map<int, int> m;
    queue<pair<TreeNode*, int>> q;
    q.push({root, 1});
    int l = 1, val, mx = -1, prev_l = 0, total = 0;
    TreeNode * curr;
    int res;
    while(!q.empty()){
        curr = q.front().first;
        val = curr->val;
        l = q.front().second;
        q.pop();
        if(prev_l != l){
            if(total > mx){
                mx = total;
                res = prev_l;
            }
            total = val;
            prev_l = l;
        }else{
            total = total+val;
        }
        if(curr->right) q.push({curr->right, l+1});
        if(curr->left) q.push({curr->left, l+1});
    }
    cout << "Level : " << res << endl;
    cout << "Sum : " << mx << endl;
    return res;
}

int main(int argv, char *argc[]) {
vector<int> treeNodes = {1, 7, 0, 7, -8, NULL, NULL};
TreeNode* root = createTree(treeNodes, root, 0, treeNodes.size());
inOrder(root);
cout << endl;
BFS(root);
cout << endl;
maxLevelSum(root);

treeNodes = {1, 2, 3, 4, 5, 6, 7, NULL, NULL, NULL, NULL, 1, NULL, 2, NULL};
root = createTree(treeNodes, root, 0, treeNodes.size());
inOrder(root);
cout << endl;
BFS(root);
cout << endl;
maxLevelSum(root);

}