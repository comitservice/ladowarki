#ifndef STARTINFOSTRATEGY_H_
#define STARTINFOSTRATEGY_H_


#include "Strategy.h"

class StartInfoStrategy : public Strategy {
public:
	uint8_t ok;
	StartInfoStrategy(){};
	virtual void powerOn();
	virtual statusType doStrategy();
	virtual void powerOff();
};

extern StartInfoStrategy startInfoStrategy;

#endif /* STARTINFOSTRATEGY_H_ */
