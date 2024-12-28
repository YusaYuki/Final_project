#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning( disable : 4996)
#include "C:\Users\danie\Desktop\Final_project\include\game_index.h"

int power_game_3() {
    int i, playerStrength, opponentStrength;
	int x;

    // 初始化隨機數種子
    srand(time(0));
    printf("掰手腕遊戲");
    // 玩家力量值 (1 到 100)
    printf("輸入幸運數字你將獲得一個力量值 (1 到 100): ");
    scanf("%d", &i);
    playerStrength = rand() % 100 + 1;

    // 隨機生成對手的力量值 (1 到 100)
    opponentStrength = rand() % 100 + 1;

    // 顯示雙方的力量值
    printf("你的力量值: %d\n", playerStrength);
    printf("對手的力量值: %d\n", opponentStrength);

    // 比較力量值
    if (playerStrength > opponentStrength) {
        printf("恭喜！你贏了掰手腕比賽！獲得一點力量\n");
        x = 1;
        return x;
    }
    else if (playerStrength < opponentStrength) {
        printf("很遺憾，你輸了。對手更強大！\n");
        x = 0;
        return x;
    }
    else {
        printf("平局！雙方力量相等！\n");
        x = 2;
        return x;
    }


}
