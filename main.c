#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

void show_record();
void reset_score();
void help();
void edit_score(float , char []);

int main()
     {
 	 char choice;
     mainhome:
     system("cls");
     printf("\n\t\t\t   WELCOME ");
     printf("\n\t\t\t      to ");
     printf("\n\t\t\tTRIVIA BLAAAAST ");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > press I to know the Instructions       ");
     printf("\n\t\t > press Q to quit             ");
     choice=toupper(getch());
	if (choice=='Q')
	exit(1);
	if(choice=='S')
	{
		goto home;
	}
    else if(choice=='I')
    {
    system("cls");
    printf("\n __________________________________ Welcome to Trivia Blaaaaaaaaaaaaast ______________________________________");
    printf("\n >>\t\t\t\tThis trivia blast is composed of 3 rounds \t\t\t\t << \n >> \t\t\t\tEach round is composed of 5 questions \t\t\t\t\t <<");
    printf("\n >>\t\t\t\tThe questions get harder as the round goes higher\t\t\t <<");
    printf("\n >> \t\t\t\tThe questions could be about anything \t\t\t\t\t <<");
    printf("\n >> \t\tYou will be given 4 options and you have to press A, B ,C or D for the right option.\t <<");
    printf("\n >> \t\t\tYou will be asked questions continuously, till right answers are given\t\t <<");
    printf("\n >> \t\tYou need to get at least three correct answers to be able to proceed to the next round.\t <<");
    printf("\n\n\n-----------------------------------GOOD LUCK!\t and \t GOD BLESS!---------------------------------------");
    printf("\n\n\n Press B  to start the game!\n");
    printf("\n Press Q to quit");
    if (toupper(getch())=='B')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

	int count, idx, idx1,cntr,idxr,s,cnts,idx2,idx3;
 
    	home :
     system("cls");
     count=0;
     for(idx=1;idx<=5;idx++)
     {
    system("cls");
     idx1=idx;
     
     switch(idx1)
		{
		case 1:
		printf("\n\nWhose name did the America named after for? ");
		printf("\n\nA.Amerigo Vespucci\t\tB.Amerigo Dela Cruz\n\nC. Columbos de Amerigo\t\tD.Christopher Columbos");
		if (toupper(getch())=='A')
			{
			    printf("\n\nCorrect!!!");count++;
			    getch();
			    break;
}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is A. Amerigo Vespucci");
		           getch();
		       break;
		       }
		case 2:
		printf("\n What country did the French Fries originated?\n");
		printf("\n\nA.France\t\tB.Italy\n\nC.Belgium\t\tD.Germany");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!!!");count++;
			    getch();
			    break;
}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is C.Belgium");
		           getch();
		       break;
		       }
		       
		case 3:
		printf("\n What is the capital city of Qatar?\n");
		printf("\n\nA.Ankarra\t\tB.Doha\n\nC. Manila\t\tD.Berlin");
		if (toupper(getch())=='B')
			{
			    printf("\n\nCorrect!!!");count++;
			    getch();
			    break;
}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is B.Doha");
		           getch();
		       break;
		       }       		       
		case 4:
		printf("\nWho's the last president of the 3rd Philippine Republic?\n");
		printf("\n\nA.Manuel Roxas\t\tB.Rodrigo Duterte\n\nC. Diosdado Macapagal\t\tD.Ferdinand Marcos");
		if (toupper(getch())=='D')
			{
			    printf("\n\nCorrect!!!");count++;
			    getch();
			    break;
}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is D. Ferdinand Marcos");
		           getch();
		       break;
		       }    	   
		case 5:
		printf("\nWhat is the softest mineral?\n");
		printf("\n\nA.Talc\t\tB.mohs\n\nC. gold\t\tD.flour");
		if (toupper(getch())=='A')
			{
			    printf("\n\nCorrect!!!");count++;
			    getch();
			    break;
}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is A. Talc");
		           getch();
		       break;
		       }     	
}
}
if(count>=3)
	{goto test;}
	else
	{
	system("cls");
	printf("\n \n\t You got %d correct responses out of 5", count);
	printf("\n\nSorry, you cannot proceed to the next round. Press enter to go back to the main menu.");
	getch();
	goto mainhome;
	}
     test:
     system("cls");
     printf("\n \n\t\t You got %d correct responses out of 5", count);
     printf("\n\n\t*** CONGRATULATIONS you can now proceed to round 2. ***");
     printf("\n\n\n\n\t  Press enter to proceed to the next round!");
     if(toupper(getch())=='o')
		{goto game;}
	 game:
     cntr=0;
     for(idx=1;idx<=5;idx++)
     {system("cls");
     idx2=idx;
    
	switch(idx2)
		{
		case 1:
		printf("\n\nWhat is the square root of 169 ?");
		printf("\n\nA.12\t\tB.39\n\nC.23\t\tD.13");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");cntr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is D.13");getch();
		       break;}
		case 2:
		printf("\n\nWhat year did the Philippines first hosted the Miss Universe?");
		printf("\n\nA.1994\t\tB.1974\n\nC.1975\t\tD.2016");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");cntr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is B.1974");getch();
		       break;}
		case 3:
		printf("\n\nWhat is the highest grossing movie of all time?");
		printf("\n\nA.Avatar\t\tB.Titanic\n\nC.Star Wars\t\tD.The How's of Us");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");cntr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Avatar");getch();
		       break;}
		case 4:
		printf("\n\nWhat is the most viewed video on youtube as of 2018?");
		printf("\n\nA.Gangman Style\t\tB.Shape of You\n\nC.Despacito\t\tD.New Rules");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");cntr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Despacito");getch();
		       break;}
		case 5:
		printf("\n\nWho is the richest man of the world as of 2018?");
		printf("\n\nA.Charles Koch\t\tB.Mark Zuckerberg\n\nC.Bill Gates\t\tD.Jeff Bezos");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");cntr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Jeff Bezos");getch();
		       break;}
}
}
if(cntr>=3)
	{goto test1;}
	else
	{
	system("cls");
	printf("\n \n\t You got %d correct responses out of 5", cntr);
	printf("\n\nSorry, you cannot proceed to the next round. Press enter to go back to the main menu.");
	getch();
	goto mainhome;
	}
     test1:
     system("cls");
     printf("\n \n\t\t You got %d correct responses out of 5", cntr);
     printf("\n\n\t*** CONGRATULATIONS you can now proceed to round 2. ***");
     printf("\n\n\n\n\t  Press enter to proceed to the next round!");
     
     if(toupper(getch())=='o')
		{goto game1;}
	 game1:
     cnts=0;
     for(idx=1;idx<=5;idx++)
     {system("cls");
     idx3=idx;
     
      switch(idx3)
		{
		case 1:
		printf("\n\nWhat is the coldest place on Earth?");
		printf("\n\nA.North Ice\t\tB.Oymyakon\n\nC.Verkhoyansk\t\tD.Barrow");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");cnts++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Verkhoyansk");getch();
		       break;}
		case 2:
		printf("\n\nWhat is the biggest tree of the world?");
		printf("\n\nA.Methuselah\t\tB.giant sequoia\n\nC.Dwarf Willow\t\tD.Baobab");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");cnts++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is B.giant sequoia");getch();
		       break;}
	    case 3:
		printf("\n\nWhich space craft set off for Jupiter in 1972?");
		printf("\n\nA.Vulture Droid\t\tB.Soulless One\n\nC.Pioneer 10\t\tD.Sputnik");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");cnts++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Pioneer 10");getch();
		       break;}
		case 4:
		printf("\n\nWhat is the oldest city of the world?");
		printf("\n\nA.Damascus\t\tB.Athens\n\nC.Argos\t\tD.Jericho");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");cnts++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Damascus");getch();
		       break;}
		case 5:
		printf("\n\nWhat was the word vini, vidi, vici?");
		printf("\n\nA.I hate, I forgive, I love\t\tB.Jhunnel,Jenre, Carryl\n\nC.Let there be light\t\tD.I came, I saw, I conquered");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");cnts++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is D.I came, I saw, I conquered");getch();
		       break;}
}
}
	if(cnts>=3)
	{goto test2;}
	else
	{
	system("cls");
	printf("\n \n\t You got %d correct responses out of 5", cnts);
	printf("\n \n\t SORRY, TRY AGAIN! Please press enter to go back to the main menu.");
	getch();
	goto mainhome;
	}
     test2:
     system("cls");
     printf("\n \n\t\t\t                      You got %d correct responses out of 5", cnts);
   	 printf("\n\n\t-----------------------------------------------------------------------------------------------------");
   	 printf("\n\t|                                                                                                      |");
   	 printf("\n\t|                                                                                                      |");
   	 printf("\n\t|                                                                                                      |");
   	 printf("\n\t|                                                                                                      |");
   	 printf("\n\t|                                           GRATULATIO!                                                |");
   	 printf("\n\t|                                                                                                      |");
   	 printf("\n\t|                                        TU VERE STELLA!!                                              |");
   	 printf("\n\t|                                                                                                      |");
   	 printf("\n\t|                                                                                                      |");
   	 printf("\n\t|                                                                                                      |");
   	 printf("\n\t|                                                                                                      |");
	 printf("\n\t-------------------------------------------------------------------------------------------------------");
	 if(toupper(getch())=='o')
		{goto mainhome;}
}
}
