#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void out(int mas[3][3],int N, int M) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (mas[i][j] == M) {
                mas[i][j] = N;
            }
            printf("\ta[%d][%d]=%d", i, j, mas[i][j]);
        }
    }
}
void task8_1() {
    int mas[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    int n,m;
    printf("N, M:");
    scanf_s("%d %d", &n, &m);
    out(mas, n, m);
}


#define N 3
#define M 3
bool change(double mas[N][M], int i, int j, double a) {

    if (i >= N || j >= M) return false;
    mas[i][j] = a;
    return true;
}
void output1(double mas[N][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("\ta[%d][%d]=%lf", i, j, mas[i][j]);
        }
    }
}
void task8_2() {
    double mas[N][M] = { {1,2,3},{4,5,6},{7,8,9} };

    int i, j;
    double a;
    printf("i,j,a:");
    scanf_s("%d %d %lf", &i, &j, &a);

    if (change(mas, i, j, a))    output1(mas);
}


#define N1 20
#define M1 20
void task8_3() {
    int n, m;
    printf("n= ");
    scanf_s("%d", &n);
    printf("m= ");
    scanf_s("%d", &m);
    double mas[N1][M1];
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            printf("a[%d][%d]= ", i, j);
            scanf_s("%lf",&mas[i][j]);
        }
    }
    for (int i = 1; i <= m; i++) {
        printf("\n");
        for (int j = 1; j <= n; j++) {
            printf("%lf ", mas[i][j]);
        }
    }
}


#define N2 25
#define M2 25
void task8_4() {
    int mas[N2][M2];
    int n, m;
    printf("n= ");
    scanf_s("%d", &n);
    printf("m= ");
    scanf_s("%d", &m);

    for (int i = 1; i <= n; i++) {
        printf("string %d:", i);
        for (int j = 1; j <= m; j++) {
            scanf_s(" %d", &mas[i][j]);
        }
    }
    for (int i = 1; i <= n; i++) {
        printf("\n");
        for (int j = 1; j <= m; j++) {
            printf("%d ", mas[i][j]);
        }
    }
}


#define N3 2
int input_matr(int mas[N3][N3]) {
    for (size_t i = 0; i < N3; i++) {
        for (size_t j = 0; j < N3; j++) {
            printf("\na[%zu][%zu]= ", i, j);
            scanf_s("%d", &mas[i][j]);
        }
    }
    return 0;
}
void transp(int inp_matr[N3][N3], int out_matr[N3][N3]) {
    for (size_t i = 0; i < N3; i++) {
        for (size_t j = 0; j < N3; j++) {
            out_matr[i][j] = inp_matr[j][i];
        }
    }
}
void output(int mas[N3][N3]) {
    for (size_t i = 0; i < N3; i++) {
        printf("\n");
        for (size_t j = 0; j < N3; j++) {
            printf("\ta[%zu][%zu]=%d", i, j, mas[i][j]);
        }
    }
}

void task8_5() {
    int mas[N3][N3];
    input_matr(mas);
    int mas2[N3][N3];
    transp(mas, mas2);
    output(mas2);
}


#define N4 3
#define M4 3
float sub_diag(double inp_matr[N4][M4], int k) {
    float res = 0.f;
    for (int i = 0; i < N4; i++) {
        if ((i - k >= 0) && (i - k <= M)) {
            res += inp_matr[i][i - k];
        }
    }
    return res;
}

void task8_6() {
    double mas[N4][M4];
    for (int i = 0; i < N4; i++) {
        for (int j = 0; j < M4; j++) {
            printf("a[%d][%d]= ", i, j);
            scanf_s("%lf", &mas[i][j]);
        }
    }
    int k;
    printf("k = ");
    scanf_s("%d", &k);
    for (int i = 0; i < N4; i++) {
        printf("\n");
        for (int j = 0; j < M4; j++) {
            printf("%lf ", mas[i][j]);
        }
    }
    printf("\n sub=%f", sub_diag(mas, k));
}


#define N5 3
void prog8_7() {
    double mas[N5][N5],det;
    for (int i = 1; i <= N5; i++) {
        for (int j = 1; j <= N5; j++) {
            printf("a[%d][%d]= ", i, j);
            scanf_s("%lf", &mas[i][j]);
        }
    }
    det = mas[1][1] * (mas[2][2] * mas[3][3] - mas[2][3] * mas[3][2]) - mas[1][2] * (mas[2][1] * mas[3][3] - mas[3][1] * mas[2][3]) + mas[1][3] * (mas[2][1] * mas[3][2] - mas[2][2] * mas[3][1]);
    printf("det = %lf", det);
}


int main() {
  //task8_1();
  //task8_2();
  //task8_3();
  //task8_4();
  //task8_5();
  //task8_6();
  //task8_7();
}
