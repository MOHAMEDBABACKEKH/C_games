#include<iostream> 
#include"TicTacToegame.h" 
#include"TicTacToegame.cpp" 

using namespace std;

 int main(){ 
 	bool isDone=false;
 	char input;
	TicTacToegame game;
	while(!isDone){
	game.playgame()	;  
	cout<<"if you would play againe enter O and enter X for exit : ";
	cin>>input ;
	switch(input){
		case ' O':
		case 'o' : 	isDone=false; 
		break;
		case 'X':
			case 'x': isDone=true;
			break;
		 system("pause");  
		 default: 
		 system("pause"); 
			
	}
	}
	
	system("pause"); 
		return 0; 
} 
