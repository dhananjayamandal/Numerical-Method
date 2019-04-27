#include<stdio.h>
#include<math.h>
int main(){
    float xy[20][20], m[3][4], ratio, a;
    float sum_x = 0, sum_y = 0, sum_x2 = 0, sum_x3 = 0, sum_x4 = 0, sum_xy = 0, sum_x2y = 0;
    int i, j , k, n;
    printf("Enter no of data: ");
    scanf("%d", &n);
    printf("Enter the data: \n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < n; j++){
            scanf("%f", &xy[i][j]);
        }
    }
    for(i = 0; i < n; i++){
        sum_x += xy[0][i];
        sum_y += xy[1][i];
        sum_x2 += pow(xy[0][i], 2);
        sum_x3 += pow(xy[0][i], 3);
        sum_x4 += pow(xy[0][i], 4);
        sum_xy += xy[0][i]*xy[1][i];
        sum_x2y += pow(xy[0][i], 2) * xy[1][i];
    }
    m[0][0] = n;
    m[0][1] = sum_x;
    m[0][2] = sum_x2;
    m[0][3] = sum_y;
    m[1][0] = sum_x;
    m[1][1] = sum_x2;
    m[1][2] = sum_x3;
    m[1][3] = sum_xy;
    m[2][0] = sum_x2;
    m[2][1] = sum_x3;
    m[2][2] = sum_x4;
    m[2][3] = sum_x2y;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(i!=j){
                ratio = m[j][i]/m[i][i];
                for(k = 0; k < 4; k++){
                    m[j][k] -= ratio * m[i][k];
                }
            }
        }
    }
    for(i = 0; i < 3; i++){
        a = m[i][i];
        for(j = 0; j < 4; j++){
            m[i][j] /= a;
        }
    }
    for(i = 0; i < 3; i++){
    }
    printf("y=%f + %f *x+%f *x^2",m[0][3],m[1][3],m[2][3]);
    return 0;
}
