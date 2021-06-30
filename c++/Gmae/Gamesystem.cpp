#include"Gamesystem.h"  
#include<iostream> 
#include<conio.h>


Gamesystem::Gamesystem(string levelfile ){  
  _Level.load(levelfile);

system("PAUSE");
	
} 
void Gamesystem::playGame(){ 
bool isDone=false;	
while(true){ 
	_Level.print();
	_Level.update(); 
   _getch();

}
		
} 
 void Gamesystem::playermove(){ 
      char input;
 		cout<<"enter a move command (w/A/S/D)"<<endl; 
 		input =_getch(); 
 }

