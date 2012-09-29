// FEncrypt.cpp: implementation of the FEncrypt class.
//
//////////////////////////////////////////////////////////////////////


#include <iostream>
#include "FEncrypt.h"


using namespace std;

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

FEncrypt::FEncrypt()
{

}

FEncrypt::~FEncrypt()
{

}

void FEncrypt::execute(string word)
{
	for(unsigned i = 0; i< word.size(); i++)
	{
		word.replace(i, 1, 1, toupper(word[i]));
	}
}

