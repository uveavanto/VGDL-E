#pragma once

#include <string>
#include "SpriteSet.h"
#include "InteractionSet.h"
#include "TerminationSet.h"
#include <fstream>



class VGDLParser
{
public:

	VGDLParser(std::string fileName);
	~VGDLParser();

	std::string getPath();
	void setPath(std::string newPath);

	std::string getLevelPath();
	void setLevelPath(std::string newLevelPath);

	void writeSpriteSet(SpriteSet* ss);
	void writeSpriteAndChildren(Sprite* s);
	void writeTerminationSet(TerminationSet ts);
	void writeTermination(Termination t);
	void writeInteractionSet(InteractionSet is);
	void writeInteraction(Interaction i);
	//but.ly/2aL6GHd

	bool reloadFile(std::string filePath);
	bool writeVGDLScript(SpriteSet* spriteSet, InteractionSet interactionSet, TerminationSet terminationSet);
	bool createVGDLScript(SpriteSet* spriteSet, InteractionSet interactionSet, TerminationSet terminationSet);//creates a text file in the path indicated, and builds the VGDL script in it

private:
	std::string scriptPath;//holds the path to the VGDL script
	std::string levelScriptPath;//holds the path to the VGDL level script


};

