#ifndef BOARD_HPP
#define BOARD_HPP

#include <iostream>

enum class field {red, blue, empty};
class Board{
	public:
		Board();
		~Board();
		int n,m;//board dimensions
		void getMove();
		bool gameOver();
	private:
		bool _isSpace();
		field **_board;//2d board
		void _move(int col);
		void _print();
		field _players[2]={field::red, field::blue};
		int _player=0;//player index
		int *_boardHeight;
};

#endif
