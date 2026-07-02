class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        for(int i=0;i<mat.size();i++){
        for(int j=i+1;j<mat[0].size();j++){
            swap(mat[i][j],mat[j][i]);
        }   
    }
    for(int k=0;k<mat.size();k++){
        reverse(mat[k].begin(),mat[k].end());
    }
    }
};