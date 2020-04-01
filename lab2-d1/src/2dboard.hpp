#ifndef BOARD_HPP
#define BOARD_HPP

#include <iostream>

enum class field {red, blue, empty};
class Board{
	public:
		Board();
		~Board();
		int n,m;
		void getMove();
		bool gameOver();
	private:
		field **_board;
		void _move(int col);
		void _print();
		field _players[2]={field::red, field::blue};
		int _player=0;
		int *_boardHeight;
};

#endif
