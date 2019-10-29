#include "pch.h"

#include <iostream>
#include <vector>

#include "..\StaticLib\NumberOfShapes.h"

TEST(TestNumberOfShapes, case00) {
	std::vector<std::vector<unsigned>> grid{
		{ 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0 }
	};
	Shapes shapeFinder;
	int shapes = shapeFinder.numberOfShapes(grid);
	EXPECT_EQ(shapes, 0);
}

TEST(TestNumberOfShapes, case01) {
	std::vector<std::vector<unsigned>> grid {
		{ 1, 1, 0, 0, 0 },
		{ 1, 0, 0, 0, 0 },
		{ 0, 0, 1, 1, 0 },
		{ 1, 0, 0, 0, 0 }
	};
	Shapes shapeFinder;
	int shapes = shapeFinder.numberOfShapes(grid);
	EXPECT_EQ(shapes, 3);
}

TEST(TestNumberOfShapes, case02) {
	std::vector<std::vector<unsigned>> grid{
		{ 1, 1, 1, 1, 0 },
		{ 1, 1, 0, 1, 0 },
		{ 1, 1, 0, 0, 0 },
		{ 0, 0, 0, 0, 0 }
	};
	Shapes shapeFinder;
	int shapes = shapeFinder.numberOfShapes(grid);
	EXPECT_EQ(shapes, 1);
}

TEST(TestNumberOfShapes, case03) {
	std::vector<std::vector<unsigned>> grid{
		{ 1, 1, 1, 1, 1 },
		{ 1, 1, 1, 1, 1 },
		{ 1, 1, 1, 1, 1 },
		{ 1, 1, 1, 1, 1 }
	};
	Shapes shapeFinder;
	int shapes = shapeFinder.numberOfShapes(grid);
	EXPECT_EQ(shapes, 1);
}


