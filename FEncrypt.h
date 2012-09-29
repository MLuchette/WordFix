// FEncrypt.h: interface for the FEncrypt class.
//	Matthew Luchette CPSC 430
//////////////////////////////////////////////////////////////////////
#include "IFilter.h"

#if !defined FENCRYPT_CLASS
#define FENCRYPT_CLASS

class FEncrypt : public IFilter
{
	public:
		//Implements interface IFilter.
		virtual void execute(std::string);
		FEncrypt();
		virtual ~FEncrypt();
};

#endif // !defined FENCRYPT_CLASS