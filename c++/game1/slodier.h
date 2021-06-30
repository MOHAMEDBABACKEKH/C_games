#pragma once 
#include<string> 
#include<vector>
using namespace std;	
class soldier{
		public: 
	     soldier(string name,char tile,int level,int attack,int defense,int health,int army);
	     
	    void setPosition(int x,int y);
	    void getPosition(int &x,int &y);
	    string getName(){return _name;}
	    char GetTile(){return _tile;}
	    int getArmy(){return _army;
		}
	    int attack();
	    int takeDamage(int attack);
	    char getMove(vector<soldier *>armies[],int numarmies);
	    private:  
		soldier *getClosesEnemy(vector<soldier *>armies[],int numarmies) ;
	    string _name;
	    char _tile;
	    int _level;
	    int _attack;
	    int _defense; 
	    int _health;
	    int _army;
	    int _x;
	    int _y;	
};


