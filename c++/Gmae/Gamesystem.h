#pragma once  
#include"level.cpp" 
#include<string>
using namespace std;
 class 	Gamesystem{
 	
 	public: 
 	Gamesystem( string levelfile);
 	
 	void playGame(); 
	void playermove(); 
 	private :
 		
 		level _Level;
 		
 	
 };
