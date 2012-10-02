// IFilter.h: interface for the FilterMgr class.
//	Matthew Luchette CPSC 430
//////////////////////////////////////////////////////////////////////
#include <string>
#include <iostream>

#if !defined IFILTER_CLASS
#define IFILTER_CLASS

class IFilter  
{
	public:
		//Has method execute, which takes a string argument and returns nothing.
		virtual void execute(std::string) = 0;
		virtual ~IFilter() { };
};

#endif // !defined IFILTER_CLASS
