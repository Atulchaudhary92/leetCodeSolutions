/* Structure of a Tree Node
class Node {
public:
    int data;
    Node* left, *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
  bool isLeaf(Node*root) {
      return root && !root->left && !root->right;
  }
  int returnSum(Node*root){
      if(!root) return 0;
      int left=root->left!=nullptr?root->left->data:0;
      int right=root->right!=nullptr?root->right->data:0;
      return left+right;
  }
    bool isSumProperty(Node *root) {if(!root || isLeaf(root)) return true;
        if(root->data!=returnSum(root) ) return false;
        
        
        return isSumProperty(root->left) && isSumProperty(root->right);
    }
};
