#pragma once
#include "grid.h"
#include "blocks.cpp"
class Game {
private:
	std::vector<Block> blocks;
public:
	Game();
	Block GetRandomBlock();
	Grid grid;
	std::vector<Block> GetAllBlocks();
	Block currentBlock;
	Block nextBlock;
	void Draw();
};
