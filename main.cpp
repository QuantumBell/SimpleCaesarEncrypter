#include <iostream>
#include "Encoder.h"

int main() {
	FileEncrypter myVault{ 10 };

	if (myVault.process("plain.txt", "secret.txt", true)) {
		std::cout << "Encryption complete" << '\n';
	}

	if (myVault.process("secret.txt", "recovered.txt", false)) {
		std::cout << "decryption compete" << '\n';
	}

	

	return 0;
}
