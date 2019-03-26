/****************************************************************************
 * Fichier:			agent.h
 * Auteurs: 		Kevin Ciliento, Gabriel Tagliabracci et Roman Zhornytskiy
 * Date:			20 mars 2019
 * Description:		Definition de la classe Agent
 ****************************************************************************/
#ifndef AGENT_H
#define AGENT
#include "automate.h"

class Agent {

public:
	Agent(void);
	~Agent(void);

	void openDoor(const std::string& fileName);
	Automate * generateAutomate(const std::vector<std::string>& rule);

	void clearPath();


private:
	std::map<Door*, Automate*> path_;
	Password password_; // Concatenated password
	std::vector<Door*> event_;
};

#endif // ! AGENT_H