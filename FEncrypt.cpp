// FEncrypt.cpp: implementation of the FEncrypt class.
//	Matthew Luchette CPSC 430
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

//////////////////////////////////////////////////////////////////////
// IFilter's execute function definition for Encrypt Filter
//////////////////////////////////////////////////////////////////////
void FEncrypt::execute(string word)
{
	for(unsigned i = 0; i< word.size(); i++)
	{
		if(word[i] == 'a' || word[i] == 'A')
			word[i] = '9';
		else if(word[i] == 'e' || word[i] == 'E')
			word[i] = '8';
		else if(word[i] == 'i' || word[i] == 'I')
			word[i] = '1';
		else if(word[i] == 'o' || word[i] == 'O')
			word[i] = '0';
		else if(word[i] == 'u' || word[i] == 'U')
			word[i] = '2';
		else
			word[i] = word[i];
	}
	cout << word;
}