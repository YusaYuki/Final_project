#include <stdio.h>
#include <string.h>

int main() {
    char answer[50];
    int score = 0;

    printf("�w��Ө���s���{���ݵ��C���I\n");

    // ���D 1
    printf("���D 1: �H�U���ӹB��Ÿ��Ω�줸�k���B��H\n");
    printf("a. <<\nb. >>\nc. &\nd. |\n");
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
    printf("���D 2: �b C �y�����A��ƪ��w�]��^���O�O����H\n");
    printf("a. int\nb. void\nc. char\nd. float\n");
    printf("�п�J�A�����ס]a, b, c, d�^�G");
    scanf("%s", answer);
    if (strcmp(answer, "a") == 0) {
        printf("���T�I\n");
        score++;
    }
    else {
        printf("���~�A���T���׬O a.\n");
    }

    // ���D 3
    printf("���D 3: �ϥ� malloc ��Ƥ��t���O�������ӥѭ��Ө�ƨ�����H\n");
    printf("a. free\nb. delete\nc. release\nd. remove\n");
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
