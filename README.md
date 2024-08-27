# TicTacToe_Muskan

Tic-Tac-Toe Game

This project is a console-based implementation of the classic Tic-Tac-Toe game, developed in C++. It allows two players to take turns and play the game, with built-in logic to detect wins, draws, and validate player inputs.

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
