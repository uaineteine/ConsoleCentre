#include "CentreText.h"

void centreText(char * input, int consoleSize)
{
	int l = strlen(input);
	int pos = (int)((consoleSize - l) / 2);
	for (int i = 0; i < pos; i++)
		cout << " ";

	cout << input << endl;
}

void centreText(char * input)
{
	centreText(input, defConsoleSize);
}

void centreText(string input, int consoleSize)
{
	char *ToPrint = new char[input.length() + 1];
	strcpy(ToPrint, input.c_str());
	centreText(ToPrint, consoleSize);
}

void centreText(string input)
{
	centreText(input, defConsoleSize);
}
