#include <iostream>
#include <conio.h>
#include "gameInfo.h"
#include "game.h">
using namespace std;
using namespace RPS;

int main (){
	while(true){
		cout << ":Please Choose The GameMode:\n1:First To 3 \n2:Best Of 3\n3:First To X\n4:Best Of X\n";
		char get = getch();
			Computer=0;
			Player=0;
		if (get == '1'){
			CheckWin = 3;
		}
		if (get == '2'){
			CheckWin = 2;
		}
		if (get == '3'){
			int number;
			cout << "Please Enter The Number:";
			cin >> number;
			CheckWin = number;
		}
		if (get == '4'){
			int number;
			cout << "Please Enter The Number:";
			cin >> number;
			CheckWin = number/2+1;
		}
		game();
		system("cls");
		cout << "!!!The " << Winner << " Has Won!!!\n";
	}
}
