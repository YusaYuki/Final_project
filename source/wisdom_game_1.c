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

    printf("歡迎來到程式問答遊戲！\n");
    printf("答對一題增加一點智力！\n");

	int choice = rand() % 3 + 1;

    switch (choice) {
    case 1:
        // 問題 1
        printf("問題: C 語言中的 printf 函數用來做什麼？\n");
        printf("a. 讀取輸入\nb. 顯示輸出\nc. 宣告變數\nd. 結束程式\n");
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
        // 問題 2
        printf("問題: 哪個標頭檔案包含了 malloc 函數的宣告？\n");
        printf("a. stdio.h\nb. string.h\nc. stdlib.h\nd. math.h\n");
        printf("請輸入你的答案（a, b, c, d）：");
        scanf("%s", answer);
        if (strcmp(answer, "c") == 0) {
            printf("正確！\n");
			x = 1;
        }
        else {
            printf("錯誤，正確答案是 c.\n");
			x = 0;
        }

        break;

    case 3:
        // 問題 3
        printf("問題: C 語言中哪個運算符號用於邏輯且運算？\n");
        printf("a. &&\nb. ||\nc. &\nd. ^\n");
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
