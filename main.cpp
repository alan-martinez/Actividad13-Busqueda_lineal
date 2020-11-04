#include <iostream>
#include "arreglo.h"
#include "computadora.h"
using namespace std; 

int main()
{
    Arreglo<Computadora> compus; 

    Computadora c01 ("Windows", "8 RAM", "Klen", "1 TB");
    Computadora c02 ("Linux", "4 RAM", "Alan", "500 GB");
    Computadora c03 ("Apple", "4 RAM", "Jahir", "164 GB");
    Computadora c04 ("Windows", "16 RAM", "Mtz", "1 TB");
    Computadora c05 ("Android", "2 RAM", "Alan", "64 GB");
     
    compus << c01 << c02 << c03 << c04 << c05 << c05;
    Computadora c06("Linux", "4 RAM", "Alan", "500GB");

    Arreglo<Computadora*> ptrs = compus.buscar_todos(c05);

    if (ptrs.size() > 0){
      for (size_t i=0; i< ptrs.size(); i++){
        Computadora *p = ptrs[i];
        cout << *p << endl;
      }
    }
    else{
      cout << "No existen coincidencias"<< endl;
    }

    /*Computadora *ptr = compus.buscar(c06);

    if (ptr != nullptr){
      cout << *ptr << endl; 
    }
    else{
      cout << "No existe" << endl;
    }*/

   

    //compus.buscar();

    /*Arreglo<int> arreglo;

    for (size_t  i=0; i<10; i++){
       arreglo.insertar_final(i);
    }
    arreglo.insertar(100, 2);
    //arreglo.eliminar_inicio();
    //arreglo.eliminar_final();
    arreglo.eliminar(4);
    for (size_t i=0; i<arreglo.size(); i++){
        cout << arreglo[i]<< " ";
    }
    cout << endl;

    int *v = arreglo.buscar(2);
    cout << v << " " << *v << endl;
    *v = 20;
    for (size_t i=0; i<arreglo.size(); i++){
        cout << arreglo[i]<< " ";
    }*/


    return 0;
}
