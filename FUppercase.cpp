// FUppercase.cpp: implementation of the FUppercase class.
//
//////////////////////////////////////////////////////////////////////


#include <iostream>
#include "FUppercase.h"


using namespace std;

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

FUppercase::FUppercase()
{

}

FUppercase::~FUppercase()
{

}

void FUppercase::execute(string word)
{
	for(unsigned i = 0; i< word.size(); i++)
	{
		word.replace(i, 1, 1, toupper(word[i]));
	}
}

