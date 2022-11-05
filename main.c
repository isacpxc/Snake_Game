#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m = 4;
    int n = 4;

    char canvas[m][(n*2)+1];

    for (size_t i = 0; i<m ; i++){
        for (size_t j = 0,j_0 = 0; j<n ; j++){
            if (i == 0 || i == m-1){
                canvas[i][j_0] = '#'; j_0++;
                canvas[i][j_0] = ' '; j_0++;
                printf("#");
                printf(" ");
                if (j == n-1) {
                    printf("\n");
                    canvas[i][j_0] = '\n';
                    j_0++;
                }
            } else if (j>=0) {
                if (j == 0 || j == n-1){
                    if (j==0) {printf("#");canvas[i][j_0] = '#';j_0++;}
                    if (j==n-1) {
                        printf(" #\n");
                        canvas[i][j_0] = ' ';
                        j_0++;
                        canvas[i][j_0] = '#';
                        j_0++;
                        canvas[i][j_0] = '\n';
                        j_0++;
                    }
                } else {
                    printf("  ");
                    canvas[i][j_0] = ' ';j_0++;
                    canvas[i][j_0] = ' ';j_0++;
                }
            }

        }
    }




    printf("\n\n\n\n");

    for (size_t i = 0; i<m ; i++){
        for (size_t j = 0; j<(n*2)+1 ; j++){
            printf("%c", canvas[i][j]);
        }
    }





}
