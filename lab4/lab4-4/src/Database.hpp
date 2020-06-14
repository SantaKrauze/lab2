#ifndef DATABASE_HPP
#define DATABASE_HPP
#include <iostream>
#include <map>

template <typename keyType, typename dataType> 
class Database{
	public:
		void addItem (keyType key, dataType data){
			dataBase[key] = data;
		}
		void printAt (keyType key){
			std::cout<<dataBase.at(key)<<std::endl;
		}
	private:
		std::map <keyType, dataType> dataBase;
};
#endif
