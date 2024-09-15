//////////////////////////////WORD GUESSING GAME PROJECT///////////////////
#include"stdio.h"
#include"conio.h"
#include"string.h"

//////declarartions For Quize Game//////////////

int ANS[10]={3,1,4,2,1,2,1,1,4,1};
int ans[10];
int Q;

void quize_game();
void Play_quize_game();
void quize_home_interface();
void check_ans();

//////declarartions For Word Guessing Game//////
char word[][10]={"computer","debug","mobile","college","life","universe","education","keyboard","window","end"};
char w[20];
int chance,score,size,check;
int ch;
int R,W;

void word_guessing_game();
void chances();
void score_();
void play_game();
void game_above_interface();
void checkword();
void final_result();


void main()
{
	home:
	clrscr();

	printf("\n\t***************************************************************");
	printf("\n\t||                                                           ||");
	printf("\n\t||          WELCOME TO MR.KHAN GAMING WORLD                  ||");
	printf("\n\t||                                                           ||");
	printf("\n\t***************************************************************\n");

	printf("\n\t   _________________________________________________________");
	printf("\n\t   ||-----MENUES:-----------------------------------------||");
	printf("\n\t   ||                                                  	  ||");
	printf("\n\t   ||     PRESS 1 : TO PLAY WORD GUESSING GAME.	          ||");
	printf("\n\t   ||							  ||");
	printf("\n\t   ||     PRESS 2 : TO PLAY QIUZE GAME.		   	  ||");
	printf("\n\t   ||                                                  	  ||");
	printf("\n\t   ||     PRESS 3 : To Exit.			          ||");
	printf("\n\t   || 					                  ||");
	printf("\n\t   ||-----------------------------------------------------||");

	printf("\n\n\n\t\tCHOOSE AN OPTION : ");
	scanf("%d",&ch);

	if(ch==1)
	{
		word_guessing_game();
		goto home;
	}
	else if(ch==2)
	{
		quize_game();
		goto home;
	}
	else if(ch==3)
	{
		  printf("\n\n\t\tPlease Wait, Exiting......");
		  delay(1000);
		  goto exit;
	}
	else
	{
		  printf("\n\n\t\tInvalid Choice......!");
	}



getch();
exit:
}


void word_guessing_game()
{
	char ch;
	int choice;
	clrscr();
	size=sizeof(word)/sizeof(word[0]);

	//////HOME MENUE//////////

	printf("\n    ___________________WELCOME TO WORD GUESSING GAME___________________");
	printf("\n    *******************************************************************");

	printf("\n\n\n\t# INSTRUCTIONS & RULES : ");

	printf("\n\t___________________________________________________________");
	printf("\n\n\t  1) You Have To Guess Total 10 Words.");
	printf("\n\t  2) You Will Get 10 Point When One Word Is Guesses Correct.");
	printf("\n\t  3) You Have To Score Minimum 70 to Win The Game.");
	printf("\n\t  4) There are Only 2 Chances To Guess a Single Word.");
	printf("\n\t  5) You Have To Enter The Words In Small Letters");
	printf("\n\t___________________________________________________________");

	printf("\n\n\t  PRESS Y to Start Game  ");
	printf("\n\t  PRESS N to Exit Game  ");

	printf("\n\n\n\t  Enter Your Choice : ");
	fflush(stdin);
	scanf("%c",&ch);

	if(ch=='Y'|| ch=='y')
	{
	  printf("\n\n\t  Please Wait Loading.....");
	  delay(1000);
	  printf("\n\n\t  Lets Play Game");
	  delay(500);
	  play_game();
	}
	else
	{
	  printf("\n\n\t  Please Wait, Exiting......");
	  delay(1000);
	  goto exit;
	}


exit:
}

