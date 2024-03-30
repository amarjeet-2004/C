class Solution {
  public:
  void solve(Node *root,int &ans)
  {
      if(root==NULL)return;
      ans=root->data;
      return solve(root->left,ans);
  }
    int minValue(Node* root) {
        // Code here
        int ans=root->data;
        solve(root,ans);
        return ans;
    }
};
