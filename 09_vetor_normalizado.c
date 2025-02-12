/** 
*/

#include "00_complex_matrix.h"

int main(){
    /** Entrada. *****************************************************************************/
    int n;
    // Obtenção dos dados!
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);
    printf("\nDigite os valores para o vetor");
    Complex **A = makeMatrixFilled(n,1);

    /** Processamento. *****************************************************************************/
    Complex **result = calculateNormalizedVector(A,n);

    /** Saída. *****************************************************************************/
    printf("\n********* Vetor Digitado *********\n\n");
    printMatrix(A,n,1);
    printf("\n********* Vetor Normalizado *********\n\n");
    printMatrixAsFloat(result,n,1);
}