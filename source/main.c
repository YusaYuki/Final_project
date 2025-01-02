#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include <locale.h>  // �]�w���a��
#include <windows.h> // �]�w����
#include "C:\Users\danie\Desktop\Final_project\include\game_index.h"





//�W�� c4996 ���~
#define _CRT_SECURE_NO_WARNINGS
#pragma warning( disable : 4996)



#define MAX_RESULTS 100


  
int game_choice;
int practice_choice;
char ch;
int cnt = 0;
int power_r;
int wisdom_r;
int speed_r;
int luck_r;
int joke;
char seed_plant;

typedef struct {
	char type[50];
	int count;
} Result;


typedef struct seed_status
{

	int power ;
	int wisdom;
	int speed;
	int luck;
	int power_o;
	int wisdom_o;
	int speed_o;
	int luck_o;
	int total;
	int s_rank;

} seed;
seed sd;


//�H���C��
int random_game() {
	int x;
	x = rand() % 3;
	return x;
}


//�ؤl������
void rank(int x) {
	printf("�`�M: %d\n", x);
	printf("�~��:");
	
	if (x > 17) {
		printf("�O����ǻ�!!!!!");
		sd.s_rank = 4;
	}
	//1617
	else if (18 > x && x>15) {
		printf("�O�Ӥ������ؤl");
		sd.s_rank = 3;
	}
	//1415
	else if (16 > x && x > 13) {
		printf("��ڤ@�˴��q�O");
		sd.s_rank = 2;
	}
	//1213
	else if (14 > x && x > 11){
		printf("�����A�o�ٯ�ض�");
		sd.s_rank = 1;
	}
	printf("\n");
	
}

//�M���r��	
void cleanstring(const char *text,int delays) {
	
	setlocale(LC_ALL, "");
	int length = 0;
	wchar_t wtext[512];  // �e�r���}�C
	mbstowcs(wtext, text, sizeof(wtext));  // �N�h�줸�զr���ഫ���e�r��
	length = wcslen(wtext);  // �p��e�r���r�ꪺ����
	
	Sleep(350);
	for (int i = length; i >= 0; i--) {
		printf("\b \b");
		Sleep(delays);
		printf("\b \b");
		Sleep(delays);
		printf("\b \b");
		fflush(stdout);
		
	}
	
}

