#pragma once

// IMPORT LIBRARIES
#include <iostream>
#include <string>
#include <vector>
#include <exception>

// CODE SHORTCUTS
using std::cout;
using std::endl;
using std::string;
using std::vector;

// BOARD CONSTANTS
#define INIT_BOARD "rnbqkbnrppppppp##################################PPPPPPPRNBQKBNR0"
#define ROWS 8
#define COLS 8

// PIECE CONSTANTS
#define WHITE_PAWN 'P'
#define BLACK_PAWN 'p'

#define WHITE_ROOK 'R'
#define BLACK_ROOK 'r'

#define WHITE_KNIGHT 'N'
#define BLACK_KNIGHT 'n'

#define WHITE_BISHOP 'B'
#define BLACK_BISHOP 'b'

#define WHITE_QUEEN 'Q'
#define BLACK_QUEEN 'q'

#define WHITE_KING 'K'
#define BLACK_KING 'k'

class Game : public std::exception
{
public:
    // Exceptions.
    virtual string valid() const;        // 0
    virtual string inCheck() const;      // 1
    virtual string emptyTile() const;    // 2
    virtual string occupiedTile() const; // 3
    virtual string piecePinned() const;  // 4
    virtual string invalidIndex() const; // 5
    virtual string invalidPath() const;  // 6
    virtual string sameTile() const;     // 7
    virtual string checkmate() const;    // 8
};