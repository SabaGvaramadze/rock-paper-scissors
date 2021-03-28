#include "random selector.h"
#include "checkSingleWin.h"
#include "wincheck.h"
#include <conio.h>

namespace RPS{
	void game(){
		std::string playerChoice;
		std::string ComputerChoice;
		std::string arr[]={"","Rock","Paper","Scissors"};
		while(true){
			system("cls");
			std::cout << "Player Chose: " << playerChoice << "\n"<< "The Computer Chose: " << ComputerChoice<<"\n";
			std::cout << "Please Choose:\n  Rock - 1\n  Paper - 2\n  Scissors - 3\n";
			std::cout << "Player: " << Player << "\nComputer: " << Computer << "\n";
			
			char playerChoiceNum = getch();
			if (playerChoiceNum-'0' >3 || playerChoiceNum <1){
				while(true){
					playerChoiceNum = getch();
					if(playerChoiceNum-'0' > 0 && playerChoiceNum-'0' < 4){
						break;
					}
				}
			}
			playerChoice = arr[playerChoiceNum-'0'];
			ComputerChoice = randomPick();
			if (checkSingleWin(playerChoice[0],ComputerChoice[0]) == "player"){
				Player++;
			}
			else if(checkSingleWin(playerChoice[0],ComputerChoice[0]) == "Tie"){}
			else {
				Computer++;
			}
			if (checkWin() == 'p'){
				Winner = "Player";
				break;
			}
			else if(checkWin() == 'c'){
				Winner = "Computer";
				break;
			}
		}
	}
}
