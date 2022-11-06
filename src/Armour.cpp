#include "Armour.h"

Armour::Armour(int value) : AddOn(value) {}

void Armour::takeDamage(int damage) {
	if (value > 0) {
		value -= damage;
	} else {
		entity->takeDamage(damage);
	}
}

void Armour::dealDamage(Entity* entity) {
	this->entity->dealDamage(entity);
}

AddOn* Armour::clone() {
	Armour* armour = new Armour(value);
	armour->setEntity(entity->clone());
	return armour;
}
