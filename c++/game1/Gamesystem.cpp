#include"Gamesystem.h" 
//include"player.cpp" 
//#include"player.h"
//#include"level.cpp"
//#include"level.h"  
#include<iostream> 
#include<conio.h>


Gamesystem::Gamesystem(string levelfile ){  
_player.init(1,100,10,10,0);
_Level.load(levelfile,_player);

system("PAUSE");
	
} 
void Gamesystem::playGame(){ 
bool isDone=false;	
while(isDone!=true){
	_Level.print(); 
	playermove();
}
	
} 
 void Gamesystem::playermove(){ 
      char input;
 		cout<<"enter a move command (w/A/S/D)"<<endl; 
 		input =_getch(); 
 		_Level.moveplayer(input ,_player);
 }

