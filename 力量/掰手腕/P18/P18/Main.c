#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i,playerStrength, opponentStrength;

    // ��l���H���ƺؤl
    srand(time(0));
    printf("�T��ùC��");
    // ���a�O�q�� (1 �� 100)
    printf("��J���B�Ʀr�A�N��o�@�ӤO�q�� (1 �� 100): ");
    scanf("%d",&i);
    playerStrength= rand() % 100 + 1;

    // �H���ͦ���⪺�O�q�� (1 �� 100)
    opponentStrength = rand() % 100 + 1;

    // ������誺�O�q��
    printf("�A���O�q��: %d\n", playerStrength);
    printf("��⪺�O�q��: %d\n", opponentStrength);

    // ����O�q��
    if (playerStrength > opponentStrength) {
        printf("���ߡI�AĹ�F�T��ä��ɡI��o�@�I�O�q\n");
        return 1;
    }
    else if (playerStrength < opponentStrength) {
        printf("�ܿ�ѡA�A��F�C����j�j�I\n");
        return 0;
    }
    else {
        printf("�����I����O�q�۵��I\n");
        return 0;
    }

    
}
