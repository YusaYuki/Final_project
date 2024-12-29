#include <stdio.h>
#include <string.h>

int main() {
    char answer[50];
    int score = 0;

    printf("歡迎來到全新的程式問答遊戲！\n");

    // 問題 1
    printf("問題 1: 以下哪個運算符號用於位元右移運算？\n");
    printf("a. <<\nb. >>\nc. &\nd. |\n");
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
    printf("問題 2: 在 C 語言中，函數的預設返回型別是什麼？\n");
    printf("a. int\nb. void\nc. char\nd. float\n");
    printf("請輸入你的答案（a, b, c, d）：");
    scanf("%s", answer);
    if (strcmp(answer, "a") == 0) {
        printf("正確！\n");
        score++;
    }
    else {
        printf("錯誤，正確答案是 a.\n");
    }

    // 問題 3
    printf("問題 3: 使用 malloc 函數分配的記憶體應該由哪個函數來釋放？\n");
    printf("a. free\nb. delete\nc. release\nd. remove\n");
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
