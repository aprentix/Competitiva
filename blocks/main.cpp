#include <iostream>
#include <set>
using namespace std;

int main()
{
    int x, test_c=0, k_value, tot_value;
    set<int> c1;
    //cout << "Inserta el numero de casos: ";

    cin>>test_c;

    for(int c=0; c<test_c; c++){
        /// REINICIAMOS LOS VALORES FINALES Y LA MATRIZ
        k_value=0, tot_value=0;
        //cout << "Inserta m: " << endl;
        cin >> x;
        int frente[x];
        int costado[x];
        int matriz[x][x];
        for(int i=0; i<x; i++){
            //cout << "Inserta un frente: ";
            cin>>frente[i];
            cout<<frente[i]<<endl;
            c1.insert(i);
            k_value = k_value+frente[i];// SUMO TODOS LOS ELEMENTOS DE UN ARRAY
        }
        for(int i=0; i<x; i++){
            //cout << "Inserta un costado: ";
            cin>>costado[i];
        }
        for(int i=0; i<x; i++){
            for(int j=0; j<x; j++){
                if(frente[i]==costado[j]){
                    restar=restar+frente[i];
                }
            }
        }
        for(int i=0; i<x; i++){
            for(int j=0; j<x; j++){
                if(frente[i] < costado[j]){
                    matriz[i][j] = frente[i];
                }
                else{
                    matriz[i][j] = costado[j];
                }
                //cout<< i <<" : "<< j << "=" << matriz[i][j]<<endl;
            }
        }

        for(int i=0; i<x; i++){
            for(int j=0; j<x; j++){
                tot_value=tot_value+matriz[i][j];
            }
        }
        cout << "Matty needs at least " << k_value <<" blocks, and can add at most "<<tot_value-k_value<<" extra blocks."<<endl;
    }
    return 0;
}
