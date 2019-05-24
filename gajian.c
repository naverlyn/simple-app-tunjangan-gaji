//gajian gan
#include <stdio.h>

int main()
{
	int gajpokA, gajpokB, tunj;
	int gajpoktot;
	int nikahA, blmA, nikahB, blmB;
	int tot, tot2;
	int gol, stat;
	char nama[50];

	nikahA = 	50000;
	blmA = 		25000;
	nikahB = 	75000;
	blmB = 		60000;
	gajpokA = 	200000;
	gajpokB = 	350000;

	printf("Masukan Nama Karyawan: ");
	scanf("%[^\n]s", &nama);

	printf("Golongan: ");
	printf("\n1. A");
	printf("\n2. B");
	printf("\nPiihan Anda : ");
	scanf("%d", &gol);

	printf("Status \n");
	printf("1. Nikah\n");
	printf("2. Belum\n");

	printf("Pilihan Anda : ");
	scanf("%d", &stat);

	/* seleksi dulu disini
	 * kalo misal golongan A, gaji pokok A
	 * dan kalo statusnya nikah, tunjangan A
	 * dst
	 */
	if (gol == 1)
	{
		if (stat == 1)
		{
			tunj = nikahA;
		}
		else if (stat == 2)
		{
			tunj = blmA;
		}
	}
	else
		if(gol == 2)
		{
			if (stat == 1)
			{
				tunj = nikahB;
			}
			else if (stat == 2)
			{
				tunj = blmB;
			}
		}
	else
	{
		printf("Maaf Coba lagi");
	}
	
	if (gol == 1)
	{
		gajpoktot = gajpokA;
	}
	else
	{
		gajpoktot = gajpokB;
	}
	printf("===========================================\n");
	printf("Nama Karyawan: %s\n", nama);
	printf("Gaji Pokok: Rp. %d\n", gajpoktot);

	printf("Tunjangan: Rp. %d\n", tunj);

	//hasiklan disini
	if ( gajpoktot <= 300000)
	{
		tot = (gajpoktot + tunj) * 0.05;
		tot2 = gajpoktot + tunj - tot;
	}
	else if (gajpoktot > 300000)
	{
		tot = (gajpoktot + tunj) * 0.1;
		tot2 = gajpoktot + tunj - tot;
	}
	printf("Potongan Iuran: Rp.%d\n", tot);
	printf("Gaji Bersih: Rp.%d", tot2);


	return 0;

}