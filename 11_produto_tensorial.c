/**
 * Algoritmo exemplo para o uso da função de calculo do produto tensorial.
 * Recebe duas matrizes inseridas pelo usuário e apresenta o seu produto tensorial.
*/

#include "00_complex_matrix.h"

int main(){
    /** Entrada. *****************************************************************************/
    int la,ca,lb,cb;
    // Obtenção dos dados!
    printf("Digite a quantidade de linhas da matriz A: ");
    scanf("%d",&la);
    printf("Digite a quantidade de colunas da matriz A: ");
    scanf("%d",&ca);
    printf("Digite a quantidade de linhas da matriz B: ");
    scanf("%d",&lb);
    printf("Digite a quantidade de colunas da matriz B: ");
    scanf("%d",&cb);

    printf("\nDigite os valores para a matriz A");
    Complex **matrizA = makeMatrixFilled(la,ca);
    printf("\nDigite os valores para a matriz B");
    Complex **matrizB = makeMatrixFilled(lb,cb);

    /** Processamento. *****************************************************************************/
    Complex **tensorResult = tensorProduct(matrizA, la, ca, matrizB, lb, cb);

    /** Saída. *****************************************************************************/
    printf("\n********* Matriz A Digitado *********\n\n");
    printMatrix(matrizA,la,ca);
    printf("\n********* Matriz B Digitado *********\n\n");
    printMatrix(matrizB,lb,cb);
    printf("\n********* Produto tensorial *********\n\n");
    printMatrix(tensorResult,(la*lb),(ca*cb));
}