#pragma once
#include <fstream>
#include <iostream>
#include <string>

class FileEncrypter {
private:
	int m_key{};
	
	char transform(char ch, bool encrypt);

public: 

	FileEncrypter(int k) : m_key{ k } {}
	
	bool process(const std::string& input, const std::string& output, bool encrypt);
};
