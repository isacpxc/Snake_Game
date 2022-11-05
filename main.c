#include <stdio.h>
#include <stdlib.h>

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
                printf("#");
                printf(" ");
                if (j == n-1) {
                    printf("\n");
                    p_Area[i][j_0] = '\n';
                    j_0++;
                }
            } else if (j>=0) {
                if (j == 0 || j == n-1){
                    if (j==0) {printf("#");p_Area[i][j_0] = '#';j_0++;}
                    if (j==n-1) {
                        printf(" #\n");
                        p_Area[i][j_0] = ' ';
                        j_0++;
                        p_Area[i][j_0] = '#';
                        j_0++;
                        p_Area[i][j_0] = '\n';
                        j_0++;
                    }
                } else {
                    printf("  ");
                    p_Area[i][j_0] = ' ';j_0++;
                    p_Area[i][j_0] = ' ';j_0++;
                }
            }

        }
    }




    printf("\n\n\n\n");

    for (size_t i = 0; i<m ; i++){
        for (size_t j = 0; j<(n*2) ; j++){
            printf("%c", p_Area[i][j]);
        }
    }





}
