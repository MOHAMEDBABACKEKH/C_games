#pragma once 
#include<vector>
#include<string>
#include"soldier.cpp"
using namespace std; 
const int num_armies=2;
class level{
	 	public:
	 		 level();
	 		 ~level();
	 	void load(string &fileName);
		void print(); 
		void update();
		char getTile(int x,int y);
		void setTile(int x,int y,char tile,soldier *Soldier); 
		soldier* getSoldier(int x,int y);
		private: 
		void processSoldierMove(char direction,soldier* Soldier); 
		void battle(soldier*Soldier,int targetX,int targetY);
		void moveSoldier(soldier*Soldier,int targetX,int targetY);
		vector<string>_levelData;
		vector <vector <soldier *> > _soldierGrid;
		vector<soldier *>_armies[num_armies];
			
	 };
