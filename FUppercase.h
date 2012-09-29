// FUppercase.h: interface for the FUppercase class.
//	Matthew Luchette CPSC 430
//////////////////////////////////////////////////////////////////////
#include "IFilter.h"

#if !defined FUPPERCASE_CLASS
#define FUPPERCASE_CLASS

class FUppercase : public IFilter
{
	public:
		//Implements interface IFilter.
		virtual void execute(std::string);
		FUppercase();
		virtual ~FUppercase();
};

#endif // !defined FUPPERCASE_CLASS