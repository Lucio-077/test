#include <stdio.h>

int main() {
    char categoria;
    float tariffa;
    printf("che categoria sei?\n Pensionato = P\n Studente = S\n Disoccupato = D\n");
    scanf("%c",&categoria);
    printf("inserire prezzo della tariffa: ");
    scanf("%f",&tariffa);
    switch(categoria){
        case 'P':
            tariffa = tariffa*0.10;
            printf("il prezzo finale e': %f",tariffa);
            break;
        case 'S':
            tariffa= tariffa*0.15;
            printf("il prezzo finale e': %f",tariffa);
                 break;
        case 'D':
            tariffa= tariffa*0.25;
            printf("il prezzo finale e': %f",tariffa);
            break;
        default:
            printf("non risulti nella categoria.\n Sconto non applicato.\n");
            //risulato
            printf("il prezzo finale e': %f",tariffa);
    }
}
