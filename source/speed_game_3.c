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
    // 提示玩家準備
    printf("輸入任意鍵開始，然後盡快輸入另一個鍵來測試反應速度。\n");
    printf("反應時間小於0.5秒獲勝。\n");
    // 等待玩家按鍵來開始計時
    scanf(" %c", &userInput);

    // 隨機等待一小段時間（例如1-3秒，模擬隨機延遲）
    int waitTime = rand() % 3 + 1;
    printf("等待中... (大約 %d 秒後請按下另一個鍵)\n", waitTime);

    // 設置一個簡單的延遲 (通過循環來模擬隨機等待時間)
    start = clock();
    while ((clock() - start) / CLOCKS_PER_SEC < waitTime) {
        // 空迴圈模擬等待
    }

    // 提示玩家按鍵並開始計時
    printf("現在！請按下另一個鍵！\n");
    start = clock(); // 計時開始

    // 等待玩家按鍵
    scanf(" %c", &userInput);

    end = clock(); // 計時結束

    // 計算反應時間
    reactionTime = (double)(end - start) / CLOCKS_PER_SEC;

    printf("你的反應時間是: %.3f 秒\n", reactionTime);
    if (reactionTime <= 0.5) {
        printf("你贏了獲得一點敏捷\n", reactionTime);
        x = 1;
        return x;
    }
    if (reactionTime > 0.5) {
        printf("你輸了\n", reactionTime);
        x = 0;
        return x;
    }
}
