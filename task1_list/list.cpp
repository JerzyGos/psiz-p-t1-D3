#include "pch.h"  
#include "list.h"
#include <iostream>
 


List* initList(void)
{
	List* pRoot = (List*)malloc(sizeof(*pRoot));
	
	return pRoot;
}

void deinitList(List* pRoot)
{
	free(pRoot);
	pRoot = NULL;
}

void addCar(List* pRoot, char* plateNum)
{

}

void removeCar(List* pRoot, char* plateNum)
{

}
void printAll(List* pRoot) {

}




int numberOfElements(List* pRoot)
{
	return 0;
}

int main() {
    std::cout << "Hello from Jurek! My first issue";
    return 0;
}
