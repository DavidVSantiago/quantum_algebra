#include "00_complex_matrix.h"

int l,c;

int main(){
    
    Complex escalar;

    /** Entrada. *****************************************************************************/
    // Obtenção dos dados!
    printf("Digite a quantidade de linhas da matriz: ");
    scanf("%d",&l);
    printf("Digite a quantidade de colunas da matriz: ");
    scanf("%d",&c);

    Complex **matrix = makeMatrixFilled(l,c); // aloca a matriz e preenche do usuário

    printf("\n\nAgora digite o valor do escalar a ser multiplicado pela matriz. ");
    printf("\nDigite a parte real: ");
    scanf("%f",&escalar.real);
    printf("Digite a parte imaginaria: ");
    scanf("%f",&escalar.imag);

    /** Processamento. *****************************************************************************/
    Complex **resultMatrix = multiplyMatrixScalar(matrix,l,c,escalar);

    /** Saída. ************************************************************************************/
    // Impressão dos dados obtidos
    printf("\n\nMatriz digitada:\n");
    printMatrix(matrix,l,c);
    printf("\n\nMultiplicada pelo escalar: ");
    printComplex(escalar);
    printf(", resulta na matriz abaixo:\n\n");
    printMatrix(resultMatrix,l,c);
    printf("\n");

    return 0;
}