//**************************************************************************
//**************************************************************************
//**
//**	Projekt: Aggregatszustand	
//**    ***************************************
//**
//**	Filename: Main.c
//**
//**    Name: micha  
//**	Date: 07.12.2021 18:55:15
//**	
//**	Description:
//**    
//**
//**
//**
//**************************************************************************
//**************************************************************************

//Includes
//**************************************************************************
#include <stdio.h>
#include <math.h>

//Defines & Pragmas
//**************************************************************************
#pragma warning(disable:4996) //Disable warning scanf unsafe
#pragma warning(disable:6031) //Disable warning return getchar()


//Functions
//**************************************************************************


int main(void)
{
	//Variables
	float f_Temperatur = 0;
	float f_Menge = 0;
	float f_Gewicht = 0;
	float f_Dampf = 0;



	//Code
	printf("Bitte Temperatur des Wassers in Grad Celsius angeben\n");
	scanf("%f", &f_Temperatur);

	printf("Bitte Wassermenge in Litern angeben\n");
	scanf("%f", &f_Menge);

	if (f_Temperatur < 0)
	{
		printf("Es handelt sich um Eis\n");
		printf("Das Gewicht betraegt %f Kilo\n", f_Gewicht = (f_Menge / 1000) * 918);
	}
	else if (0<=f_Temperatur && f_Temperatur <= 100)
	{
		printf("Es handelt sich um fluessiges Wasser\n");
		printf("Das Gewicht betraegt %f Kilo\n", f_Gewicht = f_Menge);
	}
	else if (f_Temperatur > 100)
	{
		printf("Es handelt sich um Dampf\n");
		printf("Die Dampfmenge betraegt %f\n", f_Dampf = 920 * f_Menge);
	}



	getchar();
	fflush(stdin);
	getchar();
	return 0;
}