// lz77.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "aho_corasick.hpp"

#define MAX_STR_LEN 16 //or 15?
#define WINDOW_LEN 64 //or 15?

std::string get_word(int c, std::string text)
{
	//find word starting at position c

}

int main()
{
	//get file into buffer
	std::ifstream file("wiki.txt");
	std::stringstream buffer;
	buffer << file.rdbuf();
	std::string full_text;

	//extract chars
	while (!buffer.eof())
	{
		char c;
		buffer.get(c);
		if (!buffer.eof())
		{
			//std::cout << c;
			full_text.append(1u, c);
		}
	}

	//TODOs
	//1. character window
	//2. substring searching within window
	//3. writing to another buffer instead of screen

	std::string output, window;
	int chars = 0;
	for (auto c : full_text) {
		window.append(&c);
		chars++;
		if (c == ' ') {
			//get next word
			std::string next_word = get_word(chars, full_text);
		}
		if (window.length() % WINDOW_LEN == 0) {
			//copy window to output, empty window
			output.append(window);
			window.clear();
		}
	}
	aho_corasick::trie trie;
	trie.insert("hers");
	trie.insert("his");
	trie.insert("she");
	trie.insert("he");
	//std::vector<aho_corasick::emit<char>> result = trie.parse_text("he");
	auto result = trie.parse_text("he he he he he");
    return 0;
}