#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning( disable : 4996)
#include "C:\Users\danie\Desktop\Final_project\include\game_index.h"
#include <windows.h> // �]�w����
#define ROCK 1
#define PAPER 2
#define SCISSORS 3
int playerMove;

int luck_game_2(){
    int playerScore = 0;
    int computerScore = 0;
    int i;
	int x;
	
    printf("�q���C��\n\n");

    int playerMove;
    printf("���X�A����� (1 = ���Y, 2 = ��, 3 = �ŤM): ");
    scanf("%d", &playerMove);

 
    if (playerMove < 1 || playerMove > 3) {
        printf("Invalid move! Please try again.\n");
    }

        int computerMove = rand() % 3 + 1;

        printf("�A���: ");
        switch (playerMove) {
        case ROCK:
            printf("���Y\n");
            break;
        case PAPER:
            printf("��\n");
            break;
        case SCISSORS:
            printf("�ŤM\n");
            break;
        }

        printf("�q�����: ");
        switch (computerMove) {
        case ROCK:
            printf("���Y\n");
            break;
        case PAPER:
            printf("��\n");
            break;
        case SCISSORS:
            printf("�ŤM\n");
            break;
        }

        if (playerMove == computerMove) {
            printf("");
        }
        else if (playerMove == ROCK && computerMove == SCISSORS || playerMove == PAPER && computerMove == ROCK ||  playerMove == SCISSORS && computerMove == PAPER) {
            playerScore++;
        }
        else {
            
            computerScore++;
        }
       
   
   
    if (playerScore > computerScore) {
        printf("���a�ӧQ!��o�@�I���B\n");
        x = 1;
        return x;
    }
    if (playerScore == computerScore) {
        printf("����\n");
        x = 2;
        return x;
    }
    if (computerScore > playerScore) {
        printf("�q���ӧQ\n");
        x = 0;
        return x;
    }

}