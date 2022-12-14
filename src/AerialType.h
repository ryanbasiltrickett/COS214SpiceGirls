#ifndef AERIALTYPE_H
#define AERIALTYPE_H

#include "Type.h"

/**
 * @brief AerialType class
 * 
 * Used to define Entity objects as ariel type.
 */
class AerialType : public Type {

public:
	/**
	 * @brief Instantiates the ariel type
	 */
	AerialType();

	/**
	 * @brief Returns ariel type description
	 *
	 * Postconditions:
	 *  - Returns the ariel type
	 *
	 * @return string The ariel type string
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
