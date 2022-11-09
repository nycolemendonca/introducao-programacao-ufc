#include <iostream>

/* Faça um programa que receba a idade e o peso de quinze pessoas, e que calcule e mostre as médias dos
pesos das pessoas da mesma faixa etária. As faixas etárias são: de 1 a 15 anos, de 16 a 30 anos e de 31
anos para cima. */

using namespace std;

int main(){
    unsigned int idade, iate15, iate30, i31mais;
    float peso, somaPeso15, somaPeso30, somaPeso31, mediaPeso15, mediaPeso30, mediaPeso31;

    for (int i = 1; i <= 6; i++){
        cout << "Digite a idade: ";
        cin >> idade;
        cout << "Digite o peso: ";
        cin >> peso;
        cout << endl;

        if (idade <= 0 || peso <= 0){ cout << "Idade ou peso invalidos." << endl; }
        else if (idade <= 15){
            iate15++;
            somaPeso15 = somaPeso15 + peso;
        }
        else if (idade <= 30){
            iate30++;
            somaPeso30 = somaPeso30 + peso;
        }
        else {
            i31mais++;
            somaPeso31 = somaPeso31 + peso;
        }
    }

    if (iate15 > 0){
        mediaPeso15 = somaPeso15 / iate15;
        cout << "Media dos pesos - faixa etaria 1-15 anos: " << mediaPeso15 << endl;
        cout << endl;
    }
    if (iate30 > 0){
        mediaPeso30 = somaPeso30 / iate30;
        cout << "Media dos pesos  - faixa etaria 16-30 anos: " << mediaPeso30 << endl;
        cout << endl;
    }
    if (i31mais > 0){
        mediaPeso31 = somaPeso31 / i31mais;
        cout << "Media dos pesos  - faixa etaria 31+ anos: " << mediaPeso31 << endl;
    }

    return 0;
}
