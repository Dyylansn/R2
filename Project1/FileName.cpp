#include <iostream>  
#include <string>  

using namespace std;

int main() {

    string parell = "parell";
    string senar = "senar";

    bool* vector = new bool[10];

    for (int i = 0; i < 10; i++)
    {
        vector[i] = (i % 2 == 0);
    }

    while (true)
    {
        int numero;
        cout << "Introdueix un numero del 0 al 9: ";
        cin >> numero;

        if (numero < 0 || numero > 9)
        {
            cout << "Has de posar un numero del 0 al 9!!" << endl;
        }
        else if (vector[numero] == true)
        {
            cout << numero << " es " << parell << endl;
        }
        else
        {
            cout << numero << " es " << senar << endl;
        }
    }

    delete[] vector;
}
