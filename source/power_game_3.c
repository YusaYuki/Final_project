#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning( disable : 4996)
#include "C:\Users\danie\Desktop\Final_project\include\game_index.h"

int power_game_3() {
    int i, playerStrength, opponentStrength;
	int x;

    // ��l���H���ƺؤl
    srand(time(0));
    printf("�T��ùC��");
    // ���a�O�q�� (1 �� 100)
    printf("��J���B�Ʀr�A�N��o�@�ӤO�q�� (1 �� 100): ");
    scanf("%d", &i);
    playerStrength = rand() % 100 + 1;

    // �H���ͦ���⪺�O�q�� (1 �� 100)
    opponentStrength = rand() % 100 + 1;

    // ������誺�O�q��
    printf("�A���O�q��: %d\n", playerStrength);
    printf("��⪺�O�q��: %d\n", opponentStrength);

    // ����O�q��
    if (playerStrength > opponentStrength) {
        printf("���ߡI�AĹ�F�T��ä��ɡI��o�@�I�O�q\n");
        x = 1;
        return x;
    }
    else if (playerStrength < opponentStrength) {
        printf("�ܿ�ѡA�A��F�C����j�j�I\n");
        x = 0;
        return x;
    }
    else {
        printf("�����I����O�q�۵��I\n");
        x = 2;
        return x;
    }


}
