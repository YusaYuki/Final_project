#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <windows.h>

  
int game_choice;
char ch;
int cnt = 0;
int power, wisdom, speed, luck=0;


//�����ؤl��l�ƭ�
int generateInitial() {
	int n;
	n = rand() % 6;
	while (n < 3) {
		n = rand() % 5;
	}
	return n;
}

//���J�ʵe
void animate_loading() {
		printf("Loading");
		for (int j = 0; j < 3; j++) {
			printf(".");
			fflush(stdout);
			Sleep(200);  // �C������0.2��
		}
}

//���r����X�S��
void typewriterEffect(const char* text, int delays) {
	while (*text) {
		putchar(*text++);
		fflush(stdout);       // �T�O�ߧY��X
		Sleep(delays); // �C�Ӧr������
	}
}



int main(void) {
	int x = 0;
	while (x != 1) {
		// ��l���H����
		srand((unsigned)time(NULL));

		printf("�w��C�����{�A��\n");
		printf("(1).�}�l�s�C��\n");
		printf("(2).�d�ݹ�Ų\n");
		printf("(3).�h�X�C��\n");
		scanf("%d", &game_choice);

		//exit
		if (game_choice == 3) {
			system("pause");
		}

		//�d�ݹ�Ų
		else if(game_choice == 2) {
			FILE* fptr;
			fptr = fopen("index.txt","r");
			if (fptr != NULL) {
				while ((ch = getc(fptr)) != EOF) {
					printf("%c", ch);
					cnt++;
				}
				fclose(fptr);
			}
			else
				printf("�ɮ׶}�ҿ��~!!!\n");
			
			printf("\n");
		}

		//������~
		else if (game_choice != 1 && game_choice != 2 && game_choice != 3) {
			printf("��J���~\n");

			printf("\n");
		}

		//�}�l�C��
		else {
			//�ԭz�C���I��
			x = 1;
			animate_loading();
			printf("\n");

			const char *message_story1= "�o�O�Ӭ��n������A�b�h�_�쪺���W���F���_���F��!";
			typewriterEffect(message_story1, 100); // �C�Ӧr������ 0.1 ��
			printf("\n");

			Sleep(250);

			const char* message_story2= "��?\n�O�@���ؤl�A�ߦ^�h�جݬݦn�F!";
			typewriterEffect(message_story2, 100); // �C�Ӧr������ 0.1 ��
			printf("\n");

			Sleep(250);

			const char* message_story3= "�d�ݺؤl�~��";
			typewriterEffect(message_story3, 100); // �C�Ӧr������ 0.1 ��
			printf("\n");
			printf("�i===========================�j\n");

			//�ͦ��ƭ�
			power = generateInitial();
			wisdom = generateInitial();
			speed = generateInitial();
			luck = generateInitial();
			printf("���ؤl�ƭȡ�\n�O��:  %d\n���z:  %d\n�t��:  %d\n���B:  %d\n", power,wisdom,speed,luck);


			//�ؤl���|(�`�@10���A�C���p�C���A��ӥ[1�A���Ѵ�1)

			const char* message_story4 = "�ݨӦ�10�����|�����|�A�N�O���I�·СA�ӿ�����O???";
			typewriterEffect(message_story4, 100); // �C�Ӧr������ 0.1 ��
			printf("\n");




		}

	}
}




