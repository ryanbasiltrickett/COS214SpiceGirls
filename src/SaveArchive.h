#ifndef SAVEARCHIVE_H
#define SAVEARCHIVE_H
#include <vector>
#include "WarEngineMemento.h"

class SaveArchive {

private:
	vector<WarEngineMemento*> saveList;

public:
	SaveArchive();

	void addNewSave(WarEngineMemento* newSave);

	WarEngineMemento* getLastSave();

	void getSave(string timestamp);

	boolean clearSaveList();

	boolean deleteSave(string timestamp);
};

#endif