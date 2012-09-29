// FLowercase.h: interface for the FLowercase class.
//
//////////////////////////////////////////////////////////////////////

#include "IFilter.h"
//#include "FilterMgr.h"

#if !defined FLOWERCASE_CLASS
#define FLOWERCASE_CLASS



class FLowercase : public IFilter
{
	public:
		FLowercase();
		virtual void execute(std::string);
		virtual ~FLowercase();

	private:
	

};

#endif // !defined FLOWERCASE_CLASS