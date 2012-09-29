// FEncrypt.h: interface for the FEncrypt class.
//
//////////////////////////////////////////////////////////////////////

#include "IFilter.h"
//#include "FilterMgr.h"

#if !defined FENCRYPT_CLASS
#define FENCRYPT_CLASS


class FEncrypt : public IFilter
{
	public:
		FEncrypt();
		virtual void execute(std::string);
		virtual ~FEncrypt();

	private:
	

};

#endif // !defined FENCRYPT_CLASS