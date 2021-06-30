#pragma once  
#include"player.cpp" 
#include"level.cpp" 
#include<string>
using namespace std;
 class 	Gamesystem{
 	
 	public: 
 	Gamesystem( string levelfile);
 	
 	void playGame(); 
	void playermove(); 
 	
 	
 	
 	
 	private :
 		Player _player; 
 		Level _Level;
 		
 	
 };
