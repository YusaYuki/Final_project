#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning( disable : 4996)
#include "C:\Users\danie\Desktop\Final_project\include\game_index.h"

int wisdom_game_3() {
    char answer[50];
    int x;
    int choice = rand() % 3 + 1;

    printf("�w��Ө���s���{���ݵ��C���I\n");

    switch (choice) {

    case 1:
        // ���D 1
        printf("���D: �H�U���ӹB��Ÿ��Ω�줸�k���B��H\n");
        printf("a. <<\nb. >>\nc. &\nd. |\n");
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
       //���D 2
            printf("���D: �b C �y�����A��ƪ��w�]��^���O�O����H\n");
        printf("a. int\nb. void\nc. char\nd. float\n");
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
    case 3:
        // ���D 3
        printf("���D: �ϥ� malloc ��Ƥ��t���O�������ӥѭ��Ө�ƨ�����H\n");
        printf("a. free\nb. delete\nc. release\nd. remove\n");
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
