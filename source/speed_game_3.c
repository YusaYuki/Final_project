#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning( disable : 4996)
#include "C:\Users\danie\Desktop\Final_project\include\game_index.h"

int speed_game_3() {
    char userInput;
    clock_t start, end;
    double reactionTime;
	int x;  
    srand(time(0));
    // ���ܪ��a�ǳ�
    printf("��J���N��}�l�A�M��ɧֿ�J�t�@����Ӵ��դ����t�סC\n");
    printf("�����ɶ��p��0.5����ӡC\n");
    // ���ݪ��a����Ӷ}�l�p��
    scanf(" %c", &userInput);

    // �H�����ݤ@�p�q�ɶ��]�Ҧp1-3��A�����H������^
    int waitTime = rand() % 3 + 1;
    printf("���ݤ�... (�j�� %d ���Ы��U�t�@����)\n", waitTime);

    // �]�m�@��²�檺���� (�q�L�`���Ӽ����H�����ݮɶ�)
    start = clock();
    while ((clock() - start) / CLOCKS_PER_SEC < waitTime) {
        // �Űj���������
    }

    // ���ܪ��a����ö}�l�p��
    printf("�{�b�I�Ы��U�t�@����I\n");
    start = clock(); // �p�ɶ}�l

    // ���ݪ��a����
    scanf(" %c", &userInput);

    end = clock(); // �p�ɵ���

    // �p������ɶ�
    reactionTime = (double)(end - start) / CLOCKS_PER_SEC;

    printf("�A�������ɶ��O: %.3f ��\n", reactionTime);
    if (reactionTime <= 0.5) {
        printf("�AĹ�F��o�@�I�ӱ�\n", reactionTime);
        x = 1;
        return x;
    }
    if (reactionTime > 0.5) {
        printf("�A��F\n", reactionTime);
        x = 0;
        return x;
    }
}
