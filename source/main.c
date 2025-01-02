#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include <locale.h>  // 設定本地化
#include <windows.h> // 設定延遲
#include "C:\Users\danie\Desktop\Final_project\include\game_index.h"





//規避 c4996 錯誤
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


//隨機遊戲
int random_game() {
	int x;
	x = rand() % 3;
	return x;
}


//種子的分級
void rank(int x) {
	printf("總和: %d\n", x);
	printf("品質:");
	
	if (x > 17) {
		printf("是金色傳說!!!!!");
		sd.s_rank = 4;
	}
	//1617
	else if (18 > x && x>15) {
		printf("是個不錯的種子");
		sd.s_rank = 3;
	}
	//1415
	else if (16 > x && x > 13) {
		printf("跟我一樣普通呢");
		sd.s_rank = 2;
	}
	//1213
	else if (14 > x && x > 11){
		printf("挖哩，這還能種嗎");
		sd.s_rank = 1;
	}
	printf("\n");
	
}

//清除字串	
void cleanstring(const char *text,int delays) {
	
	setlocale(LC_ALL, "");
	int length = 0;
	wchar_t wtext[512];  // 寬字元陣列
	mbstowcs(wtext, text, sizeof(wtext));  // 將多位元組字串轉換為寬字元
	length = wcslen(wtext);  // 計算寬字元字串的長度
	
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

//給予種子初始數值
int generateInitial() {
	int n;
	n = rand() % 6;
	while (n < 3) {
		n = rand() % 6;
	}
	return n;
}


//載入動畫
void animate_loading() {
		printf("Loading");
		for (int j = 0; j < 3; j++) {
			printf(".");
			fflush(stdout);
			Sleep(200);  // 每次延遲0.2秒
		}
}

//打字機輸出特效
void typewriterEffect(const char* text, int delays) {
	while (*text) {
		putchar(*text++);
		fflush(stdout);       // 確保立即輸出
		Sleep(delays); // 每個字元延遲
	}
	
}



void joke_quest() {
	int ans;
	int n = 0;
	int k = 0;
	printf("四張周杰倫的票可以換什麼?\n");
	printf("(1).聽四場周杰倫的演唱會\n(2).換一張月杰倫的票\n");
	scanf("%d", &ans);

	if (ans == 2) {
		n++;
	}
	k++;
	if (k == 1) {
		printf("為什麼電腦一直都不快樂?\n");
		printf("(1).因為它有D槽\n(2).程式找不到BUG\n");
		scanf("%d", &ans);

		if (ans == 1) {
			n++;
		}
	}
	k++;
	if (k == 2) {
		printf("哪一種生物的名字裡面有蟹而且是截肢動物?\n");
		printf("(1).謝坤山\n(2).螃蟹\n");
		scanf("%d", &ans);

		if (ans == 1) {
			n++;
		}
	}

	joke=n;
}

int main(void) {

	int x = 0;
	printf("歡迎遊玩釋迦農場\n");
	while (x != 1) {
		// 初始化隨機數
		srand((unsigned)time(NULL));

		printf("(1).開始新遊戲\n");
		printf("(2).查看圖鑑\n");
		printf("(3).退出遊戲\n");
		printf("選擇:  ");
		scanf_s("%d", &game_choice);

		//exit
		if (game_choice == 3) {
			system("pause");
		}

		//查看圖鑑
		else if (game_choice == 2) {
			setlocale(LC_ALL, "zh_TW.UTF-8");  // 設定地區
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
				printf("檔案開啟錯誤!!!");
			printf("\n");

			printf("\n");
		}

		//選取錯誤
		else if (game_choice != 1 && game_choice != 2 && game_choice != 3) {
			printf("輸入錯誤");

			printf("\n");
		}

		//開始遊戲
		else if(game_choice == 1) {
			//敘述遊戲背景
			x = 1;
			animate_loading();
			const char* message_story0 = "loading...";
			cleanstring(message_story0, 10);
			printf("==========GAME START==========");
			printf("\n");

			const char* message_story1 = "這是個美好的早晨";
			typewriterEffect(message_story1, 50); // 每個字元延遲 0.05 秒
			cleanstring(message_story1, 100);

			const char* message_story1_5 = "在去北科的路上踢到了神奇的東西!";
			typewriterEffect(message_story1_5, 50); // 每個字元延遲 0.05 秒
			cleanstring(message_story1_5, 100);

			const char* message_story2 = "嗯? 是一顆種子，撿回去種看看好了!";
			typewriterEffect(message_story2, 50); // 每個字元延遲 0.05 秒
			cleanstring(message_story2, 100);


			Sleep(500);

			const char* message_story3 = "查看種子品質";
			typewriterEffect(message_story3, 50); // 每個字元延遲 0.05 秒
			printf("\n");
			printf("【===========================】\n");

			//生成數值
			sd.power = generateInitial();
			sd.wisdom = generateInitial();
			sd.speed = generateInitial();
			sd.luck = generateInitial();
			sd.power_o = sd.power;
			sd.wisdom_o = sd.wisdom;
			sd.speed_o = sd.speed;
			sd.luck_o = sd.luck;




			printf("﹝種子數值﹞\n力氣:  %d\n智慧:  %d\n速度:  %d\n幸運:  %d\n", sd.power, sd.wisdom, sd.speed, sd.luck);


			sd.total = sd.power + sd.wisdom + sd.speed + sd.luck;
			rank(sd.total);

			//種子培育(總共10次，遊玩小遊戲，獲勝加1，失敗減1)
			const char* message_story4 = "看來有10次培育的機會，就是有點麻煩，該選哪項呢???";
			typewriterEffect(message_story4, 100); // 每個字元延遲 0.1 秒
			printf("\n");
			printf("\n");

			int round = 1;
			while (round < 11) {

				printf("(11).力氣\n");
				printf("(22).智慧\n");
				printf("(33).速度\n");
				printf("(44).幸運\n");
				printf("選擇:  ");


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
					printf("輸入錯誤\n");
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
	printf("﹝培育後種子數值﹞\n力氣:  %d\n智慧:  %d\n速度:  %d\n幸運:  %d\n", sd.power, sd.wisdom, sd.speed, sd.luck);
	sd.total = sd.power + sd.wisdom + sd.speed + sd.luck;
	joke_quest();
	printf("培育出:");

	
	
	if (sd.speed > sd.power && sd.speed > sd.luck && sd.speed > sd.wisdom && sd.speed > sd.speed_o) {
		printf("台北不釋我的迦"); 
	}
	else if (sd.wisdom > sd.power && sd.wisdom > sd.luck && sd.wisdom > sd.speed && sd.wisdom > sd.wisdom_o && joke == 3) {
		printf("隱藏版 黃釋迦");
	}
	else if (sd.power > sd.speed && sd.power > sd.luck && sd.power > sd.wisdom && sd.power > sd.power_o) {
		printf("乳香釋迦"); 
	}
	else if (sd.luck > sd.power && sd.luck > sd.speed && sd.luck > sd.wisdom && sd.luck > sd.luck_o) {
		printf("貴族釋迦"); 
	}
	else if (sd.wisdom > sd.power && sd.wisdom > sd.luck && sd.wisdom > sd.speed && sd.wisdom > sd.wisdom_o) {
		printf("知釋絕迦"); ;
	}
	else if (sd.wisdom_o > sd.wisdom && sd.luck_o > sd.luck && sd.speed_o > sd.speed && sd.power_o > sd.power) {
		printf("我釋甲迦"); ;
	}
	else {
		printf("普通釋迦");
	}
	printf("\n");
	system("pause");	
	return 0;

}




