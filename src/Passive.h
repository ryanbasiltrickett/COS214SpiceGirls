#ifndef PASSIVE_H
#define PASSIVE_H
#include "Strategy.h"
#include "KeyPoint.h"

class Passive : public Strategy {

public:
	Passive();

	/**
	 * 
	 * @brief This function will perform a Passive strategy
	 * 
	 * @param keyPoint a Passive strategy will then be performed at this specific keypoint
	 * 
	 * @return void The function will return void
	 */
	void performStrat(KeyPoint* keyPoint, Alliance* alliance);

	/**
	 * @brief Returns the clone of the Passive Strategy object
	 * 
	 * @return Strategy* The clone of the Passive Strategy object
	 */
	Strategy* clone();
};

#endif
