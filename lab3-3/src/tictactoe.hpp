#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP
#include <iostream>
#include <array>

class TicTacToe{
	public:
		TicTacToe ();
		void pvpGame ();
		void pvcGame();
	private:
		void getMove ();
		bool gameOver ();
		bool pvcOver (int index);
		int minimax (int index, int row, int col, int calls);
		bool isSpace ();
		bool boundCheck (int row,int col);
		void fill (int row, int col);
		void printBoard ();
		int playerIndex;
		enum class field {empty,X,O};
		std::array <field,2> players = {field::O, field::X};
		using Board = std::array < std::array<field,3>, 3>;
		Board board;
		Board minimaxBoard;
		using pair = std::array <int,2>;
		using victory = std::array <pair, 3>;
		victory v1 = {{ {{2,0}}, {{1,1}}, {{0,2}} }};
		victory v2 = {{ {{0,0}}, {{1,1}}, {{2,2}} }};
		victory v3 = {{ {{0,0}}, {{0,1}}, {{0,2}} }};
		victory v4 = {{ {{1,0}}, {{1,1}}, {{1,2}} }};
		victory v5 = {{ {{2,0}}, {{2,1}}, {{2,2}} }};
		victory v6 = {{ {{0,0}}, {{1,0}}, {{2,0}} }};
		victory v7 = {{ {{1,0}}, {{1,1}}, {{1,2}} }};
		victory v8 = {{ {{2,0}}, {{2,1}}, {{2,2}} }};
		std::array <victory, 8> possibleVictories = {v1, v2, v3, v4, v5, v6, v7, v8};
		int minimaxCalls =0;
};
#endif
