#include <iostream>
#define l0 0.5
using namespace std;
int main(int argc, char const *argv[])
{
    float l1;
    float l2;
    float l3;
    cout << "Introduce la longitud del eslabon 1: " << endl;
    cin >> l1;
    cout << "Introduce la longitud del eslabon 2: " << endl;
    cin >> l2;
    cout << "Introduce la longitud de la pinza" << endl;
    cin >> l3;    
    cout << "Tipo de robot: PPP (Prismatico, Prismatico, Prismatico)" << endl;
    cout << "Ejes: 3" << endl;
    cout << "\t q1: desplazamiento" << endl;
    cout << "\t q2: desplazamiento" << endl;
    cout << "\t q3: desplazamiento" << endl;
    cout << "Longitudes:" << endl;
    cout << "\t l1 = " + to_string(l1) << endl;
    cout << "\t l2 = " + to_string(l2) << endl;
    cout << "\t l3 = " + to_string(l3) << endl;
    cout << "Tabla de parametros D-H:" << endl;
    cout << "\t |Articulacion|qi|di|ai|alphai" << endl;
    cout << "\t |1|0|h|0|0" << endl;
    cout << "\t |2|0|0|L1|0" << endl;
    cout << "\t |3|0|0|L2|0" << endl;
    cout << "\t |4|0|0|L3|0" << endl;
    cout << "\t |i|qi|di|ai|alphai" << endl;
    cout << "\t |1|0|"+ to_string(l0)+ "|0|0" << endl;
    cout << "\t |2|0|0|" + to_string(l1)+ "|0" << endl;
    cout << "\t |3|0|0|" + to_string(l2)+ "|0" << endl;
    cout << "\t |4|0|0|" + to_string(l3)+ "|0" << endl;
    cout << "Matriz de transformación (traslación):" << endl;
    cout << "\t |1|0|0|dx|" << endl;
    cout << "\t |0|1|0|dy|" << endl;
    cout << "\t |0|0|1|dz|" << endl;
    cout << "\t |0|0|0|1 |" << endl;
    cout << "Matriz resultante:" << endl;
    cout << "\t |1|0|0|" + to_string(l1)+ "|" << endl;
    cout << "\t |0|1|0|" + to_string(l2)+ "|" << endl;
    cout << "\t |0|0|1|" + to_string(l3)+ "|" << endl;
    cout << "\t |0|0|0|1 |" << endl;
    cout << "\t\t Aqui consideramos que el vector inicial es (0.0,0.0,0.0)" << endl;
    cout << "posición final(x,y,z)" << endl;
    cout << "\t XFinal = " + to_string(l1) << endl;
    cout << "\t YFinal = " + to_string(l2) << endl;
    cout << "\t ZFinal = " + to_string(l3) << endl;
}
