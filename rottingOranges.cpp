class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        queue<pair<int, int>> q;

        int fresh = 0;

        // Put all initially rotten oranges into queue
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (grid[i][j] == 2) {
                    q.push({i, j});
                }
                else if (grid[i][j] == 1) {
                    fresh++;
                }
            }
        }

        int minutes = 0;

        int dr[] = {-1, 0, 1, 0};
        int dc[] = {0, 1, 0, -1};

        // Multi-source BFS
        while (!q.empty() && fresh > 0) {

            int size = q.size();

            while (size--) {

                auto [r, c] = q.front();
                q.pop();

                for (int k = 0; k < 4; k++) {

                    int R = r + dr[k];
                    int C = c + dc[k];

                    if (R >= 0 && R < n &&
                        C >= 0 && C < m &&
                        grid[R][C] == 1) {

                        grid[R][C] = 2;
                        fresh--;

                        q.push({R, C});
                    }
                }
            }

            minutes++;
        }

        return fresh == 0 ? minutes : -1;
    }
};
