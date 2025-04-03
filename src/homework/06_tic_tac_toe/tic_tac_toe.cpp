//cpp
#include "tic_tac_toe.h"

using std::cout

bool TicTacToe::game_over() {
    // Check for row win
    for (int row = 0; row < 3; ++row) {
        if (board[row][0] != ' ' && board[row][0] == board[row][1] && board[row][1] == board[row][2]) {
            set_winner(board[row][0]); // Call set_winner function with winner symbol
            return true;
        }
    }

    // Check for column win
    for (int col = 0; col < 3; ++col) {
        if (board[0][col] != ' ' && board[0][col] == board[1][col] && board[1][col] == board[2][col]) {
            set_winner(board[0][col]); // Call set_winner function with winner symbol
            return true;
        }
    }

    // Check for diagonal win
    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        set_winner(board[0][0]); // Call set_winner function with winner symbol
        return true;
    }

    if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        set_winner(board[0][2]); // Call set_winner function with winner symbol
        return true;
    }

    // Check for a tie (board full)
    if (check_board_full()) {
        set_winner('C'); // Indicate a tie with 'C'
        return true;
    }

    // No winner and board not full
    return false;
}


void TicTacToe::start_game(std::string first_player) {
    if (first_player == "X" || first_player == "O") {
        player = first_player; // Set private variable to first_player
    } else {
        player = "X"; // Default to 'X' if input is invalid
        std::cout << "Invalid player. Defaulting to 'X'.\n";
    }
    clear_board(); // Clear the board for a new game
}


void TicTacToe::mark_board(int position) {
    pegs[position - 1] = player; // Set the vector element at (position - 1) to the current player
    set_next_player(); // Call the private function to switch players
}


void TicTacToe::display_board() const {
    for (size_t i = 0; i < pegs.size(); i += 3) {
        std::cout << pegs[i] << " | " << pegs[i + 1] << " | " << pegs[i + 2] << "\n";
        if (i < 6) { // Add a separator after the first and second rows
            std::cout << "---------\n";
        }
    }
}


//private functions
bool TicTactToe::check_board_full()
{
    for(long unsigned int i=0; i< pegs.size(); i++)
    {
        if(pegs[i]==" ")
        {
          return  false;
        }
    }
    return true;
}

void TicTacToe::clear_board();
{
    for (auto& peg: pegs)
    {
        peg = " ";
    }
}

void TicTacToe::set_next_player ()
{
    if(player == "X")
    {
        player = "O";
    }
    else 
    {
        player = "X";
    }
}
