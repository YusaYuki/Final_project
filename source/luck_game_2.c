#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning( disable : 4996)
#include "C:\Users\danie\Desktop\Final_project\include\game_index.h"
#define ROCK 1
#define PAPER 2
#define SCISSORS 3

int luck_game_2() {
    int playerScore = 0;
    int computerScore = 0;
    int i;
	int x;
	int playerMove = 0;
    printf("�q���C��\n\n");


		int k = 0;

        while (k = 0) {
            printf("���X�A����� (1 = ���Y, 2 = ��, 3 = �ŤM): ");
            scanf("%d", &playerMove);
            if( (playerMove != 1 )|| (playerMove != 2 )||( playerMove != 3)) {
                printf("Invalid move! Please try again.\n");

            }

            else {
                k = 1;
            }
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
            printf("����!\n");
        }
        else if (playerMove == ROCK && computerMove == SCISSORS ||
            playerMove == PAPER && computerMove == ROCK ||
            playerMove == SCISSORS && computerMove == PAPER) {
            printf("���aĹ�U�o�^�X!\n");
            playerScore++;
        }
        else {
            printf("�q��Ĺ�U�o�^�X!\n");
            computerScore++;
        }
       
   
   
    if (playerScore > computerScore) {
        printf("���a�ӧQ!��o�@�I���B");
        x = 1;
        return x;
    }
    if (playerScore == computerScore) {
        printf("����");
        x = 2;
        return x;
    }
    if (computerScore > playerScore) {
        printf("�q���ӧQ");
        x = 0;
        return x;
    }

}