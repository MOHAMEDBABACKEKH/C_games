#include"level1.h" 
#include<fstream>  
#include<random>  
#include<string> 
#include<iostream> 
#include<conio.h>
using namespace std;

level::level(){}
level::~level(){
	for(int i=0;i<num_armies;i++){
		for(int j=0;j<num_armies;j++){
			delete _armies[i][j];
		}
	}
}

void level::load(string &fileName){  
//loadinggggg
		fstream file;
			file.open(fileName.c_str());
				if(file.fail()){
					perror(fileName.c_str());  
					system("PAUSE");
					exit(1);
				} 
				string line; 
				while(getline(file,line)){
					_levelData.push_back(line); 
					_soldierGrid.push_back(vector<soldier *>());
					_soldierGrid.back().resize(line.size(),nullptr);	
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
       case '1': 
       _armies[0].push_back(new soldier("team1",tile,1,10,5,10,0));
       _armies[0].back()->setPosition(j,i);
       _soldierGrid[i][j]=_armies[0].back();	
       
       	break;
       	case '0': 
       	   _armies[1].push_back(new soldier("team2",tile,1,10,5,10,1));
           _armies[1].back()->setPosition(j,i); 
           _soldierGrid[i][j]=_armies[1].back();
       		break;
       		case'#':
       	    case '.':
       	    break;	
       	    default: 	
       	    system("PAUSE");
       	    break;
	  }

}
} 
random_device::result_type seed=random_device()(); 
mt19937 randomEngine(seed); 
soldier*temp;
for(int i=0;i<num_armies;i++){
for(int j=_armies[i].size()-1;j>1;j--){ 
	  uniform_int_distribution<int> randomSwap(0,j-1);
	  int swap=randomSwap(randomEngine); 
	  temp=_armies[i][j];
	  _armies[i][j]=_armies[i][swap];
	  _armies[i][swap]=temp;
	  
		
	}
}

} 
void level::print(){
	cout<<string(50,'\n');
	for(int i=0;i<_levelData.size();i++)
	{
		printf("%s\n",_levelData[i].c_str());
	} 
	//printf("\n");		
} 

char level::getTile(int x,int y){
		return _levelData[y][x]; } 
		
 soldier *level::getSoldier(int x,int y){ 
 	      return _soldierGrid[y][x];
 	
 }
		
void level::setTile(int x ,int y,char tile,soldier *Soldier)
{
	_levelData[y][x]=tile; 
	_soldierGrid[y][x]=Soldier;	
	}	
void level::update(){ 
char move;
	int i=0; 
	bool isDone=false;
	while(!isDone){  
	    isDone=true;
	    for(int j=0;j<num_armies;j++){ 
	        if(i<_armies[j].size()){
		
	    move=_armies[j][i]->getMove(_armies,num_armies); 
		processSoldierMove(move,_armies[j][i]); 
			isDone=false;
			} 
		} 
		
		i++;
	}
} 
void level::processSoldierMove(char direction,soldier* Soldier){  
int x,y; 
int targetX,targetY;
Soldier->getPosition(x,y); 
switch(direction){
	case 'w': 
	 targetX=x;
	 targetY=y-1;
		break;
	case 'a': 
	 targetX=x-1;
	 targetY=y;
		break;		
    case 's': 
     targetX=x;
	 targetY=y+1;
    	break;
    case 'd':  
    	targetX=x+1;
	    targetY=y;
	break;	 
	case '.':
	return;
} 

  char targetTile=getTile(targetX,targetY);	
  switch(targetTile){
  	case '#':
  		break;
  	case '.': 
  	 moveSoldier(Soldier,targetX,targetY);
  		break; 
  	default: 
  	 battle(Soldier,targetX,targetY);
  	 break;
  	
  }

	
}  
void level::battle(soldier *Soldier,int targetX,int targetY){
	int x,y; 
	int enemyArmy;
	Soldier->getPosition(x,y);  
	soldier *targetSoldier=getSoldier(targetX,targetY); 
	if(targetSoldier==nullptr){
		return;}  
		enemyArmy=targetSoldier->getArmy();
		if(enemyArmy==Soldier->getArmy()){
			return;
		} 
		int result=targetSoldier->takeDamage(Soldier->attack());
		if (result==1){
			for(int i=0;i<_armies[enemyArmy].size();i++){
				if(_armies[enemyArmy][i]==targetSoldier){
						_armies[enemyArmy][i]=_armies[enemyArmy].back();
						_armies[enemyArmy].pop_back(); 
						delete targetSoldier;
						setTile(targetX,targetY,'.',nullptr);
						break;
				}
			}
		}
	}
	

void level::moveSoldier(soldier*soldier,int targetX,int targetY){
	int x,y;
	soldier->getPosition(x,y);
	setTile(x,y,'.',nullptr);
	setTile(targetX,targetY,soldier->GetTile(),soldier);
	soldier->setPosition(targetX,targetY);
	
}



