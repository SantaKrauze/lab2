#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP
#include <iostream>
#include <array>

class TicTacToe{
	public:
		TicTacToe ();
		void getMove ();
		bool gameOver ();
	private:
		bool isSpace ();
		bool boundCheck (int row,int col);
		void fill (int row, int col);
		void printBoard ();
		int playerIndex;
		enum class field {empty,X,O};
		std::array <field,2> players = {field::O, field::X};
		using Board = std::array < std::array<field,3>, 3>;
		Board board;
};
#endif
