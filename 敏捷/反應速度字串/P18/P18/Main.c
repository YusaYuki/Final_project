#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    char generatedNumber[6], userInput[6];
    clock_t start, end;
    double reactionTime;

    // ��l���H���ƺؤl
    srand(time(0));

    // �ͦ��@���H����5��Ʀr
    for (int i = 0; i < 5; i++) {
        generatedNumber[i] = '0' + rand() % 10;  // �H���ͦ� 0-9 ���Ʀr
    }
    generatedNumber[5] = '\0';  // �r�굲����

    int waitTime = 3;
    printf("���ݤ�... (3���п�J���w�Ʀr)\n", waitTime);
    printf("�����ɶ��p��5�����");
    // �]�m�@��²�檺���� (�q�L�`���Ӽ����H�����ݮɶ�)
    start = clock();
    while ((clock() - start) / CLOCKS_PER_SEC < waitTime) {
        // �Űj���������
    }
    // ����H���ͦ����Ʀr
    printf("�Чֳt��J�H�U�Ʀr��: %s\n", generatedNumber);

    // �}�l�p��
    start = clock();

    // ���ݪ��a��J
    scanf("%s", userInput);

    // �����p��
    end = clock();

    // �p������ɶ�
    reactionTime = (double)(end - start) / CLOCKS_PER_SEC;

    // �ˬd���a��J�O�_���T
    if (strcmp(generatedNumber, userInput) == 0) {
        printf("��J���T�I�A�������ɶ��O: %.3f ��\n", reactionTime);
        if (reactionTime < 5) {
            printf("�AĹ�F!��o�@�I�ӱ�");
            return 1;
        }
        else {
            printf("�A��F");
            return 0;
        }
    }
    else {
        printf("��J���~�I���T���Ʀr��O: %s\n", generatedNumber);
        printf("�A��F");
        return 0;
    }

}
