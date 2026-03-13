// Welcome to Ooglexx, for text-based games and applications! 
// Compiled By: RavagerStudio
#include "pch.h"
#include "framework.h"
#include <iostream>
#include <thread>

using std::cout;

constexpr auto RESET = "\033[0m";
constexpr auto RED = "\033[31m";

// Typewriter effect functions =======================================
void basic_type(const char* text) {
	while (*text) {
		cout << *text++;
		std::this_thread::sleep_for(std::chrono::milliseconds(40));
	}
	cout << "\n";
}

void nonewline(const char* text) {  // This function is for type effect, as the last without adding a newline at the end
	while (*text) {
		cout << *text++;
		std::this_thread::sleep_for(std::chrono::milliseconds(40));
	}
}

void quick_type(const char* text) {
	while (*text) {
		cout << *text++;
		std::this_thread::sleep_for(std::chrono::milliseconds(20));
	}
	cout << "\n";
}

void error_type(const char* text) {
	while (*text) {
		cout << RED << *text++ << RESET;
		std::this_thread::sleep_for(std::chrono::milliseconds(80));
	}
	cout << "\n";
}
// Loading bar functions =======================================
void falseloadfast() {
	cout << "Loading: [";
	for (int i = 0; i < 20; ++i) {
		cout << "#";
		std::this_thread::sleep_for(std::chrono::milliseconds(50));
	}
	cout << "]\n";
}

void falseloadslow() {
	std::cout << "Loading: [";
	for (int i = 0; i < 20; ++i) {
		cout << "#";
		std::this_thread::sleep_for(std::chrono::milliseconds(100));
	}
	cout << "]\n";
}

