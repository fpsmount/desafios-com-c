#include <stdio.h>
#include <stdlib.h>	
#include <math.h>
//DESAFIO 01 - Escreva "Ol� Mundo" na tela

/*int main(){
	
	printf("Ol� mundo!");
	
}*/

//DESAFIO 02 - Fa�a um Programa que pe�a um n�mero e ent�o mostre a mensagem O n�mero informado foi [n�mero].

/*int main(){
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	printf("O numero informado foi: %d", num);
	
}*/

//DESAFIO 03 - Fa�a um Programa que pe�a dois n�meros e imprima a soma.

/*int main(){
	int num1, num2;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	printf("A soma dois numeros foi: %d", num1+num2);
	
}*/

//DESAFIO 04 - Fa�a um Programa que pe�a as 4 notas bimestrais e mostre a m�dia.

/*int main() {
	int nota[4];
	int i;
	int media;

	for (i = 0; i < 4; i++) {
		printf("Digite a nota %d: ", i + 1);
		scanf("%d", &nota[i]);
		media = nota[i];
	}

	media / 4;

	printf("A media eh: %d\n", media);

	return 0;
}*/
/*int main(){
	int nota1, nota2, nota3, nota4;
	int media;
	
	printf("Digite a primeira nota: ");
	scanf("%d", &nota1);
	printf("Digite a segunda nota: ");
	scanf("%d", &nota2);
	printf("Digite a terceira nota: ");
	scanf("%d", &nota3);
	printf("Digite a quarta nota: ");
	scanf("%d", &nota4);
	
	media = nota1, nota2, nota3, nota4 / 4;
	
	printf("A media eh: %d",media);
}*/

//DESAFIO 05 - Fa�a um Programa que converta metros para cent�metros.

/*int main(){
	int metro;
	int cem;
	
	printf("Digite os numeros em metros: ");
	scanf("%d", &metro);
	
	cem = metro*100;
	
	printf("%d metros sao %d cm",metro, cem);	
}*/

//DESAFIO 06 -Fa�a um Programa que pe�a o raio de um c�rculo, calcule e mostre sua �rea.
/*int main(){
	
	double raio, area;
	
	printf("Digite o raio do circulo: ");
	scanf("%lf", &raio);
	
	area = 3.14 * raio * raio;
	
	printf("A area do circulo eh igual a %.2lf", area);
}*/

//DESAFIO 07 - Fa�a um Programa que calcule a �rea de um quadrado, em seguida mostre o dobro desta �rea para o usu�rio.

/*int main(){
	
	double lado, area;
	
	printf("Digite o lado do quadrado: ");
	scanf("%lf",&lado);
	area = lado * lado * 2;
	printf("O dobro da area indicada eh %.2lf", area);	
}*/

//DESAFIO 08 - Fa�a um Programa que pergunte quanto voc� ganha por hora e o n�mero de horas trabalhadas no m�s. Calcule e mostre o total do seu sal�rio no referido m�s.

/*int main(){
	
	float horasTrab, GanhoHora, totalMes;
	
	printf("Quanto voce ganha por hora? ");
	scanf("%f", &GanhoHora);
	printf("Quantas horas vc trabalha por mes? ");
	scanf("%f", &horasTrab);
	totalMes = GanhoHora * horasTrab;
	printf("No mes vc ganha %.2f reais", totalMes);
}*/

//DESAFIO 09 - Fa�a um Programa que pe�a a temperatura em graus Farenheit, transforme e mostre a temperatura em graus Celsius. C = (5 * (F-32) / 9). 

/*int main(){
	float celsius, farenheit;
	
	printf("Digite a temperatura em Farenheits: ");
	scanf("%f", &farenheit);
	celsius = (5*(farenheit - 32) / 9);
	printf("a temperatura em celsius eh %.2f graus", celsius);	
}*/

//DESAFIO 10 - Fa�a um Programa que pe�a a temperatura em graus Celsius, transforme e mostre em graus Farenheit.

/*int main(){
	float celsius, farenheit;
	
	printf("Quantos graus celsius esta? ");
	scanf("%f", &celsius);
	farenheit = celsius * 1.8 + 32;
	printf("A temperatura digitada em farenheit eh %.2f", farenheit);	
}*/

//DESAFIO 11 - Fa�a um Programa que pe�a 2 n�meros inteiros e um n�mero real. 
//Calcule e mostre: o produto do dobro do primeiro com metade do segundo. a soma do triplo do primeiro com o terceiro. o terceiro elevado ao cubo.

/*int main(){
	int numInt1, numInt2;
	float numReal;
	
	printf("Digite um numero inteiro: ");
	scanf("%i", &numInt1);
	printf("Digite outro numero inteiro: ");
	scanf("%i", &numInt2);
	printf("Digite agora um numero real: ");
	scanf("%f", &numReal);
	
	numInt1 = (numInt1 * 2) + numInt2;
	numInt2 = (numInt1 * 3) + numReal;
	numReal = numReal * numReal * numReal;
	
	printf("O resultado deu: %i, %i, %f", numInt1, numInt2, numReal);

	
}*/

//DESAFIO 12 - Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal, usando a seguinte f�rmula: (72.7*altura) - 58

/*int main(){
	
	float altura, peso;
	
	printf("Digite a sua altura: ");
	scanf("%f", &altura);
	peso = (72.7*altura) - 58;
	printf("O seu peso ideal eh: %f ",peso);
}*/

//DESAFIO 13 - Tendo como dado de entrada a altura (h) de uma pessoa, 
//construa um algoritmo que calcule seu peso ideal, utilizando as seguintes f�rmulas: Para homens: (72.7h) - 58 Para mulheres: (62.1h) - 44.7

/*int main(){
	
	float h, pesoH, pesoM;
	int a;
	
	printf("Digite a sua altura: ");
	scanf("%f", &h);
	
	printf("Escolha uma opcao: \n");
	printf("1. Homem\n");
	printf("2. Mulher\n");
	printf("Opcao: \n");
	scanf("%i", &a);
	
	switch(a){
		case 1:
			printf("-----Peso ideal para Homens-----\n\n");
			pesoH = (72.7 * h) - 58;
			printf("O seu peso ideal eh: %.2f\n",pesoH);
		break;
		
		case 2:
			printf("-----Peso ideal para Mulher-----\n\n");
			pesoM = (62.1 * h) - 44.7;
			printf("O seu peso ideal eh: %.2f\n",pesoM);
		break;
		
		default:
			printf("Insira um valor valido!!");
		break;
		
	}
}
*/


//Jo�o Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento di�rio de seu trabalho.
//Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de S�o Paulo (50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente.
//Jo�o precisa que voc� fa�a um programa que leia a vari�vel peso (peso de peixes) e calcule o excesso.
//EXERCICIO 14 - Gravar na vari�vel excesso a quantidade de quilos al�m do limite e na vari�vel multa o valor da multa que Jo�o dever� pagar. 
//Imprima os dados do programa com as mensagens adequadas.

int main(){
	
	float kgPeixe, multa;
	int i;
	
	printf("Digite quantos quilos de peixe vc trouxe seu joao: ");
	scanf("%f", &kgPeixe);
	
	if (kgPeixe >= 50){
		multa = kgPeixe * 4;
		printf("O valor da sua multa eh: %f", kgPeixe);
	} else {
		printf("O valor nao foi ultrapassado!");
	}
	
}



