/****************************************************************************
 * Fichier:			agent.h
 * Auteurs: 		Kevin Ciliento, Gabriel Tagliabracci et Roman Zhornytskiy
 * Date:			20 mars 2019
 * Description:		Definition de la classe Agent
 ****************************************************************************/
#ifndef AGENT_H
#define AGENT_H
#include "automate.h"

class Agent {

public:
	/*Constructor w/ Destructor*/
	Agent(bool inMaze=false):inMaze_(inMaze){};
	~Agent(void);

	/*Getters*/
	bool isInMaze() const { return inMaze_; };

	/*Setters*/
	void enterMaze();
	void openDoor(const std::string& fileName);
	void clearPath();

	/*Other*/
	void printEvent(); /// Opérateur ?
	void printBoss();
	void printBoss(std::vector<Door*>::iterator& it, std::vector<Door*>::iterator& last);
	void challengeBoss();
	void concatenateAutomate();


private:
	std::vector<Door*>path_;
	std::vector<Automate*> automates_;
	std::string password_; // Concatenated password
	std::vector<Door*> event_;
	bool inMaze_;
	
};

#endif // ! AGENT_H