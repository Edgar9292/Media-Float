int main(){
    float grade [5], sum=0;
    int cont;

    for(cont=0;cont<5,cont++){
        cout << "Insira sua Nota:" <<cont+1<<":";
        cin >> grade [cont];
        sum += grade [cont];
    }
        for(cont=0;cont<5;cont++)
            cout<<"Nota" << cont+1 << ":" <<grade [cont] << endl;
        sum/5;
        cout<< "Média:" << sum << endl;


}