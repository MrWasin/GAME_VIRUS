#include "Game.h"
#include<time.h>

int main()
{
	srand(time_t(static_cast<unsigned>(0)));

	Game game;

	game.run();

	//End of application
	return 0;
}