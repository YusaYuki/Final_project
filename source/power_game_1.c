#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning( disable : 4996)
#include "C:\Users\danie\Desktop\Final_project\include\game_index.h"

//規避 c4996 錯誤
#define _CRT_SECURE_NO_WARNINGS
#pragma warning( disable : 4996)


#define GAME_TIME 10 // 遊戲時間限制（秒）
#define MAX_WEIGHT 30 // 最大目標重量

int power_game_1() {
    srand(time(NULL));
    int targetWeight = rand() % (MAX_WEIGHT - 15 + 1) + 15; // 隨機生成目標重量
    int strength = 0;  // 玩家累積的力量值
    int input;         // 玩家輸入的數字
    time_t startTime, currentTime;

    int x;

    printf("歡迎來到舉重挑戰遊戲！\n");
    printf("規則：你需要快速輸入數字 1 來提升力量，每次輸入正確力量加 1。\n");
    printf("在 %d 秒內看看你是否能舉起目標重量 %d 公斤！\n", GAME_TIME, targetWeight);
    printf("準備好了嗎？按下 Enter 鍵開始遊戲。\n");
    getchar(); // 等待玩家按下 Enter 開始遊戲

    time(&startTime); // 紀錄遊戲開始時間
    do {
        printf("輸入數字 1 提升力量: ");
        scanf("%d", &input);
        if (input != 1) { // 檢查輸入是否為有效數字
            printf("無效輸入！。\n");
        }

        if (input == 1) {
            strength++;
            printf("力量提升！當前力量: %d\n", strength);
        }


        time(&currentTime); // 獲取當前時間
    } while (difftime(currentTime, startTime) < GAME_TIME);

    // 遊戲結果
    printf("\n時間到！\n");
    printf("你的最終力量值是: %d\n", strength);

    if (strength >= targetWeight) {
        printf("恭喜！你成功舉起了 %d 公斤！你是力量之王！獲得一點力量\n", targetWeight);
        x = 1;
        return x;
    }
    else {
        printf("可惜！你未能舉起 %d 公斤！\n", targetWeight);
		x = 0;
        return x ;
    }


}

