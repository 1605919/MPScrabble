//
//  Tile.hpp
//  Scrabble
//

#ifndef Tile_hpp
#define Tile_hpp


class Tile
{
public:
    Tile() : m_letter(0), m_score(0) {}
    Tile(char let, int score);
    ~Tile();
    int     getLetter() const { return m_letter; }
    int     getScore() const { return m_score; }
private:
    char m_letter;
    unsigned int m_score;
};


#endif /* Tile_hpp */
