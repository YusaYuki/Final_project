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
    printf("猜拳遊戲\n\n");


		int k = 0;

        while (k = 0) {
            printf("做出你的選擇 (1 = 石頭, 2 = 布, 3 = 剪刀): ");
            scanf("%d", &playerMove);
            if( (playerMove != 1 )|| (playerMove != 2 )||( playerMove != 3)) {
                printf("Invalid move! Please try again.\n");

            }

            else {
                k = 1;
            }
        }

        int computerMove = rand() % 3 + 1;

        printf("你選擇: ");
        switch (playerMove) {
        case ROCK:
            printf("石頭\n");
            break;
        case PAPER:
            printf("布\n");
            break;
        case SCISSORS:
            printf("剪刀\n");
            break;
        }

        printf("電腦選擇: ");
        switch (computerMove) {
        case ROCK:
            printf("石頭\n");
            break;
        case PAPER:
            printf("布\n");
            break;
        case SCISSORS:
            printf("剪刀\n");
            break;
        }

        if (playerMove == computerMove) {
            printf("平手!\n");
        }
        else if (playerMove == ROCK && computerMove == SCISSORS ||
            playerMove == PAPER && computerMove == ROCK ||
            playerMove == SCISSORS && computerMove == PAPER) {
            printf("玩家贏下這回合!\n");
            playerScore++;
        }
        else {
            printf("電腦贏下這回合!\n");
            computerScore++;
        }
       
   
   
    if (playerScore > computerScore) {
        printf("玩家勝利!獲得一點幸運");
        x = 1;
        return x;
    }
    if (playerScore == computerScore) {
        printf("平手");
        x = 2;
        return x;
    }
    if (computerScore > playerScore) {
        printf("電腦勝利");
        x = 0;
        return x;
    }

}