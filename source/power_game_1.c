#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning( disable : 4996)
#include "C:\Users\danie\Desktop\Final_project\include\game_index.h"

//�W�� c4996 ���~
#define _CRT_SECURE_NO_WARNINGS
#pragma warning( disable : 4996)


#define GAME_TIME 10 // �C���ɶ�����]��^
#define MAX_WEIGHT 30 // �̤j�ؼЭ��q

int power_game_1() {
    srand(time(NULL));
    int targetWeight = rand() % (MAX_WEIGHT - 15 + 1) + 15; // �H���ͦ��ؼЭ��q
    int strength = 0;  // ���a�ֿn���O�q��
    int input;         // ���a��J���Ʀr
    time_t startTime, currentTime;

    int x;

    printf("�w��Ө��|���D�ԹC���I\n");
    printf("�W�h�G�A�ݭn�ֳt��J�Ʀr 1 �Ӵ��ɤO�q�A�C����J���T�O�q�[ 1�C\n");
    printf("�b %d ���ݬݧA�O�_���|�_�ؼЭ��q %d ����I\n", GAME_TIME, targetWeight);
    printf("�ǳƦn�F�ܡH���U Enter ��}�l�C���C\n");
    getchar(); // ���ݪ��a���U Enter �}�l�C��

    time(&startTime); // �����C���}�l�ɶ�
    do {
        printf("��J�Ʀr 1 ���ɤO�q: ");
        scanf("%d", &input);
        if (input != 1) { // �ˬd��J�O�_�����ļƦr
            printf("�L�Ŀ�J�I�C\n");
        }

        if (input == 1) {
            strength++;
            printf("�O�q���ɡI��e�O�q: %d\n", strength);
        }


        time(&currentTime); // �����e�ɶ�
    } while (difftime(currentTime, startTime) < GAME_TIME);

    // �C�����G
    printf("\n�ɶ���I\n");
    printf("�A���̲פO�q�ȬO: %d\n", strength);

    if (strength >= targetWeight) {
        printf("���ߡI�A���\�|�_�F %d ����I�A�O�O�q�����I��o�@�I�O�q\n", targetWeight);
        x = 1;
        return x;
    }
    else {
        printf("�i���I�A�����|�_ %d ����I\n", targetWeight);
		x = 0;
        return x ;
    }


}

