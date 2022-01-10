# Pengulangan Dengan Switch
Dibaca nilai uang. Akan dibelanjakan untuk beras, minyak dan gula, masing-masing dengan harga 10000, 12000 dan 15000. Berapa masing-masing barang didapat, jika urutan pembelian barang bebas?

## Pembuatan program :
•Pembacaan uang dilakukan di luar pengulangan.

        scanf("%d" ,&uang);

•Pembelian dilakuan jika nilai uang ( atau sisanya ) lebih besar dari harga minimal, dan dilakukan berulang-ulang.

        if (uang >=10000) => jika dilakukan sekali

        while (uang >=10000) => jika berulang-ulang

•Pemilihan barang tergantung pilihan pemakai, dengan menggunakan bilangan bulat sebagai pengganti nama. Pemilihan barang akan menentukan nama barang dan harga barang yang dipilih.

        printf("Pilih: 1.beras 1OK, 2.minyak  12K, 3.gula 15k");
        scanf("%d" ,&pilih);
        switch (pilih){
            case 1 : strcpy(barang,"beras"); harga=10000; break;
            case 2 : strcpy(barang,"minyak"); harga=12000; break;
            case 3 : strcpy(barang, "gula"); harga=15000; break;
            
        }
        


•Barang yang didapat bisa dihitung dengan rumus= uang dibagi harga. Sedangkan sisa uang dihitung berdasarkan nilai uang semula dikurangi harga*jumlah.

        jumlah=uang/harga;
        uang=uang-(harga*jumlah);
    
> Perhatikan bahwa kedua intruksi ini dilakukan di luar struktur switch


# Hasil
Masukkan Jumlah Uang= 40000

Pilih: 1.beras 1OK, 2.minyak  12K, 3.gula 15k : 3

Dibeli gula, Harga=15000, Jumlah 2, Sisa : 10000

Pilih: 1.beras 1OK, 2.minyak  12K, 3.gula 15k : 2

Dibeli minyak, Harga=12000, Jumlah 0, Sisa : 10000

Pilih: 1.beras 1OK, 2.minyak  12K, 3.gula 15k : 1

Dibeli beras, Harga=10000, Jumlah 1, Sisa : 0


## License

[MIT](https://choosealicense.com/licenses/mit/)
