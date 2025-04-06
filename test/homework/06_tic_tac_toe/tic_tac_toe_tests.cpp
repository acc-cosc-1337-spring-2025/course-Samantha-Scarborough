#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include <iostream>
using namespace std;


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE ("Test if the board is full")
{
	TicTacToe game;

	game.mark_board(1);
	REQUIRE (game.game_over ()== false);
	game.mark_board(2);
	REQUIRE (game.game_over ()== false);
	game.mark_board(3);
	REQUIRE (game.game_over ()== false);
	game.mark_board(4);
	REQUIRE (game.game_over ()== false);
	game.mark_board(5);
	REQUIRE (game.game_over ()== false);
	game.mark_board(7);
	REQUIRE (game.game_over ()== false);
	game.mark_board(6);
	REQUIRE (game.game_over ()== false);
	game.mark_board(9);
	REQUIRE (game.game_over ()== false);
	game.mark_board(8);
	REQUIRE (game.game_over ()== false);

	REQUIRE (game.game_over ()== true);
}

class TicTacToe {
	private:
		char player;
		char winner = ' ';
		char board[9];
		int moves = 0;

		
		void set_winner() {
			// Very simplified tie logic for demonstration
			if (moves == 9 && winner == ' ') {
				winner = 'C'; // Cat's game (tie)
			}
		}
	public:


	TicTacToe() {
        for (int i = 0; i < 9; ++i) {
            board[i] = ' ';
        }
    }

	
    void start_game(char first_player) {
        player = first_player;
        winner = ' ';
        moves = 0;
    }

    void mark_board(int position) {
        if (position >= 1 && position <= 9 && board[position - 1] == ' ') {
            board[position - 1] = player;
            ++moves;

            // Switch player
            player = (player == 'X') ? 'O' : 'X';

            // After the move, check if it's a tie
            set_winner();
        }
    }

    char get_winner() {
        return winner;
    }

    bool game_over() {
        return moves == 9;
    }
};

void test_game_over_tie() {
    TicTacToe game;
    game.start_game('X');

    // Fill board with no winner (X and O alternate)
    int moves[] = {1, 2, 3, 5, 4, 6, 8, 7, 9}; // No win pattern
    for (int i = 0; i < 9; ++i) {
        game.mark_board(moves[i]);
    }

    if (game.game_over() && game.get_winner() == 'C') {
        cout << "Test game over if 9 slots are selected (Tie): PASSED" << endl;
    } else {
        cout << "Test game over if 9 slots are selected (Tie): FAILED" << endl;
        cout << "Expected winner: C, Got: " << game.get_winner() << endl;
    }
}

		void start_game(char first_player) {
			player = first_player;
		}
	
		char get_player() {
			return player;
		}
	};
	
	void test_first_player_set_to_X() {
		TicTacToe game;
		game.start_game('X');
		
		if (game.get_player() == 'X') {
			cout << "Test first player set to X: PASSED" << endl;
		} else {
			cout << "Test first player set to X: FAILED" << endl;
			cout << "Expected: X, Got: " << game.get_player() << endl;
		}
	}

	// Test Case: "Test first player set to O"
void test_first_player_set_to_O() {
    TicTacToe game;
    game.start_game('O');
    
    if (game.get_player() == 'O') {
        cout << "Test first player set to O: PASSED" << endl;
    } else {
        cout << "Test first player set to O: FAILED" << endl;
        cout << "Expected: O, Got: " << game.get_player() << endl;
    }
}
	
	int main() {
		test_first_player_set_to_X();
		return 0;
	}
