/** 
*/

#include "00_complex_matrix.h"

int main(){
    /** Entrada. *****************************************************************************/
    int n;
    // Obtenção dos dados!
    printf("Digite o tamanho dos vetores: ");
    scanf("%d",&n);

    printf("\nDigite os valores para o vetor A");
    Complex **A = makeMatrixFilled(n,1);
    printf("\nDigite os valores para o vetor B");
    Complex **B = makeMatrixFilled(n,1);

    /** Processamento. *****************************************************************************/
    Complex *scalar = calculateInnerProduct(A,B,n);

    /** Saída. *****************************************************************************/
    printf("\n********* Vetor A Digitado *********\n\n");
    printMatrix(A,n,1);
    printf("\n********* Vetor B Digitado *********\n\n");
    printMatrix(B,n,1);
    printf("\n********* Produto interno *********\n\n");
    printComplex(*scalar);
}