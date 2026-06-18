class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int R=0;
        int C=col-1;
        while(R<row && C>=0){
            int element=matrix[R][C];
            if(element == target){
                return true;
            }
            if(element>target){
                C--;
            }
            else if(element<target){
                R++;
            }
        }
        return false;
    }
};