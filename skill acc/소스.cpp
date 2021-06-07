#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <conio.h>
//스킬 가속, 쿨감 변환기
void main() {
	int sel;
	float acc, cdn;
	while(1){
		printf("Calculate by (1) Skill acceleration (2) Skill cooldown\nSelect (1) or (2) : ");
		scanf("%d", &sel);
		if (sel == 1) {
			printf("\nEnter skill acceleration : ");
			scanf("%f", &acc);
			printf("- Calculated skill cooldown : %.1f\n\nPress any key to reset / Space_bar to end\n", 100 - (1 - acc / (acc + 100)) * 100);
			if (_getch() == 32) break;
			system("cls");
		}
		else if (sel == 2) {
			printf("\nEnter skill cooldown : ");
			scanf("%f", &cdn);
			printf("- Calculated skill acceleration : %.0f\n\nPress any key to reset / Space_bar to end\n", 100 * cdn / (100 - cdn));
			if (_getch() == 32) break;
			system("cls");
		}
		else {
			system("cls");
		}
	}

}