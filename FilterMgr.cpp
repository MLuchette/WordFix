// FilterMgr.cpp: implementation of the FilterMgr class.
//	Matthew Luchette CPSC 430
//////////////////////////////////////////////////////////////////////
#include "FilterMgr.h"

using namespace std;

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

FilterMgr::FilterMgr()
{

}

FilterMgr::~FilterMgr()
{

}

//////////////////////////////////////////////////////////////////////
// getChoices function definition. Returns a list of valid filters.
//////////////////////////////////////////////////////////////////////
std::string FilterMgr::getChoices()
{
	string choices = "\n\tuppercase\n\tlowercase\n\tencrypt\n";

	return choices;
}

//////////////////////////////////////////////////////////////////////
// selectFilter function definition. Returns a pointer to an IFilter
//////////////////////////////////////////////////////////////////////
IFilter* FilterMgr::selectFilter(string choice)
{
	IFilter * filter;

	if(choice == "uppercase")
	{
		filter = new FUppercase();		
	}
	else if(choice == "lowercase")
	{
		filter = new FLowercase();	
	}
	else if(choice == "encrypt")
	{
		filter = new FEncrypt();	
	}
	else if(choice == "q")
	{
		exit(1);
	}
	else
	{
		return NULL;
	}
	return filter;
}