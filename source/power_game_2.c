#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning( disable : 4996)
#include "C:\Users\danie\Desktop\Final_project\include\game_index.h"

#define GAME_TIME 10   // �C���ɶ�����]��^
#define BREAK_LIMIT 20 // �{�}�a�����O�q��

int power_game_2() {
    int strength = 0;  // ���a�ֿn���O�q��
    int input;         // ���a��J���Ʀr
    time_t startTime, currentTime;
	int x;

    printf("�w��Ө�{�a�D�ԡI\n");
    printf("�W�h�G�ֳt��J�Ʀr 1 �����O�q�A�C����J���T�W�[ 1 �I�O�q�C\n");
    printf("�b %d ���ݬݧA�O�_��ֿn %d �I�O�q�A���}�a���I\n", GAME_TIME, BREAK_LIMIT);
    printf("�ǳƦn�F�ܡH���U Enter ��}�l�C���C\n");
    getchar(); // ���ݪ��a���U Enter �}�l�C��

    time(&startTime); // �����C���}�l�ɶ�

    do {
        printf("��J�Ʀr 1 �W�[�O�q: ");
        if (scanf("%d", &input) != 1) { // �ˬd��J�O�_�����ļƦr
            printf("�L�Ŀ�J�I�C�������C\n");
            break;
        }

        if (input == 1) {
            strength++;
            printf("�O�q���ɡI��e�O�q: %d\n", strength);
        }
        else {
            printf("��J���~�I�C�������C\n");
            break;
        }

        time(&currentTime); // �����e�ɶ�
    } while (difftime(currentTime, startTime) < GAME_TIME);

    // �C�����G
    printf("\n�ɶ���I\n");
    printf("�A���̲פO�q�ȬO: %d\n", strength);

    if (strength >= BREAK_LIMIT) {
        printf("���ߡI�A���\���}�F�a����o�@�I�O�q�ȡI\n");
        x = 1;
        return x;
    }
    else {
        printf("�A��F�I�O�q�����A�a�����n�L�l\n");
        x = 0;
        return x;
    }
    system("pause");
}
