#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning( disable : 4996)
#include "C:\Users\danie\Desktop\Final_project\include\game_index.h"

int wisdom_game_2() {
    char answer[50];
    int x;
    int choice = rand() % 3 + 1;

    printf("�w��Ө�s���{���ݵ��C���I\n");
    switch (choice) {

    case 1:
        // ���D 1
        printf("���D: �b C �y�����A�Ʋժ����ެO�q���ӼƦr�}�l�H\n");
        printf("a. 1\nb. 0\nc. -1\nd. 2\n");
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
        printf("���D: C �y������ main ��ƪ���^���O�q�`�O����H\n");
        printf("a. void\nb. char\nc. int\nd. float\n");
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
        printf("���D: �ϥ� #include <stdio.h> �i�H�X�ݭ��ӼзǮw�H\n");
        printf("a. �зǿ�J��X�w\nb. �r�Ŧ�B�z�w\nc. �ƾǹB��w\nd. �ʺA�O������t�w\n");
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
