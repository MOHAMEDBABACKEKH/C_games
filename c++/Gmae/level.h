//#ifndef Gamesystem
//#define SOMETHING_H  
#pragma once
#include<vector>
#include<string> 
//#include"player.cpp"
 using namespace std;

class Level{
	
	public: 
			 Level(); 
		void load(string &filename,Player &player); 
		void print(); 
		void moveplayer(char input,Player &player);	 
		char getTILE(int x,int y); 
		void setTILE(int x ,int y,char tile); 
	private:
        void  processplaymove(Player &player,int targetx,int targety);
	private: 
			vector<string>_levelData; 
				
		
};



