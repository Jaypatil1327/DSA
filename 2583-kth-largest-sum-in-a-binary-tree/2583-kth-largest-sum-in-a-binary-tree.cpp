class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        priority_queue<long long> pq;
        queue<TreeNode*> t;
        t.push(root);

        while (!t.empty()) {
            long long sum = 0;
            int n = t.size();

            for (int i = 0; i < n; i++) {
                TreeNode* topNode = t.front();
                t.pop();

                sum += topNode->val;
                if (topNode->right != nullptr)
                    t.push(topNode->right);
                if (topNode->left != nullptr)
                    t.push(topNode->left);
            }
            pq.push(sum);
        }

        if(pq.size() < k) return -1 ; 
        while(--k) pq.pop() ; 
        return pq.top() ;
    }
};