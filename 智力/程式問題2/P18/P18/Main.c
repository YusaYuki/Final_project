#include <stdio.h>
#include <string.h>

int main() {
    char answer[50];
    int score = 0;

    printf("�w��Ө�s���{���ݵ��C���I\n");

    // ���D 1
    printf("���D 1: �b C �y�����A�Ʋժ����ެO�q���ӼƦr�}�l�H\n");
    printf("a. 1\nb. 0\nc. -1\nd. 2\n");
    printf("�п�J�A�����ס]a, b, c, d�^�G");
    scanf("%s", answer);
    if (strcmp(answer, "b") == 0) {
        printf("���T�I\n");
        score++;
    }
    else {
        printf("���~�A���T���׬O b.\n");
    }

    // ���D 2
    printf("���D 2: C �y������ main ��ƪ���^���O�q�`�O����H\n");
    printf("a. void\nb. char\nc. int\nd. float\n");
    printf("�п�J�A�����ס]a, b, c, d�^�G");
    scanf("%s", answer);
    if (strcmp(answer, "c") == 0) {
        printf("���T�I\n");
        score++;
    }
    else {
        printf("���~�A���T���׬O c.\n");
    }

    // ���D 3
    printf("���D 3: �ϥ� #include <stdio.h> �i�H�X�ݭ��ӼзǮw�H\n");
    printf("a. �зǿ�J��X�w\nb. �r�Ŧ�B�z�w\nc. �ƾǹB��w\nd. �ʺA�O������t�w\n");
    printf("�п�J�A�����ס]a, b, c, d�^�G");
    scanf("%s", answer);
    if (strcmp(answer, "a") == 0) {
        printf("���T�I\n");
        score++;
    }
    else {
        printf("���~�A���T���׬O a.\n");
    }

    // �`��
    printf("�C�������I�A�W�[%d�I���O�C\n", score);

    return score;
}
