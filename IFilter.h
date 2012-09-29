// IFilter.h: interface for the FilterMgr class.
//
//////////////////////////////////////////////////////////////////////
#include <string>
#include <iostream>


#if !defined IFILTER_CLASS
#define IFILTER_CLASS



class IFilter  
{
	public:
		virtual void execute(std::string) = 0;
		virtual ~IFilter();

	private:
	

};

#endif // !defined IFILTER_CLASS
