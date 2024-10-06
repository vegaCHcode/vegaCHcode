#include <iostream>
#include<Windows.h>
using namespace std;

void menu() {
    cout << "\nEscolha uma questao: \n";
    cout << "\t1 - Soma de 0 a 10.\n";
    cout << "\t2 - Repetir frase 10 vezes.\n";
    cout << "\t3 - Ler inteiros até negativo ser digitado.\n";
    cout << "\t4 - Ler 15 idades e contar pessoas entre 0 e 12.\n";
    cout << "Para sair, digite 0.\n";
}

void q1() {
    cout << "\t1 - Soma de 0 a 10.\n\n";
    int num = 1, sum = 0;
    
    do{
        sum += num;
        num++;
    }while(num <= 10);
}

void q2() {}

void q3() {}

void q4() {}

int main() {
    int bogas;

    do {
        menu();
        cout << "\nQue questao deseja ir: >";
        cin >> bogas;

        switch (bogas) {
            case 1:
                system("cls");
                cout << "Voce esta indo para a primeira questao da atividade.\n";
                system("pause");
                q1();
                system("cls");
                break;
            case 2:
                system("cls");
                cout << "Voce esta indo para a segunda questao da atividade.\n";
                system("pause");
                q2();
                system("cls");
                break;
            case 3:
                system("cls");
                cout << "Voce esta indo para a terceira questao da atividade.\n";
                system("pause");
                q3();
                system("cls");
                break;
            case 4:
                system("cls");
                cout << "Voce esta indo para a quarta questao da atividade.\n";
                system("pause");
                q4();
                system("cls");
                break;
            case 0:
                system("cls");
                cout << "Fechando Atividade.\n";
                system("pause");
                break;
            default:
                cout << "Invalido. Tente novamente...\n";
                system("pause");
                system("cls");
                break;
        }

    } while (bogas != 0);

    return 0;
}