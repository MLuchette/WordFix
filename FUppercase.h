// FUppercase.h: interface for the FUppercase class.
//
//////////////////////////////////////////////////////////////////////

#include "IFilter.h"
//#include "FilterMgr.h"

#if !defined FUPPERCASE_CLASS
#define FUPPERCASE_CLASS



class FUppercase : public IFilter
{
	public:
		FUppercase();
		virtual void execute(std::string);
		virtual ~FUppercase();

	private:
	

};

#endif // !defined FUPPERCASE_CLASS