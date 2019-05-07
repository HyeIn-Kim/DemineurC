#include <stdlib.h>
#include <stdio.h>

#include "Minesweeper.h"

int checkRows(int boardRows) {
	return (boardRows >= minBoard && boardRows <= maxBoard);
}
int checkCols(int boardCols) {
	return (boardCols >= minBoard && boardCols <= maxBoard);
}

int main()
{
	Board my_Board[16][16];
	int boardRows, boardCols; 
	boardRows = 0;
	boardCols = 0;
	while (!checkRows(boardRows) || !checkCols(boardCols)){
		printf("%d~%d ���� ���� �Է�: ",minBoard,maxBoard); 
		scanf_s("%d %d", &boardRows, &boardCols);
	}
	
	InitBoard(*my_Board);
	Play(*my_Board);

    return 0;
}


