#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning( disable : 4996)
#include "C:\Users\danie\Desktop\Final_project\include\game_index.h"

int luck_game_3() {
    int firstNumber, secondNumber, userGuess;
    int x;

    // 初始化隨機數種子
    srand(time(0));

    // 生成第一個隨機數字 (1 到 100)
    firstNumber = rand() % 100 + 1;

    // 提示玩家猜第二個數字的大小
    printf("第一個數字是: %d\n", firstNumber);
    printf("你覺得第二個數字會大於還是小於第一個數字？(0 = 小於, 1 = 大於): ");
    scanf("%d", &userGuess);

    // 生成第二個隨機數字 (1 到 100)
    secondNumber = rand() % 100 + 1;
    printf("第二個數字是: %d\n", secondNumber);

    // 判斷玩家的猜測是否正確
    if ((userGuess == 1 && secondNumber > firstNumber) || (userGuess == 0 && secondNumber < firstNumber)) {
        printf("恭喜！你猜對了！獲得一點幸運\n");
        x = 1;
		return x;
    }
    else {
        printf("很遺憾，你猜錯了。\n");
		x = 0;
        return x;
    }

}
