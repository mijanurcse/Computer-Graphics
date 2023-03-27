
#include<graphics.h>
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    cout << "Name: Muhammad Mijanur Rahman"<<endl;
    cout << "Student ID: CSE2001019249"<<endl;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

   ///rectangle(100,50,300,150);
   rectangle(100,150,200,250); //square

    getchar();
    closegraph();
    return 0;
}
