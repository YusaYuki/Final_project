#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    char generatedNumber[6], userInput[6];
    clock_t start, end;
    double reactionTime;

    // 初始化隨機數種子
    srand(time(0));

    // 生成一個隨機的5位數字
    for (int i = 0; i < 5; i++) {
        generatedNumber[i] = '0' + rand() % 10;  // 隨機生成 0-9 的數字
    }
    generatedNumber[5] = '\0';  // 字串結束符

    int waitTime = 3;
    printf("等待中... (3秒後請輸入指定數字)\n", waitTime);
    printf("反應時間小於5秒獲勝");
    // 設置一個簡單的延遲 (通過循環來模擬隨機等待時間)
    start = clock();
    while ((clock() - start) / CLOCKS_PER_SEC < waitTime) {
        // 空迴圈模擬等待
    }
    // 顯示隨機生成的數字
    printf("請快速輸入以下數字串: %s\n", generatedNumber);

    // 開始計時
    start = clock();

    // 等待玩家輸入
    scanf("%s", userInput);

    // 結束計時
    end = clock();

    // 計算反應時間
    reactionTime = (double)(end - start) / CLOCKS_PER_SEC;

    // 檢查玩家輸入是否正確
    if (strcmp(generatedNumber, userInput) == 0) {
        printf("輸入正確！你的反應時間是: %.3f 秒\n", reactionTime);
        if (reactionTime < 5) {
            printf("你贏了!獲得一點敏捷");
            return 1;
        }
        else {
            printf("你輸了");
            return 0;
        }
    }
    else {
        printf("輸入錯誤！正確的數字串是: %s\n", generatedNumber);
        printf("你輸了");
        return 0;
    }

}
