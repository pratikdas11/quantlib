
/* 
Copyright (C) 2000 Ferdinando Ametrano, Luigi Ballabio, Adolfo Benin, Marco Marchioro
See the file LICENSE.TXT for information on usage and distribution
Contact ferdinando@ametrano.net if LICENSE.TXT was not distributed with this file
*/

#ifndef quantlib_GBP_h
#define quantlib_GBP_h

#include "qldefines.h"
#include "currency.h"
#include "london.h"

namespace QuantLib {

	namespace Currencies {
	
		class GBP : public Currency {
		  public:
			GBP() {}
			std::string name() const { return std::string("GBP"); }
			Handle<Calendar> settlementCalendar() const { 
				return Handle<Calendar>(new Calendars::London); }
			int settlementDays() const { return 0; }
		};
	
	}

}


#endif
