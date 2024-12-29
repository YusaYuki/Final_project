#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userGuess, diceResult;

    // 初始化隨機數種子
    srand(time(0));

    // 提示玩家輸入選擇
    printf("請猜大小 (0 = 小, 1 = 大): ");
    scanf("%d", &userGuess);

    // 隨機生成骰子結果 (1 到 6)
    diceResult = rand() % 6 + 1;

    // 顯示骰子結果
    printf("骰子的結果是: %d\n", diceResult);

    // 判斷大小
    if (diceResult >= 4) {
        printf("結果是大。\n");
    }
    else {
        printf("結果是小。\n");
    }

    // 檢查玩家是否猜對
    if ((diceResult >= 4 && userGuess == 1) || (diceResult < 4 && userGuess == 0)) {
        printf("恭喜！你猜對了!獲得一點幸運\n");
        return 1;
    }
    else {
        printf("很遺憾，你猜錯了。\n");
        return 0;
    }

    
}
