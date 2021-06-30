#include"slodier.h"
#include<random>
#include<ctime> 
#include<vector>
soldier::soldier(string name,char tile,int level,int attack,int defense,int health,int army){
	_name=name;
	_tile=tile;
	_level=level;
	_attack=attack;
	_defense=defense;
	_health=health;
	_army=army;
	
} 
void soldier::setPosition(int x,int y){
	_x=x;
	_y=y;
}
void soldier::getPosition(int &x,int &y){
	x=_x;
	y=_y;
} 
int soldier::attack(){
	static default_random_engine RandomEngine(time(NULL)); 
	uniform_int_distribution<int>attackRoll(0,_attack);
	return attackRoll(RandomEngine); 
} 
int soldier::takeDamage(int attack){
	attack-=_defense;	
	if(attack>0){
		_health-=attack;
		if(_health<=0){
			return 0;
		}
	} return 1;
}  
soldier*soldier::getClosesEnemy(vector<soldier*>armies[],int numarmies){  
soldier*closesSoldier=NULL; 
int closestDistance=INT_MAX; 
int enemyx,enemyy;
int distanse;
for(int i=0;i<numarmies;i++){
	if(i!=_army){
		for(int j=0;j<armies[i].size();j++){
			armies[i][j]->getPosition(enemyx,enemyy); 
			distanse=abs(enemyx-_x)+abs(enemyy-_y); 
			if(distanse<closestDistance){
				closesSoldier=armies[i][j]; 
				closestDistance=distanse;
				
			}
			
		}
	}
}
     	return 	closesSoldier;
}
char soldier::getMove(vector<soldier*>armies[],int numarmies){
	
	soldier*closestSoldier=getClosesEnemy(armies,numarmies);
	if(closestSoldier==nullptr){
		return '.';
	}
	int soldierX,soldierY;
	closestSoldier->getPosition(soldierX,soldierY);
	
	int dx=_x-soldierX;
	int dy=_y-soldierY;
	int adx=abs(dx);
	int ady=abs(dy);
	if(adx>ady){
		if(dx>0){
			return 'a';
		    } 
		else return 'd';
	} else{
		if(dy>0){
			return 'w';
		}else 
		 return 's';
	} 
	}
	
 

