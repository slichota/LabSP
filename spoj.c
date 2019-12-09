#include <stdio.h>
#include <math.h>
int main(){

    int a, c;
    float b;
    int suma_a=0;
    int atemp;
    int liczba_b=0;
    int btemp;
    int int_b;
    int kwadrat_b = 0;
    int c_temp;
    int liczba_koncowa=0, liczba_koncowa2=0;
    int a_koncowe, b_koncowe, c_koncowe;

    int n,i;
    printf("Podaj ilosc liczb");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d %f %d", &a, &b, &c);
        while(a>0){
            atemp = a%10;
            suma_a = suma_a + atemp;
            a = a/10;
        }
        a_koncowe = suma_a;
        int_b = (int)b;
        int przecinek_b;
        liczba_b = b * 10;
        przecinek_b = liczba_b%10;
        kwadrat_b = pow(przecinek_b, int_b);
        b_koncowe = kwadrat_b % 10;
        while(c>10){
            c = c / 10;
        }
        c_koncowe = c;
        liczba_koncowa = c_koncowe + b_koncowe * 10 + a_koncowe * 100;
        if(liczba_koncowa>liczba_koncowa2){
            liczba_koncowa2 = liczba_koncowa;
        }
        printf("%d", liczba_koncowa2);

}
    return 0;

}
