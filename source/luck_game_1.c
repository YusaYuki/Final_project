#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define _CRT_SECURE_NO_WARNINGS
#pragma warning( disable : 4996)
#include "C:\Users\danie\Desktop\Final_project\include\game_index.h"

int luck_game_1() {
    int userGuess, diceResult;
    int x;

    // ��l���H���ƺؤl
    srand(time(0));

    // ���ܪ��a��J���
    printf("�вq�j�p (0 = �p, 1 = �j): ");
    scanf("%d", &userGuess);

    // �H���ͦ���l���G (1 �� 6)
    diceResult = rand() % 6 + 1;

    // ��ܻ�l���G
    printf("��l�����G�O: %d\n", diceResult);

    // �P�_�j�p
    if (diceResult >= 4) {
        printf("���G�O�j�C\n");
    }
    else {
        printf("���G�O�p�C\n");
    }

    // �ˬd���a�O�_�q��
    if ((diceResult >= 4 && userGuess == 1) || (diceResult < 4 && userGuess == 0)) {
        printf("���ߡI�A�q��F!��o�@�I���B\n");
        x = 1;
        return x;
    }
    else {
        printf("�ܿ�ѡA�A�q���F�C\n");
        x = 0;
        return x;
    }


}
