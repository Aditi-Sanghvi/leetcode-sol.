class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();

        queue<pair<int, int>> q;
        int time=0; int fresh=0;
        //initial traversal for checking rotten oranges already present
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }

                if(grid[i][j]==1){
                    fresh++;
                }
            }
        }

        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};

        while(!q.empty() && fresh>0){
            int size=q.size();
            for(int j=0;j<size;j++){
                 int row=q.front().first;
                 int col=q.front().second;
                 q.pop();
                
                for(int i=0;i<4;i++){
                    int nrow=row+delrow[i];
                    int ncol=col+delcol[i];
                   if(nrow>=0 && ncol>=0 && nrow<m && ncol<n && grid[nrow][ncol]==1){
                    grid[nrow][ncol]=2;
                    q.push({nrow,ncol});
                    fresh--;
                }
            }
            }
            time++;
        }
        if(fresh>0){
            return -1;
        }
        return time;
    }
};