//////////////////////GAME QUESTIONS FIUNCTIONS////////////////
void play_game()
{

score=0;
R=0,W=0;
////// 1st Question//////
	chance=0;
	ch=2;
	clrscr();
	game_above_interface();
	score_();
	chances();
	printf("\n\n\n\tHINT:The Word is about technology. ");
	again:
	printf("\n\n\t1]  c_mp_t_r : ");
	fflush(stdin);
	gets(w);
	printf("\n\t");
	checkword();
	chance++;
	ch--;
	if(chance==2 && check==3)
	{
		  W++;
		  chances();
		  printf("\n\n\n\n\n\n\n\n\n\n");
		  printf("\n\n\tYour Two Chances Finishes...!");
		  delay(2000);
		  goto next1;
	}
	if(check==3)
	{
		chances();
		printf("\n\n\n\n\n\n\n\n");
		goto again;
	}
	if(check==11)
	{
		goto exit;
	}

////////// 2nd Question ////////
	next1:
	chance=0;
	ch=2;
	clrscr();
	game_above_interface();
	score_();
	chances();
	printf("\n\n\n\tHINT:The Process Of Finding Error");
	a1:
	printf("\n\n\t2]  D_b_g : ");
	fflush(stdin);
	gets(w);
	printf("\n\t");
	checkword();
	chance++;
	ch--;
	if(chance==2 && check==3)
	{
		W++;
		chances();
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("\n\n\tYour Two Chances Finishes...!");
		delay(2000);
		goto next2;
	}
	if(check==3)
	{
		chances();
		printf("\n\n\n\n\n\n\n\n");
		goto a1;
	}
	if(check==11)
	{
		goto exit;
	}

///////// 3rd Question //////////
	next2:
	chance=0;
	ch=2;
	clrscr();
	game_above_interface();
	score_();
	chances();
	printf("\n\n\n\tHINT:The Thing Which Become Basic Need Of Humas Today");
	a2:
	printf("\n\n\t3]  _ob_l_ : ");
	fflush(stdin);
	gets(w);
	printf("\n\t");
	checkword();
	chance++;
	ch--;
	if(chance==2 && check==3)
	{
		   W++;
		   chances();
		   printf("\n\n\n\n\n\n\n\n\n\n");
		   printf("\n\n\tYour Two Chances Finishes...!");
		   delay(2000);
		   goto next3;
	}
	if(check==3)
	{
		chances();
		printf("\n\n\n\n\n\n\n\n");
		goto a2;
	}
	if(check==11)
	{
		goto exit;
	}

///////// 4th Question //////////
	next3:
	chance=0;
	ch=2;
	clrscr();
	game_above_interface();
	score_();
	chances();
	printf("\n\n\n\tHINT:The Beautiful & Main Turning Poin Of Life.");
	a3:
	printf("\n\n\t4]  co_l_g_ : ");
	fflush(stdin);
	gets(w);
	printf("\n\t");
	checkword();
	chance++;
	ch--;
	if(chance==2 && check==3)
	{
		  W++;
		  chances();
		  printf("\n\n\n\n\n\n\n\n\n\n");
		  printf("\n\n\tYour Two Chances Finishes...!");
		  delay(2000);
		  goto next4;
	}
	if(check==3)
	{
		chances();
		printf("\n\n\n\n\n\n\n\n");
		goto a3;
	}
	if(check==11)
	{
		goto exit;
	}

///////// 5th Question //////////
	next4:
	chance=0;
	ch=2;
	clrscr();
	game_above_interface();
	score_();
	chances();
	printf("\n\n\n\tHINT:The Journey Of Every Single Man .");
	a4:
	printf("\n\n\t5]  _i_e : ");
	fflush(stdin);
	gets(w);
	printf("\n\t");
	checkword();
	chance++;
	ch--;
	if(chance==2 && check==3)
	{
		  W++;
		  chances();
		  printf("\n\n\n\n\n\n\n\n\n\n");
		  printf("\n\n\tYour Two Chances Finishes...!");
		  delay(2000);
		  goto next5;
	}
	if(check==3)
	{
		chances();
		printf("\n\n\n\n\n\n\n\n");
		goto a4;
	}
	if(check==11)
	{
		goto exit;
	}

///////// 6th Question //////////
	next5:
	chance=0;
	ch=2;
	clrscr();
	game_above_interface();
	score_();
	chances();
	printf("\n\n\n\tHINT:The Biggest Unit than Planets.");
	a5:
	printf("\n\n\t6]  u_i_e_s_ : ");
	fflush(stdin);
	gets(w);
	printf("\n\t");
	checkword();
	chance++;
	ch--;
	if(chance==2 && check==3)
	{
		  W++;
		  chances();
		  printf("\n\n\n\n\n\n\n\n\n\n");
		  printf("\n\n\tYour Two Chances Finishes...!");
		  delay(2000);
		  goto next6;
	}
	if(check==3)
	{
		chances();
		printf("\n\n\n\n\n\n\n\n");
		goto a5;
	}
	if(check==11)
	{
		goto exit;
	}
///////// 7th Question //////////
	next6:
	chance=0;
	ch=2;
	clrscr();
	game_above_interface();
	score_();
	chances();
	printf("\n\n\n\tHINT:Everyone has right to get this thing .");
	a6:
	printf("\n\n\t7] _du_a_i_n : ");
	fflush(stdin);
	gets(w);
	printf("\n\t");
	checkword();
	chance++;
	ch--;
	if(chance==2 && check==3)
	{
		  W++;
		  chances();
		  printf("\n\n\n\n\n\n\n\n\n\n");
		  printf("\n\n\tYour Two Chances Finishes...!");
		  delay(2000);
		  goto next7;
	}
	if(check==3)
	{
		chances();
		printf("\n\n\n\n\n\n\n\n");
		goto a6;
	}
	if(check==11)
	{
		goto exit;
	}

///////// 8th Question //////////
	next7:
	chance=0;
	ch=2;
	clrscr();
	game_above_interface();
	score_();
	chances();
	printf("\n\n\n\tHINT:The Biggest Unit than Planets.");
	a7:
	printf("\n\n\t8]  _e_bo_rd : ");
	fflush(stdin);
	gets(w);
	printf("\n\t");
	checkword();
	chance++;
	ch--;
	if(chance==2 && check==3)
	{
		  W++;
		  chances();
		  printf("\n\n\n\n\n\n\n\n\n\n");
		  printf("\n\n\tYour Two Chances Finishes...!");
		  delay(2000);
		  goto next8;
	}
	if(check==3)
	{
		chances();
		printf("\n\n\n\n\n\n\n\n");
		goto a7;
	}
	if(check==11)
	{
		goto exit;
	}

///////// 9th Question //////////
	next8:
	ch=2;
	chance=0;
	clrscr();
	game_above_interface();
	score_();
	chances();
	printf("\n\n\n\tHINT:It is The Component Of Every House.");
	a8:
	printf("\n\n\t9]  _in_ow : ");
	fflush(stdin);
	gets(w);
	printf("\n\t");
	checkword();
	chance++;
	ch--;
	if(chance==2 && check==3)
	{
		  W++;
		  chances();
		  printf("\n\n\n\n\n\n\n\n\n\n");
		  printf("\n\n\tYour Two Chances Finishes...!");
		  delay(2000);
		  goto next9;
	}
	if(check==3)
	{
		chances();
		printf("\n\n\n\n\n\n\n\n");
		goto a8;
	}
	if(check==11)
	{
		goto exit;
	}

///////// 10th Question //////////
	next9:
	chance=0;
	ch=2;
	clrscr();
	game_above_interface();
	score_();
	chances();
	printf("\n\n\n\tHINT:It is Simpe Word Which Declare Finished Work.");
	a9:
	printf("\n\n\t10]  e_d : ");
	fflush(stdin);
	gets(w);
	printf("\n\t");
	checkword();
	chance++;
	ch--;
	if(chance==2 && check==3)
	{
		  W++;
		  chances();
		  printf("\n\n\n\n\n\n\n\n\n\n");
		  printf("\n\n\tYour Two Chances Finishes...!");
		  delay(2000);
		  goto next10;
	}
	if(check==3)
	{
		chances();
		printf("\n\n\n\n\n\n\n\n");
		goto a9;
	}
	if(check==11)
	{
		goto exit;
	}

next10:
final_result();
exit:
}

