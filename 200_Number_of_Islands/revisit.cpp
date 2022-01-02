#include "header.h"

static void exploreIsland(vector<vector<char>>& grid, int row, int col);


int numIslands_r(vector<vector<char>>& grid)
{
    int result = 0;

    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            if (grid[i][j] == '1')
            {
                ++result;
                exploreIsland(grid, i, j);
            }
        }
    }
    return result;
}

void exploreIsland(vector<vector<char>>& grid, int i, int j)
{
    if (i < 0 || i == grid.size() || j < 0 || j == grid[0].size())
    {
        return;
    }

    if (grid[i][j] == '1')
    {
        grid[i][j] = '2';
        exploreIsland(grid, i, j + 1);
        exploreIsland(grid, i + 1, j);
        exploreIsland(grid, i, j - 1);
        exploreIsland(grid, i - 1, j);
    }
}