#include<stdio.h>
#include<stdlib.h>

typedef struct{
	char s_name[20];//스케줄 이름
	int s_date;//시작일
	int e_date;//종료일
	int importance;//중요도
	bool complete;//완료유무
}Schedule;


int add_schedule(Schedule *p);//스케줄 추가하는 함수

void read_schedule(Schedule p);//스케줄 한개를 읽는 함수

void list_schedule(Schedule p[], int count);//스케줄을 한번에 다 보여주는 함수

int updata_schedule(Schedule *p);//스케줄을 수정하는 함수

int delete_schedule(Schedule *p);//스케줄 삭제

int select_No(Schedule p[], int count);//삭제나 수정을 하기 위해 제품을 선택하는 함수.(제품의 순서를 return한다.)

void saveFile(Schedule p[], int count);//파일을 저장하는 함수

int loadFile(Schedule p[]);//파일을 가져오는 함수 

