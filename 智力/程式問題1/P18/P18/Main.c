#include <stdio.h>
#include <string.h>

int main() {
    char answer[50];
    int score = 0;

    printf("�w��Ө�{���ݵ��C���I\n");
    printf("����@�D�W�[�@�I���O�I\n");
    // ���D 1
    printf("���D 1: C �y������ printf ��ƥΨӰ�����H\n");
    printf("a. Ū����J\nb. ��ܿ�X\nc. �ŧi�ܼ�\nd. �����{��\n");
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
    printf("���D 2: ���Ӽ��Y�ɮץ]�t�F malloc ��ƪ��ŧi�H\n");
    printf("a. stdio.h\nb. string.h\nc. stdlib.h\nd. math.h\n");
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
    printf("���D 3: C �y�������ӹB��Ÿ��Ω��޿�B�B��H\n");
    printf("a. &&\nb. ||\nc. &\nd. ^\n");
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
