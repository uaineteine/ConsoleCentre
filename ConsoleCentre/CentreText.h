#pragma once

#include <iostream>
#include <string>

using namespace std;

const int defConsoleSize = 80;					//width of console
void centreText(char* input, int consoleSize);	//to give a custom width of console
void centreText(char* input);					//use default console width
void centreText(string input, int consoleSize);	//to give a custom width of console
void centreText(string input);					//use default console width