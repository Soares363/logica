#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
    float nota1, nota2, 
          nota3, media;

    cout << "Nota 1: ";
    cin >> nota1;

    cout << "Nota 2: ";
    cin >> nota2;
    
    cout << "Nota 3: ";
    cin >> nota3;

    media = (nota1+nota2+nota3)/3;

    cout << "\nM�dia: " << media;
    
    if(media >= 7){
    	cout << "\nVoc� passou!";
	} else if (media < 5){
		cout << "\nVoc� reprovou!";
	}else if(media < 7){
		cout << "\nVoc� est� de recupera��o!";
	}


    return 0;
}
