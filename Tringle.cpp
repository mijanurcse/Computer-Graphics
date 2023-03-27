
#include<graphics.h>
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int gd,gm;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"");

    setcolor(LIGHTBLUE);
    line(50,100,100,100);
    line(100,100,100,50);
    line(50,100,100,50);

    getchar();
    return 0;
}
