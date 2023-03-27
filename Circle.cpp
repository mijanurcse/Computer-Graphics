#include<graphics.h>
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
   cout << "Name: Muhammad Mijanur Rahman"<<endl;
   cout << "Student ID: CSE2001019249"<<endl;
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "");


	circle(250, 200, 50);

	getch();
	closegraph();

	return 0;
}

