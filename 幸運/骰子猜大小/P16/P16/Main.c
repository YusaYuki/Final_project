#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userGuess, diceResult;

    // ��l���H���ƺؤl
    srand(time(0));

    // ���ܪ��a��J���
    printf("�вq�j�p (0 = �p, 1 = �j): ");
    scanf("%d", &userGuess);

    // �H���ͦ���l���G (1 �� 6)
    diceResult = rand() % 6 + 1;

    // ��ܻ�l���G
    printf("��l�����G�O: %d\n", diceResult);

    // �P�_�j�p
    if (diceResult >= 4) {
        printf("���G�O�j�C\n");
    }
    else {
        printf("���G�O�p�C\n");
    }

    // �ˬd���a�O�_�q��
    if ((diceResult >= 4 && userGuess == 1) || (diceResult < 4 && userGuess == 0)) {
        printf("���ߡI�A�q��F!��o�@�I���B\n");
        return 1;
    }
    else {
        printf("�ܿ�ѡA�A�q���F�C\n");
        return 0;
    }

    
}
