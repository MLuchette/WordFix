// FilterMgr.h: interface for the FilterMgr class.
//
//////////////////////////////////////////////////////////////////////

#include "IFilter.h"
#include "FEncrypt.h"
#include "FUppercase.h"
#include "FLowercase.h"

#if !defined FILTERMGR_CLASS
#define FILTERMGR_CLASS



class FilterMgr : public IFilter
{
	public:
		FilterMgr();
		//void execute(std::string);
		std::string getChoices();
		IFilter* selectFilter(std::string);
		~FilterMgr();

	private:
	

};

#endif // !defined FILTERMGR_CLASS