#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int firstNumber, secondNumber, userGuess;

    // ��l���H���ƺؤl
    srand(time(0));

    // �ͦ��Ĥ@���H���Ʀr (1 �� 100)
    firstNumber = rand() % 100 + 1;

    // ���ܪ��a�q�ĤG�ӼƦr���j�p
    printf("�Ĥ@�ӼƦr�O: %d\n", firstNumber);
    printf("�Aı�o�ĤG�ӼƦr�|�j���٬O�p��Ĥ@�ӼƦr�H(0 = �p��, 1 = �j��): ");
    scanf("%d", &userGuess);

    // �ͦ��ĤG���H���Ʀr (1 �� 100)
    secondNumber = rand() % 100 + 1;
    printf("�ĤG�ӼƦr�O: %d\n", secondNumber);

    // �P�_���a���q���O�_���T
    if ((userGuess == 1 && secondNumber > firstNumber) || (userGuess == 0 && secondNumber < firstNumber)) {
        printf("���ߡI�A�q��F�I��o�@�I���B\n");
        return 1;
    }
    else {
        printf("�ܿ�ѡA�A�q���F�C\n");
        return 0;
    }

}
