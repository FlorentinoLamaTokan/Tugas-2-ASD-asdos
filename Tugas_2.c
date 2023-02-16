#include<stdio.h>
#include<conio.h>
#include<Windows.h>
#include<math.h>


//menu penjumlahan dkk
void penjumlahan() {
	float angka1, angka2, hasil;
	printf("Menu Penjumlahan :\n\n");
	printf("masukkan angka pertama : ");
	scanf("%f", &angka1);
	printf("masukkan angka kedua : ");
	scanf("%f", &angka2);
	hasil = angka1 + angka2;
	printf("hasil dari %.2f + %.2f = %.2f\n\n", angka1, angka2, hasil);


	char input;
	tanya_ulang:
	printf("mau muat ulang?[y/t] : ");
	scanf(" %c", &input);
	if(input=='y' || input=='Y'){
        system("cls");
        penjumlahan();
	}

    else if(input=='t' || input=='T'){
            system("cls");
        menuPenjumlahandkk();
    }

    else
        goto tanya_ulang;


}

void pengurangan() {
	float angka1, angka2, hasil;
	printf("Menu Pengurangan :\n\n");
	printf("masukkan angka pertama : ");
	scanf("%f", &angka1);
	printf("masukkan angka kedua : ");
	scanf("%f", &angka2);
	hasil = angka1 - angka2;
	printf("hasil dari %.2f - %.2f = %.2f", angka1, angka2, hasil);

	char input;
	tanya_ulang:
	printf("\nmau muat ulang?[y/t] : ");
	scanf(" %c", &input);
	if(input=='y' || input=='Y'){
        system("cls");
        pengurangan();
	}

    else if(input=='t' || input=='T'){
            system("cls");
        menuPenjumlahandkk();
    }

    else
        goto tanya_ulang;

}

void perkalian() {
	float angka1, angka2, hasil;
	printf("Menu Perkalian :\n\n");
	printf("masukkan angka pertama : ");
	scanf("%f", &angka1);
	printf("masukkan angka kedua : ");
	scanf("%f", &angka2);
	hasil = angka1 * angka2;
	printf("hasil dari %.2f * %.2f = %.2f", angka1, angka2, hasil);

	char input;
	tanya_ulang:
	printf("\nmau muat ulang?[y/t] : ");
	scanf(" %c", &input);
	if(input=='y' || input=='Y'){
        system("cls");
        perkalian();
	}

    else if(input=='t' || input=='T'){
            system("cls");
        menuPenjumlahandkk();
    }

    else
        goto tanya_ulang;
}

void pembagian() {
	float angka1, angka2, hasil;
	printf("Menu Pembagian :\n\n");
	printf("masukkan angka pertama : ");
	scanf("%f", &angka1);
	printf("masukkan angka kedua : ");
	scanf("%f", &angka2);
	hasil = angka1 / angka2;
	printf("hasil dari %.2f : %.2f = %.2f", angka1, angka2, hasil);

	char input;
	tanya_ulang:
	printf("\nmau muat ulang?[y/t] : ");
	scanf(" %c", &input);
	if(input=='y' || input=='Y'){
        system("cls");
        pembagian();
	}

    else if(input=='t' || input=='T'){
            system("cls");
        menuPenjumlahandkk();
    }

    else
        goto tanya_ulang;

}


void menuPenjumlahandkk() {


	int pilih;
	printf("1. Penjumlahan\n");
	printf("2. Pengurangan\n");
	printf("3. Perkalian\n");
	printf("4. Pembagian\n");
	printf("5. kembali ke menu utama\n");
	printf("masukkan pilihan : ");
	scanf("%d", &pilih);

	switch (pilih)
	{
    system("cls");
	case 1:
	    system("cls");
		penjumlahan();
		break;
	case 2:
	    system("cls");
		pengurangan();
		break;
	case 3:
	    system("cls");
		perkalian();
		break;
	case 4:
	    system("cls");
		pembagian();
		break;
    case 5:
        system("cls");
        main();
	default:
		break;
	}

    if(pilih<1 || pilih>5){
        system("cls");
        printf("TIDAK ADA PILIHAN MENU!!!\n\n");
        menuPenjumlahandkk();
	}


}

// menu consintan

void sinus()
{
    float a;
    printf("Masukkan derajat sinus  = ");
    scanf("%f", &a);
    printf("Hasil Sinus adalah = %.2f", sin(3.14 / 180 * a));

    char input;
	tanya_ulang:
	printf("\nmau muat ulang?[y/t] : ");
	scanf(" %c", &input);
	if(input=='y' || input=='Y'){
        system("cls");
        sinus();
	}

    else if(input=='t' || input=='T'){
            system("cls");
        menuSinCosTan();
    }

    else
        goto tanya_ulang;
}

