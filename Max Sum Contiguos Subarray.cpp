int Solution::maxSubArray(const vector<int> &A) 
{
    int maxSum = A[0], currentSum = A[0], n = A.size();
    for (int i=1; i<n; i++) {
        currentSum = max(A[i], currentSum+A[i]);
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
}

