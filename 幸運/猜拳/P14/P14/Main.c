#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROCK 1
#define PAPER 2
#define SCISSORS 3

int main() {
    int playerScore = 0;
    int computerScore = 0;
    int i;
    printf("猜拳遊戲\n\n");
    for (i = 0; i < 3; i++) {

        int playerMove;
        printf("做出你的選擇 (1 = 石頭, 2 = 布, 3 = 剪刀): ");
        scanf("%d", &playerMove);

        if (playerMove == 0) {
            break;
        }

        if (playerMove < 1 || playerMove > 3) {
            printf("Invalid move! Please try again.\n");
            continue;
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
        printf("當前分數: 玩家 %d - %d 電腦\n\n", playerScore, computerScore);
    }
    printf("\n最後分數: 玩家 %d - %d 電腦\n", playerScore, computerScore);
    if (playerScore > computerScore) {
        printf("玩家勝利!獲得一點幸運");
        return 1;
    }
    if (playerScore == computerScore) {
        printf("平手");
        return 0;
    }
    if (computerScore > playerScore){
        printf("電腦勝利");
        return 0;
    }
    
}