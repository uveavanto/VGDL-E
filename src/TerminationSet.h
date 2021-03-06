#pragma once

#include <string>
#include "Termination.h"

class TerminationSet
{
public:
	TerminationSet();
	TerminationSet(std::vector<Termination> newTerminationList);
	~TerminationSet();

	std::vector<Termination> getTerminationList();
	void setTerminationList(std::vector<Termination> newTerminationList);
	void addTermination(Termination newTermination);

	bool deleteTermination(Termination deletedTermination);
	bool deleteTermination(int index);//delete termination based on the index of the termination in the list

	//puts newTermination in terminationList at position index
	void modifyTermination(Termination newTermination, int index);

private:
	std::vector<Termination> terminationList;



};

