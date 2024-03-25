#include <iostream>

using namespace std;

bool czyPierwsza(int n) {
	if (n == 0 || n == 1)
		return false;
	if (n == 2)
		return true;
	if (n%2 == 0) 
		return false;
	
	for (int i=3; i*i<=n; i+=2) {
		if (n%i == 0)
			return false;
	}
	
	return true;
}

int main() {
//    int a, b;
//    cout << "Podaj liczbe calkowita ";
//    cin >> a >> b;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "1. Pierwszosc" << endl;
        cout << "0. Wyjscie" << endl;
        cin >> wyjscie;
        
        if (wyjscie == 1) {
        	int n;
        	cout<<"Podaj liczbe: ";
        	cin>>n;
        	if (n < 0)
				cout<<"Nieprawidlowy argument."<<endl;
        	else if (czyPierwsza(n))
        		cout<<"Podana liczba jest pierwsza."<<endl;
        	else
        		cout<<"Podana liczba nie jest pierwsza."<<endl;
		}
    } while(wyjscie != 0);
    return 0;
}
