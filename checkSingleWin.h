namespace RPS{
	std::string checkSingleWin(char pl,char Comp){
		if (pl == Comp){
			return "Tie";
		}
		if (pl == 'R' && Comp == 'S'){
			return "player";
		}
		if (pl == 'S' && Comp == 'P'){
			return "player";
		}
		if (pl == 'P' && Comp == 'R'){
			return "player";
		}
		if (Comp == 'P' && pl == 'R'){
			return "computer";
		}
		if (Comp == 'S' && pl == 'P'){
			return "computer";
		}
		if (Comp == 'R' && pl == 'S'){
			return "computer";
		}
	}
}
