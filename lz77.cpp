// lz77.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

#define MAX_STR_LEN 16 //or 15?
#define MAX_CHAR_JUMP 16 //or 15?

int main()
{
	//get file into buffer
	std::ifstream file("wiki.txt");
	std::stringstream buffer;
	buffer << file.rdbuf();

	//extract chars
	while (!buffer.eof())
	{
		char c;
		buffer.get(c);
		if (!buffer.eof())
		{
			std::cout << c;
		}
	}

	//TODOs
	//1. character window
	//2. substring searching within window
	//3. writing to another buffer instead of screen
    return 0;
}