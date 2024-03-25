#include <iostream>

using namespace std;

unsigned long long silnia(int n) {
	if (n == 0)
		return 1;
	if (n > 1)
		return n * silnia(n-1);
	return n;
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
        cout << "1. Silnia" << endl;
        cout << "0. Wyjscie" << endl;
        cin >> wyjscie;
        
        if (wyjscie == 1) {
        	int n;
        	cout<<"\nPodaj liczbe: ";
        	cin>>n;
        	if (n < 0) cout<<"Niepoprawny argument."<<endl;
        	else cout<<n<<"! = "<<silnia(n)<<endl;
		}
    } while(wyjscie != 0);
    return 0;
}
