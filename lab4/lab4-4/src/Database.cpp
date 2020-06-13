#include "Database.hpp"

template <typename keyType>
void Database<keyType>::printByKey(keyType key){
	//
}

template <typename keyType, typename dataType>
void Database<keyType, dataType>::addItem (keyType key, dataType data){
	data.at(key) = data;
}
