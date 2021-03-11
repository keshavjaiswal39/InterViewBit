vector<int> Solution::rotateArray(vector<int> &A, int B) {
    vector<int> ret; 
    int rotate=B%A.size();
    for (int i = rotate; i < A.size(); i++) 
    {
        ret.push_back(A[i]);
    }
    for(int i=0;i<rotate;i++)
    {
        ret.push_back(A[i]);
    }
    return ret; 
}

