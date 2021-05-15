#include <queue>
#include <set>
#include "header.h"

// When find a '1', find all conjuncting '1' also mark it to '2'.
// So, every time we see '1', that's a start of new island. 
// The way to find conjuncting '1' is: push the first '1' to a queue, 
// then check all neighbours, keep pushing the neighbouring '1' to the queue
// and check their neighbours until the queue is empty.

int numIslands2(vector<vector<char>>& grid)
{
    int result = 0;

    int m = grid.size();
    int n = grid[0].size();

    queue<pair<int, int>> pending;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((grid[i][j] == '1'))
            {
                ++result;
                grid[i][j] = '2';
                pending.push({ i, j });

                while (!pending.empty())
                {
                    pair<int, int> p = pending.front();
                    pending.pop();

                    if (p.second > 0 && grid[p.first][p.second - 1] == '1')
                    {
                        grid[p.first][ p.second - 1] = '2';
                        pending.push({ p.first, p.second - 1 });
                    }

                    if (p.first > 0 && grid[p.first - 1][p.second] == '1')
                    {
                        grid[p.first - 1][ p.second] = '2';
                        pending.push({ p.first - 1, p.second });
                    }

                    if (p.second < n - 1 && grid[p.first][p.second + 1] == '1')
                    {
                        grid[p.first][ p.second + 1] = '2';
                        pending.push({ p.first, p.second + 1 });
                    }

                    if (p.first < m - 1  > 0 && grid[p.first + 1][p.second] == '1')
                    {
                        grid[p.first + 1][ p.second] = '2';
                        pending.push({ p.first + 1, p.second });
                    }
                }
            }
        }
    }
    return result;
}

