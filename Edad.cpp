#include <iostream>
using namespace std;

int main()
{
    int edad;

    cout << "Ingrese la edad. " << endl;
    cin >> edad;

    int rango;
    if (edad < 7)
        rango = 1;
    else if (edad < 13)
        rango = 2;
    else if (edad < 17)
        rango = 3;
    else
        rango = 4;

    switch (rango)
    {
    case 1:
        cout << "(G) publico general " << endl;
        break;
    case 2:
        cout << "(PG) Guia Paternal Sugerida. " << endl;
        break;
    case 3:
        cout << "(PG-13) Material no adecuado para menores de 13 " << endl;
        break;
    case 4:
        cout << "(R) Restringido para mayores de 17 " << endl;
        break;

    default:
    cout << "Opcion no valida. " <<endl;
    
    }
    return 0;
}