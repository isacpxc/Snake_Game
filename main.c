#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int m = 20;
    int n = 20;

    char p_Area[m][(n*2)];

    for (size_t i = 0; i<m ; i++){
        for (size_t j = 0,j_0 = 0; j<n ; j++){

            if (i == 0 || i == m-1){
                p_Area[i][j_0] = '#'; j_0++;
                if (j != n-1) {p_Area[i][j_0] = ' '; j_0++;}
//                printf("#");
//                printf(" ");
                if (j == n-1) {
//                    printf("\n");
                    p_Area[i][j_0] = '\n';
                    j_0++;
                }
            } else if (j>=0) {
                if (j == 0 || j == n-1){
                    if (j==0) {/*printf("#");*/p_Area[i][j_0] = '#';j_0++;}
                    if (j==n-1) {
//                        printf(" #\n");
                        p_Area[i][j_0] = ' ';
                        j_0++;
                        p_Area[i][j_0] = '#';
                        j_0++;
                        p_Area[i][j_0] = '\n';
                        j_0++;
                    }
                } else {
//                    printf("  ");
                    p_Area[i][j_0] = ' ';j_0++;
                    p_Area[i][j_0] = ' ';j_0++;
                }
            }

        }
    }
    int p_x=n;
    int p_y=floor(m/2);

    p_Area[p_y][p_x] = '0';


//    printf("\n\n\n\n");


printf("=======PRESS ENTER TO START=======");


char input=' ';
while(input != 'e'){
    input=getch();
//    printf("%c",input);
//    system("pause");
    system("cls");

    switch(input)
    {
    case 'w':
        if (p_y != 1){
            p_Area[p_y][p_x] = ' ';
            p_y--;
        }
        break;
    case 's':
        if (p_y != m-2){
            p_Area[p_y][p_x] = ' ';
            p_y++;
        }
        break;
    case 'a':
        if (p_x != 1){
            p_Area[p_y][p_x] = ' ';
            p_x--;
        }
        break;
    case 'd':
        if (p_x != n*2-3){
            p_Area[p_y][p_x] = ' ';
            p_x++;
        }
        break;
    default:
        break;
    }
    p_Area[p_y][p_x] = '0';



    for (size_t i = 0; i<m ; i++){
        for (size_t j = 0; j<(n*2) ; j++){
            printf("%c", p_Area[i][j]);
        }
    }

}



printf("FIM");





}
