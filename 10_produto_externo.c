/** 
*/

#include "00_complex_matrix.h"

int main(){
    /** Entrada. *****************************************************************************/
    int sizeA,sizeB;
    // Obtenção dos dados!
    printf("Digite o tamanho do vetor A: ");
    scanf("%d",&sizeA);
    printf("\nDigite o tamanho do vetor B: ");
    scanf("%d",&sizeB);

    printf("\nDigite os valores para o vetor A");
    Complex **A = makeMatrixFilled(sizeA,1);
    printf("\nDigite os valores para o vetor B");
    Complex **B = makeMatrixFilled(sizeB,1);

    /** Processamento. *****************************************************************************/
    Complex **matrix = calculateOuterProduct(A,sizeA,B,sizeB);

    /** Saída. *****************************************************************************/
    printf("\n********* Vetor A Digitado *********\n\n");
    printMatrix(A,sizeA,1);
    printf("\n********* Vetor B Digitado *********\n\n");
    printMatrix(B,sizeB,1);
    printf("\n********* Produto externo *********\n\n");
    printMatrix(matrix,sizeA,sizeB);
}