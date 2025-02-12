#include "00_complex_matrix.h"

int main(){
     /** Entrada. *****************************************************************************/
    int la,ca,lb,cb;
    // Obtenção dos dados!
    printf("Digite a quantidade de linhas da matriz 1: ");
    scanf("%d",&la);
    printf("Digite a quantidade de colunas da matriz 1: ");
    scanf("%d",&ca);
    printf("Digite a quantidade de linhas da matriz 2: ");
    scanf("%d",&lb);
    printf("Digite a quantidade de colunas da matriz 2: ");
    scanf("%d",&cb);

    // checagem de validade das matrizes
    if(ca!=lb){
        printf("Matrizes invalidas p/ multiplicacao! Numero de colunas da Matriz 1 deve ser igual ao de linhas da Matriz 2!");
        return 1; // erro!
    }

    // aloca a preenche a matriz 1
    printf("\n********* Digite os dados da matriz 01 *********\n");
    Complex **matrix_A = makeMatrixFilled(la,ca);

    // aloca a preenche a matriz 2
    printf("\n********* Digite os dados da matriz 02 *********\n");
    Complex **matrix_B = makeMatrixFilled(lb,cb);
    
    /** Processamento. *****************************************************************************/
    Complex **matrix_C = multiplyMatrices(matrix_A,la,ca,matrix_B,lb,cb);

    /** Saída. *****************************************************************************/
    printf("\n********* Seguem os resultados *********\n\n");
    printMatrix(matrix_A,la,ca);
    printf("\nmultiplicada por...\n\n");
    printMatrix(matrix_B,lb,cb);
    printf("\nresulta em...\n\n");
    printMatrix(matrix_C,la,cb);
    printf("\n");
    return 0;
}