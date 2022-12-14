#ifndef AQUATICTYPE_H
#define AQUATICTYPE_H

#include "Type.h"

/**
 * @brief AquaticType class
 * 
 * Used to define Entity objects as aquatic type.
 */
class AquaticType : public Type {

public:
	/**
	 * @brief Instantiates the aquatic type
	 */
	AquaticType();

	/**
	 * @brief Returns aquatic type description
	 *
	 * Postconditions:
	 *  - Returns the aquatic type
	 *
	 * @return string The aquatic type string
	 */
	string getTypeDesc();

	/**
	 * @brief returns the the cloned object of Type
	 * 
	 * PostConditions:
	 * - returns Type* type
	 * 
	 * @return Type* The cloned Type object
	 */
	Type* clone();
};

#endif
