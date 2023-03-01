#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
    float nota1, nota2, 
          nota3, media;

    cout << "Nota 1: ";
    cin >> nota1,nota2,nota3;

 

    media = (nota1+nota2+nota3);

    cout << "\nMédia: " << media;
    
    
}
