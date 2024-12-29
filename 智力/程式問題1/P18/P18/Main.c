#include <stdio.h>
#include <string.h>

int main() {
    char answer[50];
    int score = 0;

    printf("歡迎來到程式問答遊戲！\n");
    printf("答對一題增加一點智力！\n");
    // 問題 1
    printf("問題 1: C 語言中的 printf 函數用來做什麼？\n");
    printf("a. 讀取輸入\nb. 顯示輸出\nc. 宣告變數\nd. 結束程式\n");
    printf("請輸入你的答案（a, b, c, d）：");
    scanf("%s", answer);
    if (strcmp(answer, "b") == 0) {
        printf("正確！\n");
        score++;
    }
    else {
        printf("錯誤，正確答案是 b.\n");
    }

    // 問題 2
    printf("問題 2: 哪個標頭檔案包含了 malloc 函數的宣告？\n");
    printf("a. stdio.h\nb. string.h\nc. stdlib.h\nd. math.h\n");
    printf("請輸入你的答案（a, b, c, d）：");
    scanf("%s", answer);
    if (strcmp(answer, "c") == 0) {
        printf("正確！\n");
        score++;
    }
    else {
        printf("錯誤，正確答案是 c.\n");
    }

    // 問題 3
    printf("問題 3: C 語言中哪個運算符號用於邏輯且運算？\n");
    printf("a. &&\nb. ||\nc. &\nd. ^\n");
    printf("請輸入你的答案（a, b, c, d）：");
    scanf("%s", answer);
    if (strcmp(answer, "a") == 0) {
        printf("正確！\n");
        score++;
    }
    else {
        printf("錯誤，正確答案是 a.\n");
    }

    // 總結
    printf("遊戲結束！你增加%d點智力。\n", score);

    return score;
}