////////////////FUNCTION TO CHECK WHETHER THE WORD IS CORRECT OR NOT /////////
void checkword()
{
	int i;
	check=1;

	if(strcmp(w,"exit")==0)
	{
		check=11;
		printf("\n\n\tPlease Wait, Exiting.....");
		delay(700);
		goto exit;
	}

	   for(i=0;i<size;i++)
	   {
		if(strcmp(w,word[i])==0)
		{
			 R++;
			 check=0;
			 score=score+10;
			 delay(400);
			 printf("\n\tCorret Answer");
			 printf("\n\tYou Got 10 Point.");
			 delay(1300);
		}
	   }

	   if(check==1)
	   {
		  check=3;
		  printf("Wrong Answer.....! Try Again");
		  delay(2000);
	   }

exit:
}

///////////////////GAME HEADER INTERFACE////////////
void game_above_interface()
{

//textcolor(YELLOW);
//textbackground(1);
printf("\n\t");
cprintf("||///////////////////////////////////////////////////||");
printf("\n\t");
printf("||               WORD GUESSING GAME                  ||");
printf("\n\t");
printf("||///////////////////////////////////////////////////||");


printf("\n\n\n\t# GUESS THE FOLLOWING WORDS : ");
printf("\n\n\t______________________________");

}

//////////////FUNCTION TO CALCULATE SCORE////////////
void score_()
{

	////////Right/Wrong Answer Board/////
	gotoxy(66,2);
	printf("|------|------|");
	gotoxy(66,3);
	printf("|  R   |  W   |");
	gotoxy(66,4);
	printf("|------|------|");
	gotoxy(66,5);
	printf("|      |      |");
	gotoxy(66,6);
	printf("|-------------|");
	gotoxy(69,5);
	printf("%d",R);
	gotoxy(76,5);
	printf("%d",W);

	///////////// SCORE BOARD//////
	gotoxy(66,6);
	printf("|-------------|");
	gotoxy(66,7);
	printf("|             |");
	gotoxy(66,8);
	printf("|-------------|");
	gotoxy(69,7);
	fflush(stdout);
	printf("SCORE : %d\n",score);

}

