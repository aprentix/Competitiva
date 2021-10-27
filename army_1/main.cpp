///RESUELTO POR RACHEL DC -> RAY DC -> RAQUEL DC
#include <iostream>
#include<set>
using namespace std;

int main()
{
    int S=1, B=1, L, R;
    set<int> soldados;
    while(S!=0&&B!=0){
        cin >> S;
        cin >> B;
        for(int i=0; i<S; i++){
            soldados.insert(i+1);
        }
        /*
        for(auto it=soldados.begin(); it!=soldados.end(); ++it){
            cout<<*it<<endl;
        }*/
        int Ls=S, Rs=0;
        for(int i=0; i<B; i++){
            //cout<<"Inserta los valores L y R: "<<endl;
            cin>>L;
            cin>>R;
            R=R+1;
            for(int i=L; i<R; i++){
                soldados.erase(i);
            }
            if(L<=Ls) Ls=L-1;
            if(R>=Rs) Rs=R;
            /*
            for(auto it=soldados.begin(); it!=soldados.end()&&fin!=0; ++it){
                cout<<*it<<endl;
            }*/
            //cout<<Ls <<": "<<Rs<<": "<<B<<endl;
            if(Ls>0&&Rs<=S)
                cout<<Ls<<" "<<Rs<<endl;
            else if
                (Ls<=0&&Rs<=S) cout<<"* "<<Rs<<endl;
            else
                if(Ls>0&&Rs>=S) cout<<Ls<<" *"<<endl;
            else
                if(Ls<=0&&Rs>=S) cout<<"* *"<<endl;
        }
        if(S!=0&&B!=0) cout<<"-"<<endl;
    }
    return 0;
}
