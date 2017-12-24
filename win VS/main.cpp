//#include <iostream>
#include <string.h>
#include <stdlib.h>
//#include <unordered_map>
//using namespace std;

#include "MemLeakDetector.h"
//#include <memory>

void func()
{
	char* pp = new char;	
	//char* pp = (char*)malloc(sizeof(char));
	//std::shared_ptr<char> pa(pp);	
}

int main()
{
	//X::MemLeakDetector::SetBreakAlloc(75);
	func();	
	
	return 0;
}