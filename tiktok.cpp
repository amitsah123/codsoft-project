#include <iostream>
#include <vector>

using namespace std;

// Function to print the Tic Tac Toe board
void printBoard(const vector<vector<char>>& board) {
for (int i = 0; i < 3; ++i) {
for (int j = 0; j < 3; ++j) {
cout << board[i][j];
if (j < 2) {
cout << " | ";
}
}
cout << endl;
if (i < 2) {
cout << "---------" << endl;
}
}
}

// Function to check if a player has won
bool checkWin(const vector<vector<char>>& board, char player) {
// Check rows, columns, and diagonals
for (int i = 0; i < 3; ++i) {
if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
return true;
}
if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
return true;
}
}
if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
return true;
}
if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
return true;
}
return false;
}

// Function to check if the board is full
bool isBoardFull(const vector<vector<char>>& board) {
for (int i = 0; i < 3; ++i) {
for (int j = 0; j < 3; ++j) {
if (board[i][j] == ' ') {
return false;
}
}
}
return true;
}

int main() {
vector<vector<char>> board(3, vector<char>(3, ' '));
char currentPlayer = 'X';

cout << "Tic Tac Toe Game" << endl;

while (true) {
cout << endl;
printBoard(board);

int row, col;
cout << "Player " << currentPlayer << ", enter your move (row and column): ";
cin >> row >> col;

if (row < 1 || row > 3 || col < 1 || col > 3 || board[row - 1][col - 1] != ' ') {
cout << "Invalid move. Try again." << endl;
continue;
}

board[row - 1][col - 1] = currentPlayer;

if (checkWin(board, currentPlayer)) {
cout << endl << "Player " << currentPlayer << " wins!" << endl;
break;
} else if (isBoardFull(board)) {
cout << endl << "It's a draw!" << endl;
break;
}

currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

cout << endl << "Final  Game board:" << endl;
printBoard(board);

return 0;
}