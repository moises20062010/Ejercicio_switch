#include <iostream>
#include <string>
using namespace std;

int main()
{
    int dia;

    cout << "Pon un dia de la semana para saber tu horario. " << endl;
    cout << "1. Lunes" <<endl;
    cout << "2. Martes" <<endl;
    cout << "3. Miercoles" << endl;
    cout << "4. Jueves" << endl;
    cout << "5. Viernes" << endl;
    cin >> dia;

    switch (dia)
    {
    case 1:
        cout << "Hoy es Lunes tienes: " <<endl;
        cout << "7:00 a 9:00 tienes Precalculo en la aula A-43" << endl;
        cout << "11:00 a 1:00 tienes Fundamentos de la Programacion en la aula D-17" << endl;
        break;

    case 2:
        cout << "Hoy es Martes tienes: " <<endl;
        cout << "9:00 a 11:00 tienes Elementos en la aula D-37" << endl;
        cout << "1:00 a 1:00 tienes Matematicas Disctreta en la aula D-17" << endl;
        break;

    case 3:
        cout << "Hoy es Miercoles tienes: " <<endl;
        cout << "7:00 a 9:00 tienes Precalculo en la aula A-43" << endl;
        cout << "11:00 a 1:00 tienes Fundamentos de la Programacion en la aula D-17" << endl;
        break;

    case 4:
        cout << "Hoy es Juevez tienes: " <<endl;
        cout << "9:00 a 11:00 tienes Elementos en la aula D-37" << endl;
        cout << "1:00 a 1:00 tienes Matematicas Disctreta en la aula D-17" << endl;
        break;

    case 5:
        cout << "Hoy es Viernes tienes: " <<endl;
        cout << "7:00 a 8:00 tienes Discucion de Precalculo en la alua A-43" << endl;
        cout << "8:00 a 9:00 tienes Discucion de Matematicas Disctreta en la aula D-25" << endl;
        break;

        default:
        cout << "Ingrese un numero valido" <<endl;
    }
    return 0;
}