//////////////FUNCTION TO CALCULATE REMAINING CHANCES /////////////
void chances()
{
	gotoxy(66,8);
	printf("|-------------|");
	gotoxy(66,9);
	printf("|             |");
	gotoxy(66,10);
	printf("|-------------|");
	gotoxy(69,9);
	fflush(stdout);
	printf("CHANCE : %d\n",ch);

}

void final_result()
{
	 clrscr();

	if(score>=70)
	{
		printf("\n\n\t\tCongratulations !");
		printf("\n\n\t\tYou won The Game ");
	}
	else
	{
		printf("\n\n\t\tSorry but... !");
		printf("\n\n\t\tYou Lose The Game ");
	}
		printf("\n\t\t_______________________________");
		printf("\n\t\t|                             |");
		fflush(stdout);
		printf("\n\t\t|   TOTAL RIGHT ANSWSERS : %d  |",R);
		fflush(stdout);
		printf("\n\t\t|   TOTAL WRONG ANSWSERS : %d  |",W);
		printf("\n\t\t|_____________________________|");
		printf("\n\t\t-------------------------------");
		fflush(stdout);
		printf("\n\t\t SCORE : %d",score);
		printf("\n\t\t-------------------------------");
getch();
}


///////////////////////////////////QUIZE GAME FUNCTION/////////////////////////

void quize_game()
{
	char ch;
	int choice;
	clrscr();
	size=sizeof(word)/sizeof(word[0]);

	//////HOME MENUE FOr QUIZE GAME//////////

	printf("\n    ___________________WELCOME TO QIUZE GAME___________________________");
	printf("\n    *******************************************************************");

	printf("\n\n\n\t# INSTRUCTIONS & RULES : ");

	printf("\n\t___________________________________________________________");
	printf("\n\n\t  1) You Have To Answer Total 10 Question .");
	printf("\n\t  2) You Will Get 10 Point When One Question Is Answered Correct.");
	printf("\n\t  3) You Have To Score Minimum 70 to Win The Game.");
	printf("\n\t  4) There are Only 2 Chances To Answer a Question .");
	printf("\n\t  5) You Have To Enter The Number Of Displayed Options");
	printf("\n\t___________________________________________________________");

	printf("\n\n\t  PRESS Y to Start Game  ");
	printf("\n\t  PRESS N to Exit Game  ");

	printf("\n\n\n\t  Enter Your Choice : ");
	fflush(stdin);
	scanf("%c",&ch);

	if(ch=='Y'|| ch=='y')
	{
	  printf("\n\n\t  Please Wait Loading.....");
	  delay(1000);
	  printf("\n\n\t  Lets Play Game");
	  delay(500);
	  Play_quize_game();
	}
	else
	{
	  printf("\n\n\t  Please Wait, Exiting......");
	  delay(1000);
	  goto exit;
	}

exit:

}

