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
		void printAll(){
			for (auto i : dataBase) std::cout<<i.first<<'-'<<dataBase.at(i.first)<<'\n';
		}
		dataType getValue (keyType key){
			return dataBase.at(key);
		}
	private:
		std::map <keyType, dataType> dataBase;
};
#endif
