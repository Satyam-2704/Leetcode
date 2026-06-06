class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<int> ans;
        int row=mat.size();
        int col=mat[0].size();
        int total=row*col;
        int count=0;
        int startRow=0;
        int endRow=row-1;
        int startCol=0;
        int endCol=col-1;

        while(count<total){
            for(int i=startCol;i<=endCol && count<total;i++){
                ans.push_back(mat[startRow][i]);
                count++;
            }
            startRow++;

            for(int i=startRow;i<=endRow && count<total;i++){
                ans.push_back(mat[i][endCol]);
                count++;
            }
            endCol--;

            for(int i=endCol;i>=startCol && count<total;i--){
                ans.push_back(mat[endRow][i]);
                count++;
            }
            endRow--;
          for(int i=endRow;i>=startRow && count<total;i--){
                ans.push_back(mat[i][startCol]);
                count++;

        }
        startCol++;
        }
        return ans;
    }
};