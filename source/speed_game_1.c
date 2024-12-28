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

    // 初始化隨機數種子
    srand(time(0));

    // 隨機選擇一個字母 (a 到 z)
    targetLetter = 'a' + rand() % 26;

    // 提示玩家輸入指定字母
    printf("準備好輸入指定的字母！\n");
    printf("反應時間小於1秒獲勝！\n");
    int waitTime = 3;
    printf("等待中... (3秒後請按下指定字母)\n", waitTime);

    // 設置一個簡單的延遲 (通過循環來模擬隨機等待時間)
    start = clock();
    while ((clock() - start) / CLOCKS_PER_SEC < waitTime) {
        // 空迴圈模擬等待
    }
    printf("請按下字母: %c\n", targetLetter);

    // 計時開始
    start = clock();

    // 等待玩家輸入字母
    do {
        scanf(" %c", &userInput);
    } while (userInput != targetLetter);  // 玩家必須輸入正確字母

    // 計時結束
    end = clock();

    // 計算反應時間
    reactionTime = (double)(end - start) / CLOCKS_PER_SEC;

    printf("你的反應時間是: %.3f 秒\n", reactionTime);
    if (reactionTime < 1) {
        printf("你贏了!獲得一點敏捷");
        x = 1;
        return x;
    }
    else
    {
        printf("你輸了");
        x = 0;
        return x;
    }
}
