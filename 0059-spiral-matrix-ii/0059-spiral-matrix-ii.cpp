class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> mat(n,vector<int>(n,0));
        int row=n;
        int col=n;
        int total=row*col;
        int count=1;
        int startRow=0;
        int endRow=row-1;
        int startCol=0;
        int endCol=col-1;
        while(count<=total){
            for(int i=startCol;i<=endCol && count<=total;i++){
                mat[startRow][i]=count++;
                
            }
            startRow++;

            for(int i=startRow;i<=endRow && count<=total;i++){
               mat[i][endCol]=count++;
                
            }
            endCol--;

            for(int i=endCol;i>=startCol && count<=total;i--){
                mat[endRow][i]=count++;
                
            }
            endRow--;
          for(int i=endRow;i>=startRow && count<=total;i--){
                mat[i][startCol]=count++;
                

        }
        startCol++;
        }
        return mat;
    }
};