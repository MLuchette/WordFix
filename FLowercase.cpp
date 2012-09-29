// FLowercase.cpp: implementation of the FLowercase class.
//
//////////////////////////////////////////////////////////////////////


#include <iostream>
#include "FLowercase.h"


using namespace std;

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

FLowercase::FLowercase()
{

}

FLowercase::~FLowercase()
{

}

void FLowercase::execute(string word)
{
	for(unsigned i = 0; i< word.size(); i++)
	{
		word.replace(i, 1, 1, tolower(word[i]));
	}
}

