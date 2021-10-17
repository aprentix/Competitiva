#include <iostream>
#include <stack>

using namespace std;
stack<int> a;

int main()
{
    int vagones, aux;
    bool continuar;
    a.push(0);
    while(true){
        continuar=true;
        //cout << "Inserta el numero de vagones: ";
        cin >> vagones;
        if(vagones==0){
            return 0;
        }
        int arr[vagones];
        while(continuar!=false){
            while(a.top()!=0){
                a.pop();
            }
            /// RELLENA EL ORDEN DE LA SALIDA
            for(int i=0; i<vagones&&continuar; i++){
                //cout << "Rellena el orden: ";
                cin >> aux;
                if(aux==0){
                    continuar=false;
                }
                arr[i]= aux;
            }
            /// COMPROBAR SI ES POSIBLE O NO
            int b=0;
            for(int x=0; x<vagones; x++){ ///Acaba cuando hayan pasado todos los elementos y no coincidan en cabeza
                a.push(x+1); /// APILO EL NUMERO EN CUESTIÓN
                //cout << a.top();
                while(a.top()==arr[b]&&a.top()!=0){
                    a.pop(); /// SACO DE LA PILA
                    b++;
                }
            }
            /// SI SE VACIA LA PILA, SE IMPIME
            if(continuar==true){
                if(a.size()==1){
                cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
    }
    return 0;
}
