void inorder(struct TreeNode* root, int* result, int* index) {
    if (root == NULL)
        return;

    inorder(root->left, result, index);

    result[(*index)++] = root->val;

    inorder(root->right, result, index);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int* result = malloc(100 * sizeof(int));
    int index = 0;

    inorder(root, result, &index);

    *returnSize = index;

    return result;
}