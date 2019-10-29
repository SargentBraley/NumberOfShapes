#pragma once

#include <vector>

class Shapes {
private:
	void dfs(std::vector<std::vector<unsigned>> &grid, unsigned r, unsigned c);

public:
	int numberOfShapes(std::vector<std::vector<unsigned>> &grid);
};

