#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning( disable : 4996)
#include "C:\Users\danie\Desktop\Final_project\include\game_index.h"

int speed_game_1() {
    char targetLetter, userInput;
    clock_t start, end;
    double reactionTime;
	int x;

    // ��l���H���ƺؤl
    srand(time(0));

    // �H����ܤ@�Ӧr�� (a �� z)
    targetLetter = 'a' + rand() % 26;

    // ���ܪ��a��J���w�r��
    printf("�ǳƦn��J���w���r���I\n");
    printf("�����ɶ��p��1����ӡI\n");
    int waitTime = 3;
    printf("���ݤ�... (3���Ы��U���w�r��)\n", waitTime);

    // �]�m�@��²�檺���� (�q�L�`���Ӽ����H�����ݮɶ�)
    start = clock();
    while ((clock() - start) / CLOCKS_PER_SEC < waitTime) {
        // �Űj���������
    }
    printf("�Ы��U�r��: %c\n", targetLetter);

    // �p�ɶ}�l
    start = clock();

    // ���ݪ��a��J�r��
    do {
        scanf(" %c", &userInput);
    } while (userInput != targetLetter);  // ���a������J���T�r��

    // �p�ɵ���
    end = clock();

    // �p������ɶ�
    reactionTime = (double)(end - start) / CLOCKS_PER_SEC;

    printf("�A�������ɶ��O: %.3f ��\n", reactionTime);
    if (reactionTime < 1) {
        printf("�AĹ�F!��o�@�I�ӱ�");
        x = 1;
        return x;
    }
    else
    {
        printf("�A��F");
        x = 0;
        return x;
    }
}
