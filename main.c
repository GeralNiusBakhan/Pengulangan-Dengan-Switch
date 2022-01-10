#include <stdio.h>
#include <string.h>

int main()
{
    int uang, harga, jumlah, pilih;
    char barang[10];
    scanf("%d" ,&uang);
    while (uang>=10000){
        printf("Pilih: 1.beras 1OK, 2.minyak  12K, 3.gula 15k");
        scanf("%d" ,&pilih);
        switch (pilih){
            case 1 : strcpy(barang,"beras"); harga=10000; break;
            case 2 : strcpy(barang,"minyak"); harga=12000; break;
            case 3 : strcpy(barang, "gula"); harga=15000; break;
            
        }
    
    jumlah=uang/harga;
    uang=uang-(harga*jumlah);
    printf("Dibeli %s, Harga=%d, Jumlah %d, Sisa : %d\n", barang,harga,jumlah, uang);
}

    return 0;

}
