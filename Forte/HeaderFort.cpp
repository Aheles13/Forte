#include <iostream>
#include "HeaderFort.h"

void printPianoKeys() {
	std::cout << "Press the following keys to play the notes:\n";
	std::cout << "  ___  ___  ___  ___  ___  ___  ___  \n";
	std::cout << " |   ||   ||   ||   ||   ||   ||   | \n";
	std::cout << " |   ||   ||   ||   ||   ||   ||   | \n";
	std::cout << " |___||___||___||___||___||___||___|\n";

	std::cout << "  [Z]  [X]  [C]  [V]  [B]  [N]  [M] \n";

	std::cout << "Press [Esc] to exit\n";
	std::cout << "Press [Delete] to clear\n";
	std::cout << "Press [Space] to pause\n";
	std::cout << "Press [TAB] to menu\n";
}