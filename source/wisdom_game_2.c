#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning( disable : 4996)
#include "C:\Users\danie\Desktop\Final_project\include\game_index.h"

int wisdom_game_2() {
    char answer[50];
    int x;
    int choice = rand() % 3 + 1;

    printf("歡迎來到新的程式問答遊戲！\n");
    switch (choice) {

    case 1:
        // 問題 1
        printf("問題: 在 C 語言中，數組的索引是從哪個數字開始？\n");
        printf("a. 1\nb. 0\nc. -1\nd. 2\n");
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
        printf("問題: C 語言中的 main 函數的返回型別通常是什麼？\n");
        printf("a. void\nb. char\nc. int\nd. float\n");
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
        printf("問題: 使用 #include <stdio.h> 可以訪問哪個標準庫？\n");
        printf("a. 標準輸入輸出庫\nb. 字符串處理庫\nc. 數學運算庫\nd. 動態記憶體分配庫\n");
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
