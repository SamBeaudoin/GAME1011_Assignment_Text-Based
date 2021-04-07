#include "Room.h"

void Room::CreateRoom(char Direction, string Description)
{
	

	switch(Direction)
	{
	case 'N':
		if(North == nullptr)
		North = new Room(Description);
		break;
	case 'E':
		if (East == nullptr)
			East = new Room(Description);
		break;
	case 'S':
		if (South == nullptr)
			South = new Room(Description);
		break;
	case 'W':
		if (West == nullptr)
			West = new Room(Description);
		break;
	}
}


Room* Room::GetRoom(char Direction)
{
	switch (Direction)
	{
	case 'N':
		return North;
		break;
	case 'E':
		return East;
		break;
	case 'S':
		return South;
		break;
	case 'W':
		return West;
		break;
	}
}

string Room::GetDescription()
{
	//return description
	return;
}

void Room::SetDescription(string Description)
{
	//set description
}
