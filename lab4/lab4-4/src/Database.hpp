#ifndef DATABASE_HPP
#define DATABASE_HPP
#include <iostream>
#include <map>
#include <string>

template <typename keyType, typename dataType> 
class Database{
	public:
		//Database();
		struct node {
			dataType data;
			node* left;
			node* right;
		};
		node* root;
		node* insert();
		node* remove();
		void printInOrder();
		node* find();
		Database();
		~Database();
		void insert();
		void remove();
		void display();
		void search();
};
#endif
