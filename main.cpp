// Gabriel A. Sanchez Rivera, GabrielSR23, 801-23-8372
#include <iostream>
#include <cmath>
using namespace std;

int main(){

// Ciclo 1
for (int a = 10; a >= -10; a -= 2){  // La variable se resta por 2 al fin de cada iteracion.
    cout << a << "," ;

}

cout << endl;

// Ciclo 2
for (int b = 1; b <= 22; b += 3){  // La variable se suma por tres al fin de cada iteracion.
    cout << b << "," ;
}

cout << endl;

// Ciclo 3
for (int c = 1; c <= 81; c *= 3){  // La variable se multiplica por 3 al fin de cada iteracion.
    cout << c << "," ;
}

cout << endl;

// Ciclo 4
for (int d = 0; d < 14; d++){
    if(d == 0)
    cout << d << ",";
    if(!(d % 3))
    continue; // Utilize continue para que ignore cualquier numero en el cual % sea igual a 3
    cout << d << "," ;
    
}

cout << endl;

// Ciclo 5
for (int e = 54; e >= 0; e /= 2){  // La variable se divide por 2 despues al fin de cada iteracion.
    cout << e << ",";
    if (e == 0){
    break; // Utilizo break para que no itere despues de la primera iteracion del 0.
    }
}

cout << endl;

// Ciclo 6
for(char f = 65; f <= 90; f++) // Se utiliza char para desplegar las letras respectivas a su valor ASCII.
    cout << f << "," ;

return 0;
}

