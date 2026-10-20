class Solution {
private:
void dfs(vector<vector<int>>& image, int row, int col, int initialColor,vector<vector<int>> & ans, int delRow[], int delCol[], int color){
    ans[row][col]=color;
    int m=image.size();
    int n=image[0].size();
    for(int i=0;i<4;i++){
        int nrow=row+delRow[i];
        int ncol=col+delCol[i];
        if(nrow>=0 && ncol >=0 && nrow<m && ncol<n && image[nrow][ncol]==initialColor && ans[nrow][ncol]!=color){
            dfs(image,nrow,ncol,initialColor, ans, delRow,delCol,color);
        }
    }
}
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initialColor=image[sr][sc];
        vector<vector<int>> ans=image;
        int delRow[]={-1,0,1,0};
        int delCol[]={0,1,0,-1};

        dfs(image,sr,sc,initialColor,ans,delRow,delCol,color);
        return ans;
    }
};