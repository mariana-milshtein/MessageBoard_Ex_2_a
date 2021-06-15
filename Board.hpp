#pragma once
#include <iostream>
#include "Direction.hpp"

namespace ariel {
    class Board {
        private:
            char** b;
            int min_row, min_col, row_size, col_size;
        public:
            Board();
            ~Board();
            void post(int,int,Direction,std::string);
            std::string read(int,int,Direction,int);
            void show();
    };
};