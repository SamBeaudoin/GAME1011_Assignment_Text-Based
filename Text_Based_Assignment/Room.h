#pragma once
#include <iostream>
#include <string> 
using namespace std;

class Room
{
	Room(string Description)
	{

	}
public:
	void CreateRoom(char Direction);
	Room* GetRoom(char Direction);
private:
	Room* North = nullptr;
	Room* East = nullptr;
	Room* South = nullptr;
	Room* West = nullptr;
};

