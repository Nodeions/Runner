#include <iostream>
#include <string>
#include "Manager.h"
#include "Print.h"

/* --------------- Pense très bête ------------------ */

//Attention, zone de jeu et cam = evite de supprimer la map quand map sort de la cam
//use random(1,2) pour test le défilement
/*attention pour la fonction de defilement vertical, commencer par l'index le plus
haut (donc en bas)*/
//Passer un mode objet le manager
//Bruit de Perlin

using namespace std;

void LaunchGame()
{
	srand(time(NULL));
	Grid gridGame(11, 9);

	gridGame.CreateGrid();
	gridGame.StartPrintGrid();
	//gridGame.PrintGrid();
}


