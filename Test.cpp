#include "doctest.h"
#include "Board.hpp"
#include "Direction.hpp"

using namespace ariel;
#include <string>
#include <algorithm>
using namespace std;


TEST_CASE("Board") {
    Board board;
    board.post(0,0,Direction::Horizontal,"");
    CHECK(board.read(0,0,Direction::Horizontal,1) == "_");
    CHECK(board.read(0,0,Direction::Horizontal,1) == "_");
    CHECK(board.read(0,0,Direction::Horizontal,1) == "_");
    CHECK(board.read(0,0,Direction::Horizontal,1) == "_");
    CHECK(board.read(0,0,Direction::Horizontal,1) == "_");
    CHECK(board.read(0,0,Direction::Horizontal,1) == "_");
    CHECK(board.read(0,0,Direction::Horizontal,1) == "_");
    CHECK(board.read(0,0,Direction::Horizontal,1) == "_");
    CHECK(board.read(0,0,Direction::Horizontal,1) == "_");
    CHECK(board.read(0,0,Direction::Horizontal,1) == "_");
    CHECK(board.read(0,0,Direction::Horizontal,1) == "_");
    CHECK(board.read(0,0,Direction::Horizontal,1) == "_");
    CHECK(board.read(0,0,Direction::Horizontal,1) == "_");
    CHECK(board.read(0,0,Direction::Horizontal,1) == "_");
    CHECK(board.read(0,0,Direction::Horizontal,1) == "_");
    CHECK(board.read(0,0,Direction::Horizontal,1) == "_");
    CHECK(board.read(0,0,Direction::Horizontal,1) == "_");
    CHECK(board.read(0,0,Direction::Horizontal,1) == "_");
    CHECK(board.read(0,0,Direction::Horizontal,1) == "_");
    CHECK(board.read(0,0,Direction::Horizontal,1) == "_");
}
