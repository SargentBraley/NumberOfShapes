#include "stdafx.h"

#include <vector>

#include "NumberOfShapes.h"

using namespace std;

void Shapes::dfs(vector<vector<unsigned>> &grid, unsigned r, unsigned c) {
	auto nr = grid.size();
	auto nc = grid[0].size();

	grid[r][c] = 0;
	if (r >= 1 && grid[r - 1][c] == 1) dfs(grid, r - 1, c);
	if (r + 1 < nr  && grid[r + 1][c] == 1) dfs(grid, r + 1, c);
	if (c >= 1 && grid[r][c - 1] == 1) dfs(grid, r, c - 1);
	if (c + 1 < nc && grid[r][c + 1] == 1) dfs(grid, r, c + 1);
}

int Shapes::numberOfShapes(vector<vector<unsigned>> &grid) {
	auto nr = grid.size();
	if (!nr) return 0;
	auto nc = grid[0].size();

	int num_shapes = 0;
	for (unsigned r = 0; r < nr; ++r) {
		for (unsigned c = 0; c < nc; ++c) {
			if (grid[r][c] == 1) {
				++num_shapes;
				dfs(grid, r, c);
			}
		}
	}

	return num_shapes;
}
