#include <stdio.h>
#include <string.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning( disable : 4996)
#include "C:\Users\danie\Desktop\Final_project\include\game_index.h"

int wisdom_game_1() {
    char answer[50];
    
	int x;
	srand(time(NULL));

    printf("�w��Ө�{���ݵ��C���I\n");
    printf("����@�D�W�[�@�I���O�I\n");

	int choice = rand() % 3 + 1;

    switch (choice) {
    case 1:
        // ���D 1
        printf("���D: C �y������ printf ��ƥΨӰ�����H\n");
        printf("a. Ū����J\nb. ��ܿ�X\nc. �ŧi�ܼ�\nd. �����{��\n");
        printf("�п�J�A�����ס]a, b, c, d�^�G");
        scanf("%s", answer);
        if (strcmp(answer, "b") == 0) {
            printf("���T�I\n");
			x = 1;
        }
        else {
            printf("���~�A���T���׬O b.\n");
			x = 0;
        }
        break;

    case 2:
        // ���D 2
        printf("���D: ���Ӽ��Y�ɮץ]�t�F malloc ��ƪ��ŧi�H\n");
        printf("a. stdio.h\nb. string.h\nc. stdlib.h\nd. math.h\n");
        printf("�п�J�A�����ס]a, b, c, d�^�G");
        scanf("%s", answer);
        if (strcmp(answer, "c") == 0) {
            printf("���T�I\n");
			x = 1;
        }
        else {
            printf("���~�A���T���׬O c.\n");
			x = 0;
        }

        break;

    case 3:
        // ���D 3
        printf("���D: C �y�������ӹB��Ÿ��Ω��޿�B�B��H\n");
        printf("a. &&\nb. ||\nc. &\nd. ^\n");
        printf("�п�J�A�����ס]a, b, c, d�^�G");
        scanf("%s", answer);
        if (strcmp(answer, "a") == 0) {
            printf("���T�I\n");
			x = 1;
        }
        else {
            printf("���~�A���T���׬O a.\n");
			x = 0;
        }

        break;

    default:
        break;

    
    }

	return x;
}   
