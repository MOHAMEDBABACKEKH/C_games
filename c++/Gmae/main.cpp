#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string>
#include<conio.h>
#include"Gamesystem.cpp"

using namespace std;
main(){
	fstream file;
	file.open("level1");
	Gamesystem game("level1.txt");
		game.playGame();


	}

