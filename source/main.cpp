#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <windows.h>

  
int game_choice;
char ch;
int cnt = 0;
int power, wisdom, speed, luck=0;


//給予種子初始數值
int generateInitial() {
	int n;
	n = rand() % 6;
	while (n < 3) {
		n = rand() % 5;
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



int main(void) {
	int x = 0;
	while (x != 1) {
		// 初始化隨機數
		srand((unsigned)time(NULL));

		printf("歡迎遊玩釋迦農場\n");
		printf("(1).開始新遊戲\n");
		printf("(2).查看圖鑑\n");
		printf("(3).退出遊戲\n");
		scanf("%d", &game_choice);

		//exit
		if (game_choice == 3) {
			system("pause");
		}

		//查看圖鑑
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
				printf("檔案開啟錯誤!!!\n");
			
			printf("\n");
		}

		//選取錯誤
		else if (game_choice != 1 && game_choice != 2 && game_choice != 3) {
			printf("輸入錯誤\n");

			printf("\n");
		}

		//開始遊戲
		else {
			//敘述遊戲背景
			x = 1;
			animate_loading();
			printf("\n");

			const char *message_story1= "這是個美好的早晨，在去北科的路上踢到了神奇的東西!";
			typewriterEffect(message_story1, 100); // 每個字元延遲 0.1 秒
			printf("\n");

			Sleep(250);

			const char* message_story2= "嗯?\n是一顆種子，撿回去種看看好了!";
			typewriterEffect(message_story2, 100); // 每個字元延遲 0.1 秒
			printf("\n");

			Sleep(250);

			const char* message_story3= "查看種子品質";
			typewriterEffect(message_story3, 100); // 每個字元延遲 0.1 秒
			printf("\n");
			printf("【===========================】\n");

			//生成數值
			power = generateInitial();
			wisdom = generateInitial();
			speed = generateInitial();
			luck = generateInitial();
			printf("﹝種子數值﹞\n力氣:  %d\n智慧:  %d\n速度:  %d\n幸運:  %d\n", power,wisdom,speed,luck);


			//種子培育(總共10次，遊玩小遊戲，獲勝加1，失敗減1)

			const char* message_story4 = "看來有10次培育的機會，就是有點麻煩，該選哪項呢???";
			typewriterEffect(message_story4, 100); // 每個字元延遲 0.1 秒
			printf("\n");




		}

	}
}




