#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning( disable : 4996)
#include "C:\Users\danie\Desktop\Final_project\include\game_index.h"
#include <windows.h> // 設定延遲
#define ROCK 1
#define PAPER 2
#define SCISSORS 3
int playerMove;

int luck_game_2(){
    int playerScore = 0;
    int computerScore = 0;
    int i;
	int x;
	
    printf("猜拳遊戲\n\n");

    int playerMove;
    printf("做出你的選擇 (1 = 石頭, 2 = 布, 3 = 剪刀): ");
    scanf("%d", &playerMove);

 
    if (playerMove < 1 || playerMove > 3) {
        printf("Invalid move! Please try again.\n");
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
            printf("");
        }
        else if (playerMove == ROCK && computerMove == SCISSORS || playerMove == PAPER && computerMove == ROCK ||  playerMove == SCISSORS && computerMove == PAPER) {
            playerScore++;
        }
        else {
            
            computerScore++;
        }
       
   
   
    if (playerScore > computerScore) {
        printf("玩家勝利!獲得一點幸運\n");
        x = 1;
        return x;
    }
    if (playerScore == computerScore) {
        printf("平手\n");
        x = 2;
        return x;
    }
    if (computerScore > playerScore) {
        printf("電腦勝利\n");
        x = 0;
        return x;
    }

}