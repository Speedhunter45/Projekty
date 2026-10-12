#include <iostream>
using namespace std;
int main()
{
//kod 02_12
	//1_1
	/*
	for(int i = 0; i < 10; i++) {
	 cout << i << endl;
		
	}
	
	//1_2
	for (int i = 5; i <= 7; i++) {
		cout << i << endl;

	}

	//1_2_2
	for (int i = 5; i < 7; i++) {
		cout << i << endl;

	}
	
	

	//1_3
	for (int i = 0; i <= 10; i=i+2) {
		cout << i << endl;

	}

	//1_4
	for (int i = 10; i >= 0; i--) {
		cout << i << endl;

	}
	*/
	

//kod 02_13
	int fahr, celsius; //zmienne typu int 
	int start, limit, krok; //zmienne typu int 
	/*
	start = 0; //przypisz 0 do start 
	limit = 200; //przypisz 200 do limit 
	krok = 20; //przypisz 20 do krok 
	*/


	/*
	fahr = start; //przypisz wartosc start do zmiennej fahr, czyli fahr = 0 
	while (fahr <= limit) { //wykonuj petle dopoki wartosc fahr jest <= od zmiennej limit 
		celsius = 5 * (fahr - 32) / 9; //oblicz stopnie C i przypisz wynik do celsius 
		cout << fahr << "\t" << celsius << endl; //wypisz zmienne na ekran
		fahr = fahr + krok; //zwieksz wartosc zmiennej fahr o wartosc zmiennej krok
	}

	//2_2

	for(fahr == 0.0;fahr<=limit;fahr = fahr + krok){
		celsius = 5 * (fahr - 32) / 9; 
		cout << fahr << "\t" << celsius << endl;
	}
	
	//2_3
	for (fahr = 0.0; fahr <= limit; fahr = fahr + krok) 
	{
		float celsius = (5 / 9) * (fahr - 32.0);
		printf("%3.0f %6.1f \n", fahr, celsius); //B³ad z zerami
	}
	*/

	//2_4
	/*
	cin >> start;
	cin >> limit;
	cin >> krok;


	for (; start <= limit; start = start + krok) {
		celsius = 5 * (start - 32) / 9;
		cout << start << "\t" << celsius << endl;
	}
	*/

	/*
	//Zad 7
	int number =0;
	for (int i = 0; i <= 10; i++) {
		cin >> number;
		if (number >= 0) {
			cout << number << endl;
		}
	}
	*/
	/*
	//Zad 8
	for (int i = 0; i <= 100; i++) {
		if (i % 2 == 0) {
			cout << i << endl;
		}
	}
	*/
	/*
	//Zad 9
	int n;
	cin >> n;
	for (int i = 0; i <= 100; i++) {
		if (i % n == 0) {
			cout << i << endl;
		}
	}
	*/
	/*
	int n,b;
	b = 0;
	cin >> n;
	for (int i = 0; i <= 100; i++) {
		if (i % n == 0) {
			b++;
		}
	}
	cout << "liczb podzielnych przez "<< n << " jest " << b;
	*/

	//Zad 11
	int a, b;
	cin >> a;
	cin >> b;
	if (a > b) {
		for (; a > b; a++) {
			if (a % 3 == 0) {
				cout << a;
			}
		}
	}
	else
	{

	}





	return 0;
}

