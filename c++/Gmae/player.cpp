#include<iostream>
#include"player.h" 
using namespace std;

//player::player(){
//	
Player::Player(){ 
}
 



void Player::init(int level ,int health,int attack ,int defence,int experience)
{
	
	
	       _level=level;
 	       _health=health;
 	  	   _attack=attack;
 	  	   _defence=defence;
 	  	  _experience=experience;
} 


void Player::setposition(int x,int y)
{
		_x=x;
		_y=y;
		
} 
void Player::getposition(int &x,int &y)
{ 
   x=_x;
	y=_y;
}
