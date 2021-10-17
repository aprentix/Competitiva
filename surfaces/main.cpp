#include <iostream>

using namespace std;

int main()
{
    int num_li=1, n_esp, menor=30, tot=0;
    char carac[26], aux;
    while(num_li>0){
        menor=30, tot=0;
        ///cout << "Inserta numero de lineas: "<<endl;
        cin >> num_li;
        if(num_li!=0){
            cin >> aux;
        }
        else{
            return 0;
        }
        int num[num_li];
        for(int i=0; i<num_li; i++){
            ///cout << "Inserta linea" << endl;
            n_esp=0; //INICIALIZO N_ESP=0
            cin.getline(carac, 26);
            ///cout<<carac<<endl;
            for(int j=0; j<25; j++){
                if(carac[j]==32){
                    n_esp++; //SUMO LOS ESPACIOS
                }
            }//GUARDO EL NUMERO DE ESPACIOS EN EL ARRAY
            num[i]=n_esp;
            ///cout<<num[i];
            if(menor>num[i]){
                menor=num[i];
            }// ME QUEDO CON EL MENOR NUMERO DEL ARRAY
        }
        for(int i=0; i<num_li; i++){
            num[i]=num[i]-menor;
            tot=tot+num[i];
        }
        cout <<tot<<endl;
    }
    return 0;
}
