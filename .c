#include <stdio.h>

int main ()
{
int baris, kolom, a, b, c, d, matriks[10][10];
char opsi;
            puts("\tMatriks");
            printf("Masukkan Jumlah Baris : ");
            scanf("%d", &baris);
            printf("Masukkan Jumlah Kolom : ");
            scanf("%d", &kolom);

        for (a = 0; a < baris; a++){
                    for(b = 0; b < kolom; b++){
                        printf("Input Matriks [%d][%d]: ", a+1, b+1);
                        scanf("%d", &matriks[a][b]);
                    }
                }
                puts("\nOutput Matriks");
                for (a = 0; a < baris; a++){
                    for(b=0; b < kolom; b++){
                        printf("%3d", matriks[a][b]);
                    }
                    printf("\n");
                }

        printf("\nApakah Anda Ingin Mengubah Nilai Matriks?\n");
        puts("Ketik \"y\" untuk lanjut");
        puts("Ketik \"x\" untuk berhenti");
        printf("Opsi Anda : ");
        scanf("%s", &opsi);
        switch(opsi){
            case 'y':
                puts("\nMasukkan Baris dan Kolom Yang Ingin Diubah :");
                printf("Baris ke- ");
                scanf("%d", &c);
                printf("Kolom ke- ");
                scanf("%d", &d);
            case 'x':
                printf("Anda Berhenti");
                break;
        }
}
