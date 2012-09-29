// FLowercase.h: interface for the FLowercase class.
//	Matthew Luchette CPSC 430
//////////////////////////////////////////////////////////////////////
#include "IFilter.h"

#if !defined FLOWERCASE_CLASS
#define FLOWERCASE_CLASS

class FLowercase : public IFilter
{
	public:
		//Implements interface IFilter.
		virtual void execute(std::string);
		FLowercase();
		virtual ~FLowercase();
};

#endif // !defined FLOWERCASE_CLASS