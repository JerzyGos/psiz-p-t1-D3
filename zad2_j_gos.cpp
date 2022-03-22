#include "task1_list/list.h"
#include <iostream>


List* initList(void){
  List* pList = (List*) malloc(sizeof(*pList));
  std::cout << "Wielkosc listy: " << sizeof(*pList) << " w bajtach." << std::endl;
  return pList;
}



