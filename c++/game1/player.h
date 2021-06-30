#pragma once  
using namespace std;


 
class Player {
 	public: 
	   Player(); 
 	  void init(int level ,int health,int attack ,int defence,int experience);
 	  
 	  
 	  void setposition(int x,int y);
 	  
 	  void getposition(int &x,int &y);
 	  	
 	  	
 	  	private: 
 	  	int _level;
 	  	int _health;
 	  	int _attack;
 	  	int _defence;
 	  	int _experience;
 	  	 
 	  	 
 	  	 
 	  	 int _x;
 	  	 int _y;
 }; 

