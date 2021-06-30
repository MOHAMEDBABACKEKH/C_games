#include"level.h" 
#include<fstream>   
#include<string> 
#include<iostream>
#include"player.h" 
//#include"player.cpp"  
#include<conio.h>
using namespace std;

Level::Level(){
		
}


void Level::load(string &filename,Player &player){  
//loadinggggg
		fstream file;
			file.open(filename.c_str());
				if(file.fail()){
					perror(filename.c_str());  
					system("PAUSE");
					exit(1);
				} 
				string line; 
				while(getline(file,line)){
					_levelData.push_back(line);
				}
	          file.close(); 
//palying  
    char tile;

   for(int i=0;i<_levelData.size();i++)
	{ 
	for(int j=0;j<_levelData[i].size();j++)
	{
      tile=_levelData[i][j];
      switch(tile){
      	case '@': 
      		player.setposition(j,i);
      		break;	
	  }

}
}
} 
void Level::print(){
	cout<<string(100,'\n');
	for(int i=0;i<_levelData.size();i++)
	{
		printf("%s\n",_levelData[i].c_str());
	} 
	printf("\n");		
} 
void Level::moveplayer(char input,Player &player)
{
	int playerx;
	int playery;
	player.getposition(playerx,playery); 
	char movetile;
	switch(input){
 			 //up
	 		  case 'W':
	 		  case 'w':
	 		  	// 
	 		  	processplaymove(player,playerx,playery-1);
				  	 
	 		   break; 
 			  //right
 			  case 'D':
 			  case 'd':	
			       processplaymove(player,playerx+1,playery);
 			    break; 
 			  //left
 			  case 'A':
 			  case 'a':processplaymove(player,playerx-1,playery);
 			   break; 
 			  //down 
 			  case 'S':
 			  case 's':processplaymove(player,playerx,playery+1);
 			   break; 
 			   default: 
 			   printf("INVALID MOVE ???\n");
 			   break; 
 			   system("PAUSE");
		 }
}

char Level::getTILE(int x,int y)
{
		return _levelData[y][x]; }
		
void Level::setTILE(int x ,int y,char tile)
{
	_levelData[y][x]=tile;
	}	
 
void Level::processplaymove(Player &player,int targetx,int targety)
{  

	int playerx;
	int playery;
	player.getposition(playerx,playery); 
char movetile=getTILE(targetx,targety);

switch(movetile){
		
//				   	case '#':
//				   		printf("you're ran into a wall");
//				   		system("PAUSE");
//				   		break;
				   	case '.':
				   		player.setposition( targetx,targety); 
				   		setTILE(playerx,playery,'.');
				   		setTILE(targetx,targety,'@');	
				   		break;
				   	
				   	
				   	
				   }
				   
		
}
