#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float capital[20], juros[20], jurosIn, montante[20], meses, adic;
	
	cout<<"Insira o valor inicial: ";
	cin>>capital[0];
	cout<<"Insira a quantidade de meses: ";
	cin>>meses;
	cout<<"Insira a porcentagem de juros: ";
	cin>>jurosIn;
	jurosIn = jurosIn/100;
	cout<<"Digite o valor que vai ser adicionado todo mês: ";
	cin>>adic;
	
	//Cálculo
	
	
	
	juros[0] = jurosIn;
	juros[0] += 1;
	montante[0] = (capital[0]) * juros[0];
	
	cout<<"\n"<<montante[0];
	
	
	for(int i = 1; i < meses; i++)
	{
		montante[i-1] += 500;
		juros[i] = jurosIn;
		juros[i] += 1;
		
		montante[i] = montante[i-1] * juros[i];
		   	
		cout<<"\n"<<montante[i];
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
