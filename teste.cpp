#include <iostream>
#include <string>

void numero2() {
	int numero;
	std::cout << "Qual numero vc quer" << std::endl;
	std::cin >> numero;
	std::cout << "seu numero eh " << numero << std::endl;
	if (numero >= 24) {
		std::cout << "Seu numero eh igual ou maior que 24" << "\n";
	}
	else {
		std::cout << "Seu numero eh menor que 24" << std::endl;
	}
}

void nomes (){
	std:: string nome;
	std::cout << "qual o seu nome" << std::endl;
	std::cin >> nome;
	
 // aqui vou fazer um teste para encontrar uma letra na informação que o usuario deu
	if (nome.find('a') != std::string::npos) {
		std::cout << "A palavra que vc digitou tem a letra 'a'" << std::endl;
	}
	else {
		std::cout << "A palavra que vc digitou nao tem a letra 'a'" << std::endl;
	}
}

int main() {
	nomes();
	return 0;
}