#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);

    int nota1, nota2, nota3;
    cin >> nota1 >> nota2 >> nota3;

    // Per a saber si els nombres són tots diferents, tots iguals o si hi ha dos iguals i un diferent:
    int numsIguals = 0;
    if (nota1 == nota2) numsIguals += 1;
    if (nota1 == nota3) numsIguals += 1;
    if (nota2 == nota3) numsIguals += 1;

    // Per a calcular la mitjana i aplicar, si s'escau, la suma o la resta d'un punt: 
    double mitjana = (double(nota1) + double(nota2) + double(nota3)) / 3;
    if (numsIguals == 1) {
        if (((nota1 < nota2) && (nota2 == nota3)) || ((nota2 < nota1) && (nota1 == nota3)) || ((nota3 < nota1) && (nota1 == nota2))) {
            mitjana += 1;
        }
        else if (((nota1 > nota2) && (nota2 == nota3)) || ((nota2 > nota1) && (nota1 == nota3)) || ((nota3 > nota1) && (nota1 == nota2))) {
            mitjana -= 1;
        }
    }

    // Outputs:
    if (mitjana >= 9) cout << "Medalla or" << endl;
    else if (mitjana >= 7) cout << "Medalla plata" << endl;
    else if (mitjana >= 5) cout << "Medalla bronze" << endl;
    else cout << "Cap premi" << endl;

    cout << mitjana << endl;

    if ((mitjana >= 5) && (numsIguals == 3)) cout << "Premi a la unanimitat" << endl;
}