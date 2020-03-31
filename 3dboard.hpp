#ifndef BOARD_HPP
#define BOARD_HPP

enum class field {red, blue, empty};
class Board{	
	public:	
		Board();
		int getMove();
		bool gameOver();
	private:
		field _players[2]={field::red, field::blue};
		int _player=0;
		int _boardHeight[4][4];
		field _board[4][4][4];
		void _print();
		void _move(int v, int h);
};
#endif
