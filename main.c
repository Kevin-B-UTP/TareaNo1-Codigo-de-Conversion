#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <windows.h>

int main(int argc, char *argv[]) 
{
	int numD[100];
	int numD2=0, sum=0, sel=0, x=0;
	char numR[100], sel2;
	SetConsoleTitle("CONVERTIDOR DE NUMEROS - KEVIN BRENNAN");
	setlocale (LC_ALL, "Spanish");	
	
	while(sel!=3)
	{
	
		printf("\n=========CONVERTIDOR DE NUMEROS==================================\n");
		printf("\nTECLEE EL NÚMERO CORRESPONDIENTE A LA OPCIÓN QUE DESEA ELEGIR\n");		
		printf("\n\n1.CONVERTIR A NÚMEROS ROMANOS");
		printf("\n\n2.CONVERTIR A NÚMEROS ARÁBIGOS");
		printf("\n\n3.SALIR");
		printf("\n=================================================================\n");	
		scanf("%d", &sel);
			switch (sel)
			{
			case 1: 
				do
				{	
				printf("INSERTE VALORES ENTRE 1 - 100\n");
				printf("NÚMERO DECIMAL: ");
				scanf("%d", &numD2);
				printf("NÚMERO ROMANO: ");
					while(numD2 != 0)
					{
						if (numD2 >= 100)	
						{
							printf("C");
							numD2 -= 100;
						}
							else if (numD2 >= 90)
							{
								printf("XC");
								numD2 -= 90;
							}
								else if	(numD2 >= 50)	
								{
									printf("L");
									numD2 -= 50;
								}
									else if	(numD2 >= 40)	
									{
										printf("XL");
										numD2 -= 40;
									}						
										else if	(numD2 >= 10)	
										{
											printf("X");
											numD2 -= 10;
										}	
											else if	(numD2 >= 9)	
											{
												printf("IX");
												numD2 -= 9;
											}	
												else if	(numD2 >= 5)	
												{
													printf("V");
													numD2 -= 5;
												}	
													else if	(numD2 >= 5)	
													{
														printf("IV");
														numD2 -= 4;
													}	
														else if	(numD2 >= 1)	
														{
															printf("I");
															numD2 -= 1;
														}			
					}
					printf("\n");
					printf("DESEA CONVERTIR OTRO NÚMERO A ROMANO? (Y/N) \n");
					scanf(" %c",&sel2);
				} while(sel2 != 'N' && sel2 != 'n');
				printf("\n");
				system("pause");
				system("cls");
				break;
			case 2:	
				do
				{
					printf("\nNÚMERO ROMANO: ");
					scanf ("%s", &numR);
				
						for (x = 0; x < strlen(numR); x++)
							{
								switch(numR[x])
								{
									case 'I':
										sum=1;
										break;
									case 'i':
										sum=1;
										break;	
									case 'V':
										sum=5;
										break;	
									case 'v':
										sum=5;
										break;		
									case 'X': 
										sum=10;
										break;
									case 'x': 
										sum=10;
										break;	
									case 'L':
										sum=50;
										break;
									case 'l':
										sum=50;
										break;	
									case 'C':
										sum=100;
										break;
									case 'c':
										sum=100;
										break;	
									default:
										break;
								}
								numD2 += sum;
							}
						printf("NÚMERO ARÁBIGO:  %d\n",numD2 );
						numD2 = 0;	
						printf("\n");
						printf("DESEA CONVERTIR OTRO NÚMERO A ARÁBIGO? (Y/N) \n");
						scanf(" %c",&sel2);
				} while(sel2 != 'N' && sel2 != 'n');
				system("pause");
				system("cls");		
				break;
		default:
				break;
		}
	}
	return 0;
}
