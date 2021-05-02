//
//  Board.cpp
//  Scrabble
//

#include "Board.h"
#include <algorithm>
#include <iostream>
#include <fstream>


Board::~Board()
{
}

PositionResult Board::setTile(Tile& tile, const BoardPosition& boardPos)
{
	return VALID_POSITION;
}


CurrentWordResult Board::checkCurrentWord(int& points) 
/* Comprova si la paraula actual que s�est� formant �s v�lida.
	1. Comprovar que totes les fitxes estan alineades horitzontalment o verticalment i que ocupen posicions consecutives (sense espais entre elles).
	2. Si �s la primera paraula que es posa al tauler ha d�ocupar la posici� central del tauler.
	3. Si no �s la primera paraula ha d�estar connectada a alguna altra paraula ja posada al tauler.
	4. Buscar totes les paraules que es puguin formar a partir de la connexi� de la paraula nova amb les que ja hi havia al tauler.
	5. Comprovar que tant la paraula nova com les que es formin per connexi� amb altres ja existents estiguin dins del diccionari de paraules v�lides.
	6. Calcular la puntuaci� total de totes les paraules que es formen i retornarla al par�metre points.
(Penseu b� com fer la implementaci� de totes les comprovacions. Segurament us far� falta afegir algun atribut m�s i tamb� algun m�tode que us ajudi
a fer algunes de les comprovacions necess�ries
*/
{
	
	return ALL_CORRECT;
}

void Board::sendCurrentWordToBoard()
{
}

void Board::removeCurrentWord()
{
}
