class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int oranges = 0;
        int rows = grid.size();
        int cols = grid[0].size();
        queue<pair<int, int>> q;
        for (int row = 0; row < rows; row++) {
            for (int col = 0; col < cols; col++) {
                if (grid[row][col] == 1) {
                    oranges++;
                } else if (grid[row][col] == 2) {
                    q.push({row, col});
                }
            }
        }
        int deltaRow[4] = {-1, 0, 0, 1};
        int deltaCol[4] = {0, -1, 1, 0};
        int mins = 0;
        while (!q.empty()) {
            int temp = q.size();
            while(temp--) {
                pair<int, int> cur = q.front();
                q.pop();

                int row = cur.first;
                int col = cur.second;

                for (int i = 0; i < 4; i++) {
                    int newRow = row + deltaRow[i];
                    int newCol = col + deltaCol[i];
                    if (newRow < 0 || newRow == rows || newCol < 0 || newCol == cols) continue;
                    if (grid[newRow][newCol] != 1) continue;
                    grid[newRow][newCol] = 2;
                    oranges--;
                    q.push({newRow, newCol});
                }
            }
            if (!q.empty()) mins++;
        }
        if (oranges) return -1;
        return mins;
    }
};