#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	int n1;
	string name;
	
	cout << "Insira qual � o seu nome:";
	cin >> name;
	
	cout << "Informe sua idade:";
	cin >> n1;
	
	if (n1 < 18){
		cout <<name << ", voc� � menor de idade";
	}else{
		cout <<name << ", voc� � maior de idade";
	}if (n1 > 65){
		cout << ", e � uma pessoa idosa";
	}
	
	
}
