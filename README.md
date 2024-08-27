# TicTacToe_Muskan

Tic-Tac-Toe Game - It is a two-player game implemented in C++. Players alternate turns placing Xs and Os on a 3×3 board, aiming to align three in a row horizontally, vertically, or diagonally. The game ends when a player wins by achieving this, or when the board is fully occupied, resulting in a draw. The board is managed using a 2D array, and moves are input through the console with validation checks ensuring proper gameplay.

Features:

1. Two-Player Mode: Players alternate turns to mark the board with 'X' or 'O'.
2. Win Detection: The game detects when a player wins by aligning three of their marks horizontally, vertically, or diagonally.
3. Draw Detection: The game checks for a draw condition when all squares are filled without a winner.
4. Input Validation: Ensures that players select valid, unoccupied squares for their moves.

Code Overview
1. sq[9]: An array representing the 9 squares on the Tic-Tac-Toe board.
2. result_win(): Function to check if a player has won the game.
3. result_draw(): Function to check if the game has ended in a draw.
4. display(): Function to display the current state of the game board.
5. Main Loop: The main game loop where players input their moves, and the game checks for win/draw conditions after each move.
