// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:

//     bool isbalanced=true;

//     int height(TreeNode* root){
//         if(root==NULL){
//             return 0;
//         }
//         int leftheight=height(root->left);
//         int rightheight=height(root->right);

//         //check for current node is balanced or not

//         if(isbalanced && abs(leftheight-rightheight)>1){
//             isbalanced=false;
//         }


//         int ans=max(leftheight,rightheight)+1;
//         return ans;
//     }
//     bool isBalanced(TreeNode* root) {


//         //fast way to find hbt o(n)

//         height(root);
//         return isbalanced;

//         // //way 1 TC:o(n2)

//         // if(root==NULL){
//         //     return true;
//         // }

//         // //humne chek kiya left subtree balanced hai ki nahi
//         // if(isBalanced(root->left)==false){
//         //     return false;
//         // }

//         // //hum ne check kiya right subtree balanced hai ki nahi
//         // //agar ek bhi node banced nahi hai to return fasle kr denge
//         // if(isBalanced(root->right)==false){
//         //     return false;
//         // }

//         // //humne check kiya root balanced hai ki nahi
//         // //agar ek bhi noode balanced nahi hai to hum false return kr denge
//         // int right=height(root->right);
//         // int left=height(root->left);
//         // if(abs(left-right)<=1){
//         //     return true;
//         // }else{
//         //     return false;
//         // }

//         // if(root==NULL){
//         //     return 0;
//         // }
//         // int l=0;
//         // int r=0;
//         // if(isBalanced(root->left,&l)==false){
//         //     return false;
//         // }

//         // if(isBalanced(root->right,&r)==false){
//         //     return false;
//         // }

//         // *height=max(l,r)+1;
//         // if(abs(l-r)<=1){
//         //     return true;
//         // }else{
//         //     return false;
//         // }

//     }

// };