#ifndef DATABASE_HPP
#define DATABASE_HPP
#include <iostream>
#include <map>
#include <string>

template <typename keyType, typename dataType> 
class Database{
	public:
		//Database();
		Database* left;
		Database* right;
		Database* root;
		void setValue (keyType key, dataType data){
			dataBase[key] = data;
		}
		void printAll(){
			for (auto i : dataBase) std::cout<<i.first<<'-'<<dataBase.at(i.first)<<'\n';
		}
		dataType getValue (keyType key){
			return dataBase.at(key);
		}
		void printByKey (keyType key){
			for (auto i : dataBase){
				if (i.first < key){
					std::cout<<std::endl;
				}
				else
					std::cout<<std::endl;
			}
		}
	private:
		std::map <keyType, dataType> dataBase;
};
#endif
