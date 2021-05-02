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
/* Comprova si la paraula actual que s’està formant és vàlida.
	1. Comprovar que totes les fitxes estan alineades horitzontalment o verticalment i que ocupen posicions consecutives (sense espais entre elles).
	2. Si és la primera paraula que es posa al tauler ha d’ocupar la posició central del tauler.
	3. Si no és la primera paraula ha d’estar connectada a alguna altra paraula ja posada al tauler.
	4. Buscar totes les paraules que es puguin formar a partir de la connexió de la paraula nova amb les que ja hi havia al tauler.
	5. Comprovar que tant la paraula nova com les que es formin per connexió amb altres ja existents estiguin dins del diccionari de paraules vàlides.
	6. Calcular la puntuació total de totes les paraules que es formen i retornarla al paràmetre points.
(Penseu bé com fer la implementació de totes les comprovacions. Segurament us farà falta afegir algun atribut més i també algun mètode que us ajudi
a fer algunes de les comprovacions necessàries
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