void cosinus()
{
    float a;
    printf("Masukkan derajat Cosinus  = ");
    scanf("%f", &a);
    printf("Hasil Cosinus adalah = %.2f", cos(3.14 / 180 * a));

    char input;
	tanya_ulang:
	printf("\nmau muat ulang?[y/t] : ");
	scanf(" %c", &input);
	if(input=='y' || input=='Y'){
        system("cls");
        cosinus();
	}

    else if(input=='t' || input=='T'){
            system("cls");
        menuSinCosTan();
    }

    else
        goto tanya_ulang;
}

void tangen()
{
    float angka;
    printf("Masukkan derajat Tangen  = ");
    scanf("%f", &angka);
    printf("Hasil Tangen adalah = %.2f", tan(3.14 / 180 *angka));

    char input;
	tanya_ulang:
	printf("\nmau muat ulang?[y/t] : ");
	scanf(" %c", &input);
	if(input=='y' || input=='Y'){
        system("cls");
        tangen();
	}

    else if(input=='t' || input=='T'){
            system("cls");
        menuSinCosTan();
    }

    else
        goto tanya_ulang;
}


void menuSinCosTan() {


	int pilih;
	printf("1. Sinus\n");
	printf("2. Cosinus\n");
	printf("3. Tangen\n");
	printf("4. Kembali ke menu utama\n");
	printf("masukkan pilihan : ");
	scanf("%d", &pilih);

	switch (pilih)
	{
	case 1:
	    system("cls");
		sinus();
		break;
	case 2:
	    system("cls");
		cosinus();
		break;
	case 3:
	    system("cls");
		tangen();
		break;
	case 4:
	    system("cls");
		main();
		break;
	default:
		break;
	}
	if(pilih<1 || pilih>4){
        system("cls");
        printf("TIDAK ADA PILIHAN MENU!!!\n\n");
        menuSinCosTan();
	}

}

// menu keliling
void KelilingPersegi()
{
    float angka1, angka2, hasil;
    printf("masukkan Panjang Persegi : ");
    scanf("%f", &angka1);
    printf("masukkan lebar persegi : ");
    scanf("%f", &angka2);
    hasil = angka1*2 + angka2*2;
    printf("Keliling Persegi adalah %.2f", hasil);

    char input;
	tanya_ulang:
	printf("\nmau muat ulang?[y/t] : ");
	scanf(" %c", &input);
	if(input=='y' || input=='Y'){
        system("cls");
        KelilingPersegi();
	}

    else if(input=='t' || input=='T'){
            system("cls");
        menuKelilingBangun();
    }

    else
        goto tanya_ulang;
}

void kelilingTrapesium()
{
    float angka1, angka2, angka3, hasil;
    printf("masukkan sisi atas Trapesium sama kaki : ");
    scanf("%f", &angka1);
    printf("masukkan sisi bawah Trapesium sama kaki : ");
    scanf("%f", &angka2);
    printf("masukkan sisi miring Trapesium sama kaki : ");
    scanf("%f", &angka3);
    hasil = angka1+angka2+angka3*2;
    printf("Keliling Trapesium sama kaki Adalah %.2f", hasil);

    char input;
	tanya_ulang:
	printf("\nmau muat ulang?[y/t] : ");
	scanf(" %c", &input);
	if(input=='y' || input=='Y'){
        system("cls");
        kelilingTrapesium();
	}

    else if(input=='t' || input=='T'){
            system("cls");
        menuKelilingBangun();
    }

    else
        goto tanya_ulang;

}

void kelilingLayang()
{
    float angka1, angka2, hasil;
    printf("masukkan Panjang sisi atas : ");
    scanf("%f", &angka1);
    printf("masukkan pajang sisi bawah : ");
    scanf("%f", &angka2);
    hasil = angka1*2 + angka2*2;
    printf("Keliling Layang-Layang adalah %.2f", hasil);

    char input;
	tanya_ulang:
	printf("\nmau muat ulang?[y/t] : ");
	scanf(" %c", &input);
	if(input=='y' || input=='Y'){
        system("cls");
        kelilingLayang();
	}

    else if(input=='t' || input=='T'){
            system("cls");
        menuKelilingBangun();
    }

    else
        goto tanya_ulang;

}

