#include <iostream>
using namespace std;

// Display the Tic Tac Toe board
void displayBoard(char board[3][3])
{
    cout << "\n";
    cout << "       TIC TAC TOE\n";
    cout << "   -----------------\n";

    for (int i = 0; i < 3; i++)
    {
        cout << "   |";

        for (int j = 0; j < 3; j++)
        {
            cout << " " << board[i][j] << " |";
        }

        cout << "\n";
        cout << "   -----------------\n";
    }

    cout << endl;
}

// Check whether a player has won
bool checkWin(char board[3][3], char player)
{
    // Check rows
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == player &&
            board[i][1] == player &&
            board[i][2] == player)
        {
            return true;
        }
    }

    // Check columns
    for (int j = 0; j < 3; j++)
    {
        if (board[0][j] == player &&
            board[1][j] == player &&
            board[2][j] == player)
        {
            return true;
        }
    }

    // Check diagonals
    if (board[0][0] == player &&
        board[1][1] == player &&
        board[2][2] == player)
    {
        return true;
    }

    if (board[0][2] == player &&
        board[1][1] == player &&
        board[2][0] == player)
    {
        return true;
    }

    return false;
}

// Check whether the board is full
bool checkDraw(char board[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] != 'X' && board[i][j] != 'O')
            {
                return false;
            }
        }
    }

    return true;
}

// Play one complete game
void playGame()
{
    char board[3][3] =
    {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };

    char currentPlayer = 'X';
    int choice;
    int row, col;

    while (true)
    {
        displayBoard(board);

        cout << "Player " << currentPlayer;
        cout << ", enter your position (1-9): ";
        cin >> choice;

        // Validate input
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');

            cout << "\nInvalid input! Please enter a number from 1 to 9.\n";
            continue;
        }

        if (choice < 1 || choice > 9)
        {
            cout << "\nInvalid position! Choose a number from 1 to 9.\n";
            continue;
        }

        // Convert position to row and column
        row = (choice - 1) / 3;
        col = (choice - 1) % 3;

        // Check whether position is already occupied
        if (board[row][col] == 'X' || board[row][col] == 'O')
        {
            cout << "\nPosition already occupied! Try another position.\n";
            continue;
        }

        // Place player's symbol
        board[row][col] = currentPlayer;

        // Check for winner
        if (checkWin(board, currentPlayer))
        {
            displayBoard(board);

            cout << "=================================\n";
            cout << "       PLAYER " << currentPlayer << " WINS!\n";
            cout << "=================================\n";

            break;
        }

        // Check for draw
        if (checkDraw(board))
        {
            displayBoard(board);

            cout << "=================================\n";
            cout << "          GAME DRAW!\n";
            cout << "=================================\n";

            break;
        }

        // Change player
        if (currentPlayer == 'X')
        {
            currentPlayer = 'O';
        }
        else
        {
            currentPlayer = 'X';
        }
    }
}

int main()
{
    char replay;

    cout << "=================================\n";
    cout << "        TIC TAC TOE GAME\n";
    cout << "=================================\n";

    do
    {
        playGame();

        cout << "\nDo you want to play again? (Y/N): ";
        cin >> replay;

        while (replay != 'Y' && replay != 'y' &&
               replay != 'N' && replay != 'n')
        {
            cout << "Please enter Y or N: ";
            cin >> replay;
        }

    } while (replay == 'Y' || replay == 'y');

    cout << "\n=================================\n";
    cout << "     Thanks for playing!\n";
    cout << "=================================\n";

    return 0;
}