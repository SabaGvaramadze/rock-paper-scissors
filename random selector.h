#include <ctime>
#include <random>

namespace RPS{
	std::string randomPick(){
		std::string arr[]={"Rock","Paper","Scissors"};
		srand(time(NULL));
		return arr[rand()%3];
	}
}
