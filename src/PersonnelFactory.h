#ifndef PERSONNELFACTORY_H
#define PERSONNELFACTORY_H

#include "Factory.h"

/**
 * @brief PersonnelFactory class
 * 
 * Used to instantiate Personnel objects.
 */
class PersonnelFactory : Factory {

public:
	/**
	 * @brief Instantiates the Personnel factory
	 */
	PersonnelFactory(Type* type, AddOn* addOns);

	/**
	 * @brief Instantiates and returns a Personnel for the given alliance
	 *
	 * Preconditions:
	 *  - alliance must be an Alliance*
	 *
	 * Postconditions:
	 *  - Returns the instantiated Personnel object with specific state
	 *
	 * @param alliance must be a Alliance*
	 * @return Entity* The instatiated personnel
	 */
	Entity* createEntity(Alliance* alliance);

	/**
	 * @brief Instantiates and returns a clone of the current Personnel factory
	 *
	 * Postconditions:
	 *  - Returns the clone of the current Personnel factory
	 *
	 * @return Factory* The Personnel factory clone
	 */
	Factory* clone();
};

#endif