//�����ؤl��l�ƭ�
int generateInitial() {
	int n;
	n = rand() % 6;
	while (n < 3) {
		n = rand() % 6;
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



void joke_quest() {
	int ans;
	int n = 0;
	int k = 0;
	printf("�|�i�P�N�۪����i�H������?\n");
	printf("(1).ť�|���P�N�۪��t�۷|\n(2).���@�i��N�۪���\n");
	scanf("%d", &ans);

	if (ans == 2) {
		n++;
	}
	k++;
	if (k == 1) {
		printf("������q���@�������ּ�?\n");
		printf("(1).�]������D��\n(2).�{���䤣��BUG\n");
		scanf("%d", &ans);

		if (ans == 1) {
			n++;
		}
	}
	k++;
	if (k == 2) {
		printf("���@�إͪ����W�r�̭����ɦӥB�O�I�ϰʪ�?\n");
		printf("(1).�©[�s\n(2).����\n");
		scanf("%d", &ans);

		if (ans == 1) {
			n++;
		}
	}

	joke=n;
}

int main(void) {

	int x = 0;
	printf("�w��C�����{�A��\n");
	while (x != 1) {
		// ��l���H����
		srand((unsigned)time(NULL));

		printf("(1).�}�l�s�C��\n");
		printf("(2).�d�ݹ�Ų\n");
		printf("(3).�h�X�C��\n");
		printf("���:  ");
		scanf_s("%d", &game_choice);

		//exit
		if (game_choice == 3) {
			system("pause");
		}

		//�d�ݹ�Ų
		else if (game_choice == 2) {
			setlocale(LC_ALL, "zh_TW.UTF-8");  // �]�w�a��
			FILE* fptr;
			fptr = fopen("index.txt", "r");
			if (fptr != NULL) {
				while ((ch = getc(fptr)) != EOF) {
					printf("%c", ch);
					cnt++;
				}
			
			
				fclose(fptr);
				setlocale(LC_ALL, "");
			}
			else
				printf("�ɮ׶}�ҿ��~!!!");
			printf("\n");

			printf("\n");
		}

		//������~
		else if (game_choice != 1 && game_choice != 2 && game_choice != 3) {
			printf("��J���~");

			printf("\n");
		}

		//�}�l�C��
		else if(game_choice == 1) {
			//�ԭz�C���I��
			x = 1;
			animate_loading();
			const char* message_story0 = "loading...";
			cleanstring(message_story0, 10);
			printf("==========GAME START==========");
			printf("\n");

			const char* message_story1 = "�o�O�Ӭ��n������";
			typewriterEffect(message_story1, 50); // �C�Ӧr������ 0.05 ��
			cleanstring(message_story1, 100);

			const char* message_story1_5 = "�b�h�_�쪺���W���F���_���F��!";
			typewriterEffect(message_story1_5, 50); // �C�Ӧr������ 0.05 ��
			cleanstring(message_story1_5, 100);

			const char* message_story2 = "��? �O�@���ؤl�A�ߦ^�h�جݬݦn�F!";
			typewriterEffect(message_story2, 50); // �C�Ӧr������ 0.05 ��
			cleanstring(message_story2, 100);


			Sleep(500);

			const char* message_story3 = "�d�ݺؤl�~��";
			typewriterEffect(message_story3, 50); // �C�Ӧr������ 0.05 ��
			printf("\n");
			printf("�i===========================�j\n");

			//�ͦ��ƭ�
			sd.power = generateInitial();
			sd.wisdom = generateInitial();
			sd.speed = generateInitial();
			sd.luck = generateInitial();
			sd.power_o = sd.power;
			sd.wisdom_o = sd.wisdom;
			sd.speed_o = sd.speed;
			sd.luck_o = sd.luck;




			printf("���ؤl�ƭȡ�\n�O��:  %d\n���z:  %d\n�t��:  %d\n���B:  %d\n", sd.power, sd.wisdom, sd.speed, sd.luck);


			sd.total = sd.power + sd.wisdom + sd.speed + sd.luck;
			rank(sd.total);

			//�ؤl���|(�`�@10���A�C���p�C���A��ӥ[1�A���Ѵ�1)
			const char* message_story4 = "�ݨӦ�10�����|�����|�A�N�O���I�·СA�ӿ�����O???";
			typewriterEffect(message_story4, 100); // �C�Ӧr������ 0.1 ��
			printf("\n");
			printf("\n");

			int round = 1;
			while (round < 11) {

				printf("(11).�O��\n");
				printf("(22).���z\n");
				printf("(33).�t��\n");
				printf("(44).���B\n");
				printf("���:  ");


				scanf("%d", &practice_choice);

				switch (practice_choice) {

				case 11:


					power_r = random_game();

					switch (power_r) {

					case 0:
						x = power_game_1();
						break;
					case 1:
						x = power_game_2();
						break;
					case 2:
						x = power_game_3();
						break;
					default:
						break;
					}

					if (x == 0) {
						sd.power -= 1;
					}
					else if (x == 1) {
						sd.power += 1;
					}
					else {
						sd.power += 0;
					}

				
					break;


				case 22:

					wisdom_r = random_game();

					switch (wisdom_r) {

					case 0:
						x = wisdom_game_1();
						break;
					case 1:
						x = wisdom_game_2();
						break;
					case 2:
						x = wisdom_game_3();
						break;
					default:
						break;
					}

					if (x == 0) {
						sd.wisdom -= 1;
					}
					else if (x == 1) {
						sd.wisdom += 1;
					}
					else {
						sd.wisdom += 0;
					}

					
					break;


				case 33:

					speed_r = random_game();

					switch (speed_r) {

					case 0:
						x = speed_game_1();
						break;
					case 1:
						x = speed_game_2();
						break;
					case 2:
						x = speed_game_3();
						break;
					default:
						break;
					}

					if (x == 0) {
						sd.speed -= 1;
					}
					else if (x == 1) {
						sd.speed += 1;
					}
					else {
						sd.speed += 0;
					}

					
					break;


				case 44:

					luck_r = random_game();

					switch (luck_r) {

					case 0:
						x = luck_game_1();
						break;
					case 1:
						x = luck_game_2();
						break;
					case 2:
						x = luck_game_3();
						break;
					default:
						break;
					}

					if (x == 0) {
						sd.luck -= 1;
					}
					else if (x == 1) {
						sd.luck += 1;
					}
					else {
						sd.luck += 0;
					}


					break;

				default:
					printf("\n");
					printf("��J���~\n");
					printf("\n");
					round -= 1;
					break;
				}

				round += 1;

			}
			break;
		}

		

	}
	printf("\n");
	printf("�����|��ؤl�ƭȡ�\n�O��:  %d\n���z:  %d\n�t��:  %d\n���B:  %d\n", sd.power, sd.wisdom, sd.speed, sd.luck);
	sd.total = sd.power + sd.wisdom + sd.speed + sd.luck;
	joke_quest();
	printf("���|�X:");

	
	
	if (sd.speed > sd.power && sd.speed > sd.luck && sd.speed > sd.wisdom && sd.speed > sd.speed_o) {
		printf("�x�_�����ڪ��{"); 
	}
	else if (sd.wisdom > sd.power && sd.wisdom > sd.luck && sd.wisdom > sd.speed && sd.wisdom > sd.wisdom_o && joke == 3) {
		printf("���ê� �����{");
	}
	else if (sd.power > sd.speed && sd.power > sd.luck && sd.power > sd.wisdom && sd.power > sd.power_o) {
		printf("�ŭ����{"); 
	}
	else if (sd.luck > sd.power && sd.luck > sd.speed && sd.luck > sd.wisdom && sd.luck > sd.luck_o) {
		printf("�Q�����{"); 
	}
	else if (sd.wisdom > sd.power && sd.wisdom > sd.luck && sd.wisdom > sd.speed && sd.wisdom > sd.wisdom_o) {
		printf("�������{"); ;
	}
	else if (sd.wisdom_o > sd.wisdom && sd.luck_o > sd.luck && sd.speed_o > sd.speed && sd.power_o > sd.power) {
		printf("�����ҭ{"); ;
	}
	else {
		printf("���q���{");
	}
	printf("\n");
	system("pause");	
	return 0;

}




