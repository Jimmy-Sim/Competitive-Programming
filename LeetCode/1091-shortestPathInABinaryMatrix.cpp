class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();

        if (grid[0][0] == 1 || grid[n - 1][n - 1] == 1) return -1;

        queue<vector<int>> queue;
        queue.push({0, 0, 1});
        grid[0][0] = 1;

        vector<vector<int>> directions = {
            {-1, -1}, {-1, 0}, {-1, 1},
            {0, -1},           {0, 1},
            {1, -1},  {1, 0},  {1, 1}
        };

        while (!queue.empty()) {
            auto current = queue.front();
            queue.pop();
            int row = current[0], col = current[1], distance = current[2];

            if (row == n - 1 && col == n - 1) return distance;

            for (const auto& direction : directions) {
                int newRow = row + direction[0], newCol = col + direction[1];

                if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < n && grid[newRow][newCol] == 0) {
                    grid[newRow][newCol] = 1;
                    queue.push({newRow, newCol, distance + 1});
                }
            }
        }

        return -1;
    }
};
