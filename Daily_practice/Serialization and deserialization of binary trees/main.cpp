#include<bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Codec
{
    public:
    string serialize(TreeNode *root)
    {
        if(!root){
            return "#_";
        }
        return to_string(root->val) + "_" + serialize(root->left) + serialize(root->right);
    }
    TreeNode *deserialize(string data)
    {
        cout << data << endl;
        queue<string> q;
        stringstream ss(data);
        string s;
        while(getline(ss, s, '_'))
        {
            q.push(s);
        }
        return help(q);
    }
    TreeNode *help(queue<string> &q)
    {
        auto cur = q.front();
        q.pop();
        if(cur == "#")
        {
            return NULL;
        }
        auto root = new TreeNode(stoi(cur));//cur转10进制
        root->left = help(q);
        root->right = help(q);
        return root;
    }
};

int main(){
     TreeNode *treeNode1 = NULL;
    // TreeNode *treeNode2 = new TreeNode(2);
    // TreeNode *treeNode3 = new TreeNode(3);
    // TreeNode *treeNode4 = new TreeNode(4);
    // TreeNode *treeNode5 = new TreeNode(5);

    //treeNode1->left = treeNode2;
    //treeNode1->right = treeNode3;
   
    //treeNode3->left = treeNode4;
    //treeNode3->right = treeNode5;
    
    Codec sol;
    string str = sol.serialize(treeNode1);
    sol.deserialize(str); 
}