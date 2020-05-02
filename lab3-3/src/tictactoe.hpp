#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP
#include <iostream>
#include <array>

class TicTacToe{
	public:
		void getMove ();
		bool gameOver ();
	private:
		bool _isSpace ();
		void _fill ();
		enum class field = {empty,X,O};
		std::array _board< std::array<field,3>, 3>;
}
