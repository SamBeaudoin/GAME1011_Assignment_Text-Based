#include "Room.h"

void Room::CreateRoom(char Direction)
{
	

	switch(Direction)
	{
	case 'N':
		if(North == nullptr)
		North = new Room();
		break;
	case 'E':
		if (East == nullptr)
			East = new Room();
		break;
	case 'S':
		if (South == nullptr)
			South = new Room();
		break;
	case 'W':
		if (West == nullptr)
			West = new Room();
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