#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning( disable : 4996)
#include "C:\Users\danie\Desktop\Final_project\include\game_index.h"

#define GAME_TIME 10   // 遊戲時間限制（秒）
#define BREAK_LIMIT 20 // 砸破地面的力量值

int power_game_2() {
    int strength = 0;  // 玩家累積的力量值
    int input;         // 玩家輸入的數字
    time_t startTime, currentTime;
	int x;

    printf("歡迎來到砸地挑戰！\n");
    printf("規則：快速輸入數字 1 模擬力量，每次輸入正確增加 1 點力量。\n");
    printf("在 %d 秒內看看你是否能累積 %d 點力量，打破地面！\n", GAME_TIME, BREAK_LIMIT);
    printf("準備好了嗎？按下 Enter 鍵開始遊戲。\n");
    getchar(); // 等待玩家按下 Enter 開始遊戲

    time(&startTime); // 紀錄遊戲開始時間

    do {
        printf("輸入數字 1 增加力量: ");
        if (scanf("%d", &input) != 1) { // 檢查輸入是否為有效數字
            printf("無效輸入！遊戲結束。\n");
            break;
        }

        if (input == 1) {
            strength++;
            printf("力量提升！當前力量: %d\n", strength);
        }
        else {
            printf("輸入錯誤！遊戲結束。\n");
            break;
        }

        time(&currentTime); // 獲取當前時間
    } while (difftime(currentTime, startTime) < GAME_TIME);

    // 遊戲結果
    printf("\n時間到！\n");
    printf("你的最終力量值是: %d\n", strength);

    if (strength >= BREAK_LIMIT) {
        printf("恭喜！你成功打破了地面獲得一點力量值！\n");
        x = 1;
        return x;
    }
    else {
        printf("你輸了！力量不足，地面完好無損\n");
        x = 0;
        return x;
    }
    system("pause");
}