void kelilingLingkaran()
{
    float jari, diameter, hasil1, hasil2;
    printf("masukkan panjang diameter : ");
    scanf("%f", &diameter);
    printf("masukkan panjang jari-jari : ");
    scanf("%f", &jari);
    hasil1=3.14*diameter;
    hasil2=2*3.14*jari;
    printf("keliling lingkaran berdasar diameter = %.2f\n", hasil1);
    printf("keliling lingkaran berdasar jari-jari = %.2f", hasil2);

    char input;
	tanya_ulang:
	printf("\nmau muat ulang?[y/t] : ");
	scanf(" %c", &input);
	if(input=='y' || input=='Y'){
        system("cls");
        kelilingLingkaran();
	}

    else if(input=='t' || input=='T'){
            system("cls");
        menuKelilingBangun();
    }

    else
        goto tanya_ulang;
}

void menuKelilingBangun() {


	int pilih;
	printf("1. Keliling persegi\n");
	printf("2. keliling Trapesium\n");
	printf("3. Keliling layang-layang\n");
	printf("4. keliling Lingkaran\n");
	printf("5. Kembali Ke menu sebelumnya\n");
	printf("masukkan pilihan : ");
	scanf("%d", &pilih);

	switch (pilih)
	{
	case 1:
	    system("cls");
		KelilingPersegi();
		break;
	case 2:
	    system("cls");
		kelilingTrapesium();
		break;
	case 3:
	    system("cls");
		kelilingLayang();
		break;
	case 4:
	    system("cls");
		kelilingLingkaran();
		break;
    case 5:
        system("cls");
        menuKelilingLuas();
	default:
		break;
	}
	if(pilih<1 || pilih>5){
        system("cls");
        printf("TIDAK ADA PILIHAN MENU!!!\n\n");
        menuKelilingBangun();
	}

}

//menu luas bangun
void LuasPersegi()
{
    float angka1, angka2, hasil;
    printf("masukkan panjang persegi : ");
    scanf("%f", &angka1);
    printf("masukkan lebar persegi : ");
    scanf("%f", &angka2);
    hasil = angka1*angka2;
    printf("Luas persegi = %.2f", hasil);

    char input;
	tanya_ulang:
	printf("\nmau muat ulang?[y/t] : ");
	scanf(" %c", &input);
	if(input=='y' || input=='Y'){
        system("cls");
        LuasPersegi();
	}

    else if(input=='t' || input=='T'){
            system("cls");
        menuLuasBangun();
    }

    else
        goto tanya_ulang;
}

void luasTrapesium()
{
    float angka1, angka2, angka3, hasil;
    printf("masukkan sisi atas trapesium sama kaki : ");
    scanf("%f", &angka1);
    printf("masukkan sisi bawah trapesium sama kaki : ");
    scanf("%f", &angka2);
    printf("masukkan tinggi trapesium sama kaki : ");
    scanf("%f", &angka3);
    hasil = angka3*(angka1+angka2)*1/2;
    printf("Luas trapesium sama kaki adalah %.2f", hasil);

    char input;
	tanya_ulang:
	printf("\nmau muat ulang?[y/t] : ");
	scanf(" %c", &input);
	if(input=='y' || input=='Y'){
        system("cls");
        luasTrapesium();
	}

    else if(input=='t' || input=='T'){
            system("cls");
        menuLuasBangun();
    }

    else
        goto tanya_ulang;

}

void luasLayang()
{
    float angka1, angka2, hasil;
    printf("masukkan diagonal panjang : ");
    scanf("%f", &angka1);
    printf("masukkan diagonal lebar : ");
    scanf("%f", &angka2);
    hasil = angka1*angka2*1/2;
    printf("luas layang-layang adalah %.2f ", hasil);

    char input;
	tanya_ulang:
	printf("\nmau muat ulang?[y/t] : ");
	scanf(" %c", &input);
	if(input=='y' || input=='Y'){
        system("cls");
        luasLayang();
	}

    else if(input=='t' || input=='T'){
            system("cls");
        menuLuasBangun();
    }

    else
        goto tanya_ulang;


}

void luasLingkaran()
{
    float angka1,angka2, hasil1, hasil2;
    printf("masukkan panjang diameter : ");
    scanf("%f", &angka1);
    printf("masukkan panjang jari-jari : ");
    scanf("%f", &angka2);
    hasil1 = 1/4*3.14*angka1;
    hasil2 =3.14*(angka2*angka2);
    printf("Luas lingkaran berdasar diameter = %.2f\n", hasil1);
    printf("Luas lingkaran berdasar jari-jari = %.2f", hasil2);

    char input;
	tanya_ulang:
	printf("\nmau muat ulang?[y/t] : ");
	scanf(" %c", &input);
	if(input=='y' || input=='Y'){
        system("cls");
        luasLingkaran();
	}

    else if(input=='t' || input=='T'){
            system("cls");
        menuLuasBangun();
    }

    else
        goto tanya_ulang;


}

