#ifndef DATABASE_HPP
#define DATABASE_HPP
#include <iostream>
#include <map>

template <typename keyType, typename dataType> 
class Database{
	public:
		//template <class keyType, class dataType>
		void addItem (keyType key, dataType data);
		void printByKey (keyType key);
	private:
		std::map <keyType, dataType> data;
};
#endif
