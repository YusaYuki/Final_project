#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char userInput;
    clock_t start, end;
    double reactionTime;
    srand(time(0));
    // ���ܪ��a�ǳ�
    printf("��J���N��}�l�A�M��ɧֿ�J�t�@����Ӵ��դ����t�סC\n");
    printf("�����ɶ��p��0.5����ӡC\n");
    // ���ݪ��a����Ӷ}�l�p��
    scanf(" %c", &userInput);
    
    // �H�����ݤ@�p�q�ɶ��]�Ҧp1-3��A�����H������^
    int waitTime = rand() % 3 + 1;
    printf("���ݤ�... (�j�� %d ���Ы��U�t�@����)\n", waitTime);

    // �]�m�@��²�檺���� (�q�L�`���Ӽ����H�����ݮɶ�)
    start = clock();
    while ((clock() - start) / CLOCKS_PER_SEC < waitTime) {
        // �Űj���������
    }

    // ���ܪ��a����ö}�l�p��
    printf("�{�b�I�Ы��U�t�@����I\n");
    start = clock(); // �p�ɶ}�l

    // ���ݪ��a����
    scanf(" %c", &userInput);

    end = clock(); // �p�ɵ���

    // �p������ɶ�
    reactionTime = (double)(end - start) / CLOCKS_PER_SEC;

    printf("�A�������ɶ��O: %.3f ��\n", reactionTime);
    if (reactionTime <= 0.5) {
        printf("�AĹ�F��o�@�I�ӱ�\n", reactionTime);
        return 1;
    }
    if (reactionTime > 0.5) {
        printf("�A��F\n", reactionTime);
        return 0;
    }
}