void menuLuasBangun()
{
  int pilih;
	printf("1. Luas Persegi\n");
	printf("2. Luas trapesium\n");
	printf("3. Luas layang-layang\n");
	printf("4. Luas Lingkaran\n");
	printf("5. Kembali Ke menu sebelumnya\n");
	printf("masukkan pilihan : ");
	scanf("%d", &pilih);

	switch (pilih)
	{
	case 1:
	    system("cls");
		LuasPersegi();
		break;
	case 2:
	    system("cls");
		luasTrapesium();
		break;
	case 3:
	    system("cls");
		luasLayang();
		break;
	case 4:
	    system("cls");
		luasLingkaran();
		break;
    case 5:
        system("cls");
        menuKelilingLuas();
	default:
		break;
	}
	if(pilih<1 || pilih>5){
        system("cls");
        printf("TIDAK ADA PILIHAN MENU!!!\n\n");
        menuLuasBangun();
	}

}


//menu volume

void volumeKubus()
{
    float angka1, hasil;
    printf("masukkan panjang sisi kubus : ");
    scanf("%f", &angka1);
    hasil = angka1*angka1*angka1;
    printf("Volume kubus = %.2f", hasil);

    char input;
	tanya_ulang:
	printf("\nmau muat ulang?[y/t] : ");
	scanf(" %c", &input);
	if(input=='y' || input=='Y'){
        system("cls");
        volumeKubus();
	}

    else if(input=='t' || input=='T'){
            system("cls");
        menuVolumeBangun();
    }

    else
        goto tanya_ulang;
}

void volumePrisma()
{
    float angka1, angka2, angka3, angka4, angka5, angka6;
    float hasil1, hasil2, hasil3, hasil4;
    printf("masukkan sisi persegi : ");
    scanf("%f", &angka1);
    printf("masukkan lebar alas segitiga : ");
    scanf("%f", &angka2);
    printf("masukkan Tinggi Segitiga : ");
    scanf("%f", &angka3);
    printf("masukkan Jari-jari lingkaran : ");
    scanf("%f", &angka4);
    printf("masukkan Diameter Lingkaran : ");
    scanf("%f", &angka5);
    printf("masukkan tinggi Prisma : ");
    scanf("%f", &angka6);

    hasil1=angka1*angka1*angka1;
    hasil2=(angka2*angka3/2)*angka6;
    hasil3=3.14*angka4*angka4*angka6;
    hasil4=3.14*((angka5/2)*(angka5/2))*angka6;

    printf("Volume prisma persegi = %.2f\n", hasil1);
    printf("Volume prisma segitiga = %.2f\n", hasil2);
    printf("Volume silinder berdasar jari-jari = %.2f\n", hasil3);
    printf("Volume silinder berdasar diameter = %.2f\n", hasil4);

    char input;
	tanya_ulang:
	printf("\nmau muat ulang?[y/t] : ");
	scanf(" %c", &input);
	if(input=='y' || input=='Y'){
        system("cls");
        volumePrisma();
	}

    else if(input=='t' || input=='T'){
            system("cls");
        menuVolumeBangun();
    }

    else
        goto tanya_ulang;
}

void volumeLimas()
{
    float angka1, angka2, angka3, angka4, angka5, angka6;
    float hasil1, hasil2, hasil3, hasil4;
    printf("masukkan sisi persegi : ");
    scanf("%f", &angka1);
    printf("masukkan lebar alas segitiga : ");
    scanf("%f", &angka2);
    printf("masukkan Tinggi Segitiga : ");
    scanf("%f", &angka3);
    printf("masukkan Jari-jari lingkaran : ");
    scanf("%f", &angka4);
    printf("masukkan Diameter Lingkaran : ");
    scanf("%f", &angka5);
    printf("masukkan tinggi limas : ");
    scanf("%f", &angka6);

    hasil1=(angka1*angka1)*angka6/3;
    hasil2=((angka2*angka3/2)*angka6)/3;
    hasil3=3.14*(angka4*angka4)*angka6/3;
    hasil4=3.14*((angka5/2)*(angka5/2))*angka6/3;

    printf("Volume limas persegi = %.2f\n", hasil1);
    printf("Volume limas segitiga = %.2f\n", hasil2);
    printf("Volume limas silinder berdasar jari-jari = %.2f\n", hasil3);
    printf("Volume limas silinder berdasar diameter = %.2f\n", hasil4);

    char input;
	tanya_ulang:
	printf("\nmau muat ulang?[y/t] : ");
	scanf(" %c", &input);
	if(input=='y' || input=='Y'){
        system("cls");
        volumeLimas();
	}

    else if(input=='t' || input=='T'){
            system("cls");
        menuVolumeBangun();
    }

    else
        goto tanya_ulang;

}

