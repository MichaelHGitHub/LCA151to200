#include <queue>
#include <set>
#include "header.h"

static void mark(vector<vector<char>>& grid, int i, int j);

// When find a '1', find all conjuncting '1' also mark it to '2'.
// So, every time we see '1', that's a start of new island. 
// The way to find conjuncting '1' is to use recursive call to 
// check neighbours. It's the key to change all found '1' to '2'
// to avoid duplication.

int numIslands(vector<vector<char>>& grid)
{
    int result = 0;

    int m = grid.size();
    int n = grid[0].size();

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == '1')
            {
                ++result;
                mark(grid, i, j);
            }
        }
    }
    return result;
}

void mark(vector<vector<char>>& grid, int i, int j)
{
    if (i < 0 || i >= grid.size() || j < 0 || j >= grid[i].size() || grid[i][j] != '1')
    {
        return;
    }

    grid[i][j] = '2';

    mark(grid, i, j - 1);
    mark(grid, i - 1, j);
    mark(grid, i, j + 1);
    mark(grid, i + 1, j);
}