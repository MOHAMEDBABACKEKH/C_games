#include"TicTacToegame.h" 
#include<iostream>
using namespace std;

TicTacToegame::TicTacToegame(){
	clearboard();
} 
void TicTacToegame::clearboard(){
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++){
			board[i][j]=' ';
		}

} 
void  TicTacToegame::printboard(){ 
cout<<endl;
cout<<"  | 1 |      | 2 |      | 3 |"<<endl; 
for(int i=0;i<3;i++){ 
cout <<" ----------------------\n";
	cout<<i+1<<" |  "<<board[i][0]<<"|      |"<<board[i][1]<<"  |      | "<<board[i][2]<<" |\n" ;
}
	cout <<" ----------------------\n";

} ;
int TicTacToegame::getX(){ 
    bool isinputbad=true;
	int x; 
	while(isinputbad){
	cout<<"enter the x coord : ";
	cin>>x; 
	if(x<1|| x>3){
		cout<<"invalid coord!!"<<endl;
	} 
	else isinputbad=false;
	}
	return x-1; 
	
}  
int TicTacToegame::getY(){
		bool isinputbad=true;
		int y; 
		while(isinputbad){
		cout<<"enter the y coord : ";
		cin>>y; 
		if(y<1|| y>3){
			cout<<"invalid coord!!"<<endl;
		} 
		else isinputbad=false;
		}
		return y-1; 
}  
bool TicTacToegame::placemarker(int x,int y,char currentpalyer){
	if(board[x][y]!=' ')
	return false; 
    board[x][y]=currentpalyer; 
	return true;	
} 
bool TicTacToegame::checkforvectory(char currentplayer){
for(int i=0;i<3;i++){
	if( (board[i][0]== currentplayer)&&(board[i][0]==board[i][1])&& (board[i][1]==board[i][2])){
		return true;
	}
} 
for(int i=0;i<3;i++){
	if((board[0][i]== currentplayer)&& (board[0][i]==board[1][i])&& (board[1][i]==board[2][i])){
		return true;
	}
} 
	if( (board[0][0]== currentplayer)&&(board[0][0]==board[1][1])&& (board[1][1]==board[2][2])){
		return true;
	} 
		if( (board[2][0]== currentplayer)&&(board[0][2]==board[1][1])&& (board[1][1]==board[2][0])){
		return true;
	}
	 return false;
		
}

void  TicTacToegame::playgame(){  
 	int  cpt=0;
	char player1='X';
	char player2='O';
	char Currentpalyer='X';
	bool isDone=false; 
	clearboard();
	while(isDone==false){ 
	
		printboard();  
	
		int x,y;
	    
		x=getX();
		
		y=getY();  
		if(placemarker(x,y,Currentpalyer)==false){
			cout<<"incorrect move"<<endl;
		} 
		else{  
		cpt++; 
		if(checkforvectory(Currentpalyer)){
			cout<<"the player "<<Currentpalyer<<" won$$$$$$$$"<<endl; 
			isDone=true;
		} 
		else if( cpt==9){
			cout <<"the game id ended "<<endl;
			isDone=true;
		}
		
		//switch    
		if(Currentpalyer==player1){
			Currentpalyer=player2;
		} 
		else 
		Currentpalyer=player1;
			
	    }
	}
	
}
