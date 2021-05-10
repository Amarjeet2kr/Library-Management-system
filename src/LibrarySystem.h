#pragma once
#include<iostream>
#include<string>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>
#include<fstream>

void adminLogin();
void gotoxy (int x, int y);
int t(void);
void mainMenu();
void addBooks();
struct books
{
    int bid;
    char bname[20];
    char author[20];
    int quantity;
};
struct books b;

