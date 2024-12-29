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
    printf("�q���C��\n\n");
    for (i = 0; i < 3; i++) {

        int playerMove;
        printf("���X�A����� (1 = ���Y, 2 = ��, 3 = �ŤM): ");
        scanf("%d", &playerMove);

        if (playerMove == 0) {
            break;
        }

        if (playerMove < 1 || playerMove > 3) {
            printf("Invalid move! Please try again.\n");
            continue;
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
        printf("��e����: ���a %d - %d �q��\n\n", playerScore, computerScore);
    }
    printf("\n�̫����: ���a %d - %d �q��\n", playerScore, computerScore);
    if (playerScore > computerScore) {
        printf("���a�ӧQ!��o�@�I���B");
        return 1;
    }
    if (playerScore == computerScore) {
        printf("����");
        return 0;
    }
    if (computerScore > playerScore){
        printf("�q���ӧQ");
        return 0;
    }
    
}