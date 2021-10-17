#include <iostream>
#include <fstream>
#include <queue> ///Tiene .empty(), .pop(), .push(elemento), .size(), .front(), .back(), .top()
#include <string>

using namespace std;

int grupo[1000000]; ///Para registrar en una matriz todos los elementos. En la posición se guarda el grupo al que pertenece
queue<int> c; ///Declaro la cola por la que van a pasar diferentes elementos
queue <int> a[1000];

int main()
{
    string op;
    int n_grupos, n_elementos, elem, n_escen=1;
    int non_stop=true;
    /// Lectura del input
    ifstream input("sample-Colegas.1.in");
    if(!input.is_open())
    {
        cout << "No se puede abrir el archivo especificado.";
        return -1;
    }
    while(true)
    {
        non_stop=true;
        input>>n_grupos;
        if(n_grupos==0){
            return 0;
        }
        while(!c.empty())  /// Vacio la cola.
        {
            c.pop();
        }
        for(int i=0; i<n_grupos; i++)
        {
            input>>n_elementos;
            for(int j=0; j<n_elementos; j++)
            {
                input >> elem;
                grupo[elem] = i; /// Guardo en la posicion el grupo al que pertenece (si en el input estaban en la misma linea)
            }
        }
        cout<< "Scenario #"<<n_escen<<endl;
        n_escen++;
        while(non_stop)
        {
            input>>op;
            switch(op[0])
            {
            case 'E':
            {
                input>>elem;
                /// Consulto el grupo al que pertenece cierto elemento
                int aux = grupo[elem];
                if(a[aux].empty()) /// Cuando no hay ningún elemento de cierto grupo, se genera un nuevo grupo con su numero
                {
                    c.push(aux);
                }
                a[aux].push(elem);
            }

            break;
            case 'D':
            {
                int grupo_delante = c.front();
                cout<<a[grupo_delante].front()<<endl;
                a[grupo_delante].pop();
                if(a[grupo_delante].empty())
                {
                    c.pop();
                }
            }
            break;
            default:
                non_stop=false;
            }
        }
        cout<<""<<endl;
    }
    return 0;
}
