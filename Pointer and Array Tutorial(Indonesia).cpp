/* Pointer dan Array

contoh :

int x [10];  --> Array dari integer ( Variable X yang di integer )
_ _ _ _ _ _ _ _ _ _  --> 1 kotak mewakili variable ( Semua kotak "x" )

_ _ _ _ _ _ _ _ _ _  --> Semua kotak "x"
0 1 2 3 4 5 6 7 8 9

Cara ngisi gimana?

Misal saya mau ngisi indeks ke 7 dengan angka 5 --> x[7] = 5

Berarti caranya,

int x[10] = { 5, 7, 9, 3, 4 } --> Isinya 5. Berarti isi yang 5 pertama. Sisanya diisi dengan angka 0 atau tidak diisi

5 7 9 3 4 0 0 0 0 0
0 1 2 3 4 5 6 7 8 9

int A[x][x];  --> berarti 2 dimensi ( 5 x 5 ). Baris dulu, baru kolom.

    0  1  2  3  4
 0  -  -  -  -  -
 1  -  -  -  -  - 
 2  -  -  -  -  -
 3  -  -  -  -  -
 4  -  -  -  -  -

int A[1][1] = 5; ( Baris ke-satu, kolom ke-1 ) ( Vertikal --> Horizontal )
int A[3][1] = 9; ( Baris ke-tiga, kolom ke 1 ) ( Vertikal --> Horizontal )

    0  1  2  3  4
 0  -  -  -  -  -
 1  -  5  -  -  - 
 2  -  -  -  -  -
 3  -  9  -  -  -
 4  -  -  -  -  -
 
 kalau int A[5][5] = 9;  <-- Error karena tidak ada.
 
 Cetaknya jangan begini :
 - printf("%d", A);
 - printf("%d", A[2] ;
 
  Cetaknya begini :
 + printf("%d", A[2][3]);
 
 _______________________________________________________________________________
SPECIAL CASE UNTUK ARRAY OF CHARACTER ( Kalau character jangan lupa pakai #include<string.h>
  
  char nama [100];
  
  Cetaknya kalau begini salah
  - printf("%c", nama);  <-- kalau "%c" ini harus satu-satu.
  - printf("%s", nama);  <-- kalau "%s" ini buat 1 baris.
__________________________________________________________________________________

 Nah per-kotak nilainya "%c", itulah kenapa cuma bisa satu print / kotak. Dipakai untuk 1 dan 2 dimensi.
 Satu baris kotak ini baru namanya "%s". Tidak bisa dipakai untuk 2 dimensi karena fokus untuk 1 baris. Gaboleh [5][10]. Harus [10] Aja (Kolom).
 
 ___________________________________________________________________________________________________________
 
 Buat Array of Character, baris dan kolom lebih fleksibel. Bisa 10 baris dan 100 kolom.
 
 char nama [60][100]; <-- misal satu kelas ada 60 orang, saya mau mengambil nama dengan maksimal 100 karakter ( Misal saya mau nama depan 1 aja )
 
 Maka pake pengulangan,
 int i, j;
 
 for(i=0; i<60; i++){
 for(j=0; j<100; j++){
 if(nama[i][j]==" "){
 break;
}
printf("%c", nama [i][j]);

}
}

Kalau mau ngambil 2 nama depan gimana?

 int i, j;
 
 for(i=0; i<60; i++){
 	int c = 0;
 for(j=0; j<100; j++){
 if(nama[i][j]==" "){
 	c++;
}
if(c==2) break;


printf("%c", nama [i][j]);
}
}

________________________________________________________________________________________________________
 
 Contoh : 
 - printf("%s", nama[5]);
 
Yang ada di #Include<string.h> 

strlen  --> menghitung jumlah karakter dari string.

Contoh char mtk="algo";
maka strlen --> 4

strcmp  --> membandingkan 2 buah string. Return value nya sebuah angka (Bisa positif / Negatif). Akan menghasilkan angka 0, ketika stringnya sama 

Contoh strcmp(mtk,"algo");
maka strcmp --> 0, jika stringnya sama. Kalau beda, hasilnya 1.

strcmpi  --> Sama kayak strcmp tapi ignore case sensitive. 

Contoh  

strcpy  --> Mengisi / mengcopy sebuah string ke string lain. Kapan harus dipake? Apa yang dicpy> 

Contoh strcpy(mtk, "algo");

strstr  --> Mencari string dalam string. Hasil return value berupa angka, berupa indeks.

Contoh string dari kata bina nusantara

b i n a  n u s a n t a r a
1 2 3 4  5 6 7 8 9 10 . . .

bina nusANTara 

Saya mau cari "ant", maka return valuenya berupa angka. Return angkanya berupa indeks. Ada di indeks berapa? Ada di indeks ke 8 dan 10
Maka return valuenya 8



strtok  -->  Memotong string ( bisa jadi 2 )

Contoh

strcat  -->  Menggabungkan 2 string

Contoh
 
_______________________________________________________________________________

POINTER ( Secara definisi, sebuah variable juga. Variable biasa, tapi kegunaannya adalah untuk menyimpan alamat dari variable lain )

Pointer --> * dan &, berpasangan

contoh : ( saya punya variable namanya p, tipenya adalah pointer integer, 
dengan artian variable ini adalah sebuah variable yang isinya adalah alamat dari variable lain yang tipenya integer.
Hanya bisa menyimpan alamat variable lain.

int *p;

contoh lain :

int x = 7

1 kotak variable x berisi 7, dialamat ab02. Dan ada 1 kotak variable p berisi ..., dialamat cc03

Maka kalau p = &x;  <-- Maka isi kotak p adalah alamat nya variable x yakni "ab02", alamatnya kotak p itu tetep cc03.

Kalau di ilustrasikan / tidak resmi maka kotak variable x, berisi 7, ada tanda panah menuju isi kotak variable x dari p.

jadi kalau ditulis,
x = 7
p = ab02 ( alamatnya x )
*p = 7 ( isi variable x )
&x = ab02 ( alamatnya x )
&p = cc03 ( alamatnya p )


int x = 5;
int *p;
int **q;

p = &x
q = &p

Ilustrasi :

x = 5, *p ( p = &x ), **q ( q = &p )

kotak variable x berisi 5 dengan alamat ab10
kotak variable p berisi ab10 "milik alamat variable x" dengan alamat cc05
kotak variable q berisi cc05 "milik alamat variable p" dengan alamat dd07

Kalau disebut x, maka menghasilkan angka 5  ( x --> 5 )
Kalau disebut *p, maka menghasilkan angka 5 ( *p --> 5 )
kalau disebut **q, maka menghasilkan angka 5 ( **q --> 5 )

kalau disebut p, maka menghasilkan alamat variable x ( p --> ab10 )
kalau disebut *q, maka menghasilkan alamat variable x ( *q --> ab10 )

Kalau misalkan **q diubah jadi 50, maka x berubah isinya jadi 50 juga. Kalau 1 berubah, semua ikut berubah.

_________________________________________
int *m[10];

"saya punya pointer m, ada 10 pointer m"
_________________________________________

Contoh finale ( Pointer dan Array )

char mtk[100];

_ _ _ _ _ _ _ _ _
0 1 2 3 4 5 6 . 99

pointer mtk dimulai dari 0

printf("%c", mtk[0]);
printf("%c", *mtk); <-- maka mencetak kotak 0
printf("%c", *(mtk + 1);  <-- maka mencetak kotak 1

kalau 2 dimensi? char mtk[100][50];

Ada 100 baris, maka sekaligus bikin 100 pointer ( yang menunjuk ke array indeks 0 "kotak [0][0]" )

mtk[1], geser ke bawah 1 baris
*(mtk[1]+1); <-- Geser ke bawah 1 baris, menuju kolom "1"



_____________________________________________________________________________________________________________

CATATAN TAMBAHAN :

for(i=0; i<60, i++){
	gets(nama[i]); f flush(stdin);
}
	f flush(stdin) gunanya untuk membersihkan sisa kayak misal compile run ada "enter" di akhir program kita, yang dianggap string ke-2.
	

