#include "Encoder.h"
#include <iostream>
#include <fstream>
#include <string>

// characters + key will be displayed as an ascii
char FileEncrypter:: transform(char ch, bool encrypt) {
	if (encrypt) {
		return ch + m_key;
	}
	else return ch - m_key;
}

bool FileEncrypter::process(const std::string& inputPath, const std::string& outputPath, bool encrypt) {
	std::ifstream inFile(inputPath); //create a variable named infile that will look for the file name in "inputPath"
	std::ofstream outFile(outputPath); // same as the above, but this is creating the output file that it will output the transformed text on.

	if (!inFile.is_open() || !outFile.is_open()) { //is_open checks if the file is valid, if it exists, this is checking for validity.
		return false;
	}

	char ch{};

	while (inFile.get(ch)) {
		outFile << transform(ch, encrypt); // insert contents from transform into the output file.
	}

	inFile.close();
	outFile.close();
	return true;
}d
