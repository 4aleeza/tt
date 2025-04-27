#include "game.h"
#include <random>
Game::Game()
{
	grid = Grid();
	blocks = GetAllBlocks();
	currentBlock = GetRandomBlock();
	nextBlock = GetRandomBlock();
}
Block Game::GetRandomBlock()
{
	if (blocks.empty()) {

	}
	int randomIndex = rand() % blocks.size();
	Block block = blocks[randomIndex];
	//now we need to remove ts block from the vector so the next time it wont be avlb
	blocks.erase(blocks.begin() + randomIndex);
	return block; 
	//now the random placeholder for blocks vector is empty again
	//so we refill
}
std::vector<Block> Game::GetAllBlocks()
{
	return { IBlock(), JBlock(), LBlock(),  OBlock(), SBlock(), TBlock(), ZBlock() };
}
void Game::Draw()
{
	grid.Draw();
	currentBlock.Draw();
}