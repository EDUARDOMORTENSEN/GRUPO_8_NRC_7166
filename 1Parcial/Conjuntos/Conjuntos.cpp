# include <stdio.h>
# include <conio.h>
# include <stdlib.h>

int main ()
{
    int a[10], b[10], x, y, uni[20],inte [10], ab, j, h;
    printf("Ingrese cantidad de elementos del conjunto A");
    scanf("%d",&x);
    while( x <= 1 || x >= 10)
        {

            printf("Ingrese cantidad de elementos del conjunto A");
        scanf("%d",&x);
        }
        a[0] = x;
        printf("Ingrese cantidad de elementos del conjunto B");
        scanf("%d",&y);
        while( y <= 1 || y >= 10)
            {
                printf("Ingrese cantidad de elementos del conjunto B");
        scanf("%d",&y);
        }
        b[0] = y;
        for(int i=0;i<x;i++)
            {
                printf("Ingrese el elemento nro %d del conjunto A ",i+1);
        scanf("%d",&a[i]);
        }
        for(int z=0;z<y;z++)
            {
                printf("Ingrese el elemento nro %d del conjunto B ",z+1);
                scanf("%d",&b[z]);
        }
        ab=x+y;
        j=0;
        h=1;
        for (int i=0;i<ab;i++)
            {
                uni[j]=a[i];
                uni[h]=b[i];
                j=j+2;
                h=h+2;
            }
        printf("La Union es : ");
        for (int i=0;i<ab;i++)
            {
                printf("%d",uni[i]);
        }
        printf("La Interseccion es: ");
        for(int i=0;i<x;i++)
            {
                for(int z=0;z<y;z++)
                {
                    if(a[i]==b[z]);
                    {
                        printf("%d",a[i]);
                    }
                }
            }
            system("pause");
            return 0;
}