void volumeBola()
{
    float angka1,angka2, hasil1, hasil2;
    printf("masukkan panjang diameter : ");
    scanf("%f", &angka1);
    printf("masukkan panjang jari-jari : ");
    scanf("%f", &angka2);
    hasil1 = 3.14*(angka1*angka1*angka1)/6;
    hasil2 =3.14*(angka2*angka2*angka2)*4/3;
    printf("volume bola berdasar diameter = %.2f\n", hasil1);
    printf("volume berdasar jari-jari = %.2f", hasil2);

    char input;
	tanya_ulang:
	printf("\nmau muat ulang?[y/t] : ");
	scanf(" %c", &input);
	if(input=='y' || input=='Y'){
        system("cls");
        volumeBola();
	}

    else if(input=='t' || input=='T'){
            system("cls");
        menuVolumeBangun();
    }

    else
        goto tanya_ulang;
}

void menuVolumeBangun()
{
  int pilih;
	printf("1. Volume Kubus\n");
	printf("2. Volume Prisma\n");
	printf("3. Volume Limas\n");
	printf("4. Volume Bola\n");
	printf("5. Kembali Ke menu sebelumnya\n");
	printf("masukkan pilihan : ");
	scanf("%d", &pilih);

	switch (pilih)
	{
	case 1:
	    system("cls");
		volumeKubus();
		break;
	case 2:
	    system("cls");
		volumePrisma();
		break;
	case 3:
	    system("cls");
		volumeLimas();
		break;
	case 4:
	    system("cls");
		volumeBola();
		break;
    case 5:
        system("cls");
        menuKelilingLuas();
	default:
		break;
	}
	if(pilih<1 || pilih>5){
        system("cls");
        printf("TIDAK ADA PILIHAN MENU!!!\n\n");
        menuVolumeBangun();
	}

}

void menuKelilingLuas() {


	int pilih;
	printf("1. Hitung Keliling Bangun Datar\n");
	printf("2. Hitung Luas Bangun Datar\n");
	printf("3. Hitung Volume Bangun Ruang\n");
	printf("4. Kembali ke menu utama\n");
	printf("masukkan pilihan : ");
	scanf("%d", &pilih);

	switch (pilih)
	{
	case 1:
	    system("cls");
		menuKelilingBangun();
		break;
	case 2:
	    system("cls");
		menuLuasBangun();
		break;
	case 3:
	    system("cls");
		menuVolumeBangun();
		break;
	case 4:
	    system("cls");
		main();
		break;
	default:
		break;
	}
	if(pilih<1 || pilih>4){
        system("cls");
        printf("TIDAK ADA PILIHAN MENU!!!\n\n");
        menuKelilingLuas();
	}

}

void akarkuadrat()
{
    float angka1, hasil;
    printf("masukkan bilangan yang akan diakar : ");
    scanf("%f", &angka1);
    printf("hasil akar dari %.2f adalah %.2f", angka1, sqrt(angka1));

    char input;
	tanya_ulang:
	printf("\nmau muat ulang?[y/t] : ");
	scanf(" %c", &input);
	if(input=='y' || input=='Y'){
        system("cls");
        akarkuadrat();
	}

    else if(input=='t' || input=='T'){
            system("cls");
        main();
    }

    else
        goto tanya_ulang;

}


void main() {


	int pilih;
	printf("1. Bagi, Kurang, Tambah, Kali\n");
	printf("2. SinCosTan\n");
	printf("3. Hitung Keliling dan Luas\n");
	printf("4. akar Kuadrat\n");
	printf("5. Keluar\n");
	printf("masukkan pilihan : ");
	scanf("%d", &pilih);

	switch (pilih)
	{

	case 1:
	    system("cls");
		menuPenjumlahandkk();
		break;
	case 2:
	    system("cls");
		menuSinCosTan();
		break;
	case 3:
	    system("cls");
		menuKelilingLuas();
		break;
	case 4:
	    system("cls");
		akarkuadrat();
		break;
	default:
		break;
	}
	if(pilih<1 || pilih>5){
        system("cls");
        printf("TIDAK ADA PILIHAN MENU!!!\n\n");
        main();
	}

}


