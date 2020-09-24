// Class - Session 3.cpp //

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    //new code using vectors//
    
    const int size = 10;
    int my_array[size] = {};

    std::vector <char> board = { '1','2','3','4','5','6','7','8','9' };
 
        for (int i = 0; i < board.size(); i++) { //i should use the size of the board instead of a value//
            if (i % 3 == 0) {
                std::cout << "\n-------------\n| ";
            }
            std::cout << board[i] << " | ";
        }
        std::cout << "\n-------------";


        return 0;
}




//Notes and old code written during the class//

        //old code//
        //const int size = 10;
        //int my_array[size] = {};

        //char board[9] = { '1','2','3','4','5','6','7','8','9' };
        //std::cout << sizeof(board) / sizeof(board[0]);

        //int board2[22] = {};
        //std::cout << sizeof(board2) / sizeof(board2[0]);
        //std::cout << "Count of :" << _countof(board2);

        //for (int i = 0; i < sizeof(board) / sizeof(board[0]); i++) { //i should use the size of the board instead//
        //    if (i % 3 == 0) {
        //        std::cout << "\n\n";
        //    }
        //    std::cout << board[i];
        //    std::cout << "\t ";
        //

//char board[9]; {'1','2','3','4','5','6','7','8','9'}  --> Written on blackboard in class
//double num [100] = {} --> Written on blackboard in class

//This is bad practice for an array, better solution is above//
   //for (int i = 0; i < 9; i++) {
    //    if (i % 3 == 0) {
    //        std::cout << "\n\n";
    //    }
    //    std::cout << board[i];
    //    std::cout << "\t ";
    //}

//
//#include <iostream>
//#include <vector>
//
//int main()
//{
//    /*std::vector <int> numbers;
//    std::vector <char> ;*/
//
//
//    std::vector <char> board = { '1','2','3','4' };
//    std::cout << board.at(2) << std::endl;