void Play_quize_game()
{

score=0;
R=0,W=0;

////// 1st Question//////
	Q=0;
	clrscr();
	quize_home_interface();
	score_();
	printf("\n\n\n\t Q.1] Which Is Richest Person In 2023.");
	printf("\n\n\t ---------------------------------------");
	printf("\n\t | 1. Bill Gates  |  2.Bernard Arnault |");
	printf("\n\t ---------------------------------------");
	printf("\n\t | 3. Elon Musk   |  4.Mukesh Ambani   |");
	printf("\n\t ---------------------------------------");
	printf("\n\n\t Choose An Alternative : ");
	fflush(stdin);
	scanf("%d",&ans[Q]);
	printf("\n\t");
	check_ans();

	if(check==11)
	{
		goto exit;
	}

////////// 2nd Question ////////
	Q=1;
	clrscr();
	quize_home_interface();
	score_();
	printf("\n\n\n\t Q.2] Which Animal Is Known As The Ship Of Desert");
	printf("\n\n\t ---------------------------------------");
	printf("\n\t | 1. Camel       |  2. Horse         |");
	printf("\n\t ---------------------------------------");
	printf("\n\t | 3. Zebra       |  4. Elephent      |");
	printf("\n\t ---------------------------------------");
	printf("\n\n\t Choose An Alternative : ");
	fflush(stdin);
	scanf("%d",&ans[Q]);
	printf("\n\t");
	check_ans();

	if(check==11)
	{
		goto exit;
	}

///////// 3rd Question //////////
	Q=2;
	clrscr();
	quize_home_interface();
	score_();
	printf("\n\n\n\t Q.3] Which Of The Following is Capital Of Maharashtra .");
	printf("\n\n\t ---------------------------------------");
	printf("\n\t | 1. Delhi       |  2. Bihar         |");
	printf("\n\t ---------------------------------------");
	printf("\n\t | 3. Odisa       |  4. Mumbai        |");
	printf("\n\t ---------------------------------------");
	printf("\n\n\t Choose An Alternative : ");
	fflush(stdin);
	scanf("%d",&ans[Q]);
	printf("\n\t");
	check_ans();

	if(check==11)
	{
		goto exit;
	}


///////// 4th Question //////////
	Q=3;
	clrscr();
	quize_home_interface();
	score_();
	printf("\n\n\n\t Q.4] Which Country Has Large Number Of Population .");
	printf("\n\n\t ---------------------------------------");
	printf("\n\t | 1. China       |  2. India         |");
	printf("\n\t ---------------------------------------");
	printf("\n\t | 3. Brazil      |  4. Indonesia     |");
	printf("\n\t ---------------------------------------");
	printf("\n\n\t Choose An Alternative : ");
	fflush(stdin);
	scanf("%d",&ans[Q]);
	printf("\n\t");
	check_ans();

	if(check==11)
	{
		goto exit;
	}

///////// 5th Question //////////
	Q=4;
	clrscr();
	quize_home_interface();
	score_();
	printf("\n\n\n\t Q.5] Which Country Is Widest In The World .");
	printf("\n\n\t ---------------------------------------");
	printf("\n\t | 1. Russia      |  2. America         |");
	printf("\n\t ---------------------------------------");
	printf("\n\t | 3. Brazil      |  4. Coria     |");
	printf("\n\t ---------------------------------------");
	printf("\n\n\t Choose An Alternative : ");
	fflush(stdin);
	scanf("%d",&ans[Q]);
	printf("\n\t");
	check_ans();

	if(check==11)
	{
		goto exit;
	}

///////// 6th Question //////////
	Q=5;
	clrscr();
	quize_home_interface();
	score_();
	printf("\n\n\n\t Q.6] Which Is Highest Mountain In The Wold .");
	printf("\n\n\t ----------------------------------------");
	printf("\n\t | 1. Godwin Austren |  2. Mount Everest |");
	printf("\n\t -----------------------------------------");
	printf("\n\t | 3. Lhotse         |  4. Kangchenjunga |");
	printf("\n\t -----------------------------------------");
	printf("\n\n\t Choose An Alternative : ");
	fflush(stdin);
	scanf("%d",&ans[Q]);
	printf("\n\t");
	check_ans();

	if(check==11)
	{
		goto exit;
	}

///////// 7th Question //////////
	Q=6;
	clrscr();
	quize_home_interface();
	score_();
	printf("\n\n\n\t Q.7] Which Animal Has Three Hearts In Body.");
	printf("\n\n\t --------------------------------------");
	printf("\n\t | 1. Octopus     |  2. Lizard        |");
	printf("\n\t ----------------------------------------");
	printf("\n\t | 3. Hagfish     |  4. An Earthworm  |");
	printf("\n\t ----------------------------------------");
	printf("\n\n\t Choose An Alternative : ");
	fflush(stdin);
	scanf("%d",&ans[Q]);
	printf("\n\t");
	check_ans();

	if(check==11)
	{
		goto exit;
	}

///////// 8th Question //////////
	Q=7;
	clrscr();
	quize_home_interface();
	score_();
	printf("\n\n\n\t Q.8] Where is Future Muzium Located .");
	printf("\n\n\t --------------------------------------");
	printf("\n\t | 1. Dubai       |  2. America       |");
	printf("\n\t ----------------------------------------");
	printf("\n\t | 3. Iceland     |  4. South Africa  |");
	printf("\n\t ----------------------------------------");
	printf("\n\n\t Choose An Alternative : ");
	fflush(stdin);
	scanf("%d",&ans[Q]);
	printf("\n\t");
	check_ans();

	if(check==11)
	{
		goto exit;
	}

///////// 9th Question //////////
	Q=8;
	clrscr();
	quize_home_interface();
	score_();
	printf("\n\n\n\t Q.9] Who Is The Founder Of Amazon Company .");
	printf("\n\n\t --------------------------------------");
	printf("\n\t | 1. Carl Benze  |  2. Amit Agarwal  |");
	printf("\n\t ----------------------------------------");
	printf("\n\t | 3. Ambani      |  4. Jeff Bezos    |");
	printf("\n\t ----------------------------------------");
	printf("\n\n\t Choose An Alternative : ");
	fflush(stdin);
	scanf("%d",&ans[Q]);
	printf("\n\t");
	check_ans();

	if(check==11)
	{
		goto exit;
	}

///////// 10th Question //////////
	Q=9;
	clrscr();
	quize_home_interface();
	score_();
	printf("\n\n\n\t Q.10] Who Is Known As Big Bull Of Share MarcketIn India .");
	printf("\n\n\t ---------------------------------------------");
	printf("\n\t | 1. Rakesh Jhunjhunwala  |  2. Anil Ambani |");
	printf("\n\t ---------------------------------------------");
	printf("\n\t | 3. Radhakrishn Damani   |  4. Salman Khan |");
	printf("\n\t ---------------------------------------------");
	printf("\n\n\t Choose An Alternative : ");
	fflush(stdin);
	scanf("%d",&ans[Q]);
	printf("\n\t");
	check_ans();

	if(check==11)
	{
		goto exit;
	}

final_result();
exit:
}

void quize_home_interface()
{

//textcolor(YELLOW);
//textbackground(1);
printf("\n\t");
printf("||///////////////////////////////////////////////////||");
printf("\n\t");
printf("||                     QUIZE GAME                    ||");
printf("\n\t");
printf("||///////////////////////////////////////////////////||");


printf("\n\n\n\t# ANSWER THE FOLLOWING QUESTION : ");
printf("\n\n\t______________________________________");

}


void check_ans()
{

		check=1;

		if(ans[Q]==0)
		{
			check=11;
			printf("\n\n\t  Please Wait, Exiting.....");
			delay(700);
			goto exit;
		}

		if(ans[Q]==ANS[Q])
		{
			 R++;
			 check=0;
			 score=score+10;
			 delay(400);
			 printf("\n\t  Corret Answer");
			 printf("\n\t  You Got 10 Point.");
			 delay(1300);
		}

		if(check==1)
		{
			 W++;
			 printf("\n\t  Wrong Answer....!");
			 delay(1000);
		}

exit:
}