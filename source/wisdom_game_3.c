#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning( disable : 4996)
#include "C:\Users\danie\Desktop\Final_project\include\game_index.h"

int wisdom_game_3() {
    char answer[50];
    int x;
    int choice = rand() % 3 + 1;

    printf("歡迎來到全新的程式問答遊戲！\n");

    switch (choice) {

    case 1:
        // 問題 1
        printf("問題: 以下哪個運算符號用於位元右移運算？\n");
        printf("a. <<\nb. >>\nc. &\nd. |\n");
        printf("請輸入你的答案（a, b, c, d）：");
        scanf("%s", answer);
        if (strcmp(answer, "b") == 0) {
            printf("正確！\n");
            x = 1;
        }
        else {
            printf("錯誤，正確答案是 b.\n");
            x = 0;
        }
        break;
    case 2:
       //問題 2
            printf("問題: 在 C 語言中，函數的預設返回型別是什麼？\n");
        printf("a. int\nb. void\nc. char\nd. float\n");
        printf("請輸入你的答案（a, b, c, d）：");
        scanf("%s", answer);
        if (strcmp(answer, "a") == 0) {
            printf("正確！\n");
            x = 1;
        }
        else {
            printf("錯誤，正確答案是 a.\n");
            x = 0;
        }
        break;
    case 3:
        // 問題 3
        printf("問題: 使用 malloc 函數分配的記憶體應該由哪個函數來釋放？\n");
        printf("a. free\nb. delete\nc. release\nd. remove\n");
        printf("請輸入你的答案（a, b, c, d）：");
        scanf("%s", answer);
        if (strcmp(answer, "a") == 0) {
            printf("正確！\n");
            x = 1;
        }
        else {
            printf("錯誤，正確答案是 a.\n");
            x = 0;
        }
        break;

    default:
        break;
    }
  
    return x;

}
