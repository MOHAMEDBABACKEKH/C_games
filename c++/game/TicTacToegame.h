//#ifndef TicTacToegame
//#define SOMETHING_H 
#pragma once

class TicTacToegame{ 
	public:
		TicTacToegame(); 
		void playgame();
	private:
		char board[3][3]; 
		void clearboard(); 
		void printboard(); 
		int  getX();
	    int  getY(); 
	    bool placemarker(int x,int y,char currentpalyer); 
	    bool checkforvectory(char currentpalyer);

		
};

//#endif

