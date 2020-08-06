#include<stdio.h>
#include<conio.h>
void main()
{
int score=0,answer,n;
clrscr();
printf(" welcome to the c quiz \n");
printf(" the quiz has 5 very basic topic questions  \n");
printf(" you get +3 for each correct answers & -1 foe each wrong/ invalid answer \n");
//for questions......
printf(" which type of quiz topic you wonna play \n");
printf(" [1] c language \n");
printf(" [2] human body \n");
printf(" [3] general science \n");
printf(" [4] techonology \n");
printf(" [5] mathematics \n ");
scanf("%d",&n);
{
if(n==1)
{
goto clanguage;
}

else if(n==2)
{
goto human;
 }
else if(n==3)
 {
 goto science;
 }
 else if(n==4)
	 {
	goto tecno;
	  }
 else if(n==5)
 {
 goto maths;
 }


 }
clanguage:
{
printf(" \n (Q1)- why is it called 'C' & not 'D'? \n");
printf(" (1) c stands for code \n");
printf(" (2) the inventor's name started with C \n");
printf(" (3) the developed after a language called 'B'. \n");
printf(" (4) why should i care ? \n");
scanf("%d",&answer);
if(answer==3)
{
printf(" thats correct \n");
score=score+3;
}
else
{
printf(" wrong answers ");
score=score-1;
}
printf("\n (Q2)-- it was devoloped at ?\n");
printf(" (1) ibm \n ");
printf(" (2) bell babs  \n");
printf(" (3) mit \n");
printf(" (4) microsoft \n");
scanf("%d",&answer);
if(answer==2)
{
printf(" thats correct \n");
score=score+3;
}
else
{
printf(" wrong answer \n ");
score=score-1;
}
printf(" \n (Q3)-- which of these is not a c keyword as per ansi C \n");
printf(" [1] extern \n");
printf("  [2] volatile \n ");
printf("  [3] enter \n");
printf(" [4] break \n ");
scanf("%d",&answer);
if(answer==3)
{
printf(" thats correct\n");
score=score+3;
}
else
{
printf(" wrong answer \n");
score=score-1;
}
printf(" (Q4)-- what is ansi , btw ? \n");
printf(" [1] area of national & scientific interest \n");
printf(" [2] american national standard institute \n");
printf(" [3] american national standardization institute \n");
printf(" [4] american national society of intellectuals \n");
scanf("%d",&answer);
if(answer==2)
{
printf(" thats correct \n");
score=score+3;
}
else
{
printf(" wrong answer \n");
score=score-1;
}
printf(" (Q5)-- which of these concepts is not supported by C \n");
printf(" [1] pointers \n");
printf(" [2] functions \n ");
printf(" [3] strings \m");
printf(" [4] name space \n");
scanf("%d",&answer);
if(answer==4)
{
printf(" thats correct \n");
score=score+3;
}
else
{
printf(" wrong answer \n");
score=score-1;
}
printf(" \n thank you for taking tha quiz \n");
printf(" your total score is %d out of 15",score);
}





//for human body question........
human:
{
printf(" \n Q1-what is weight of human mind \n");
printf(" [1] 500 gm \n");
printf(" [2] 450 gm \n");
printf(" [3] 600 gm \n");
printf(" [4] 1000 gm \n");
scanf("%d",&answer);
if(answer==2)
{
printf(" thats correct \n ");
score=score+3;
}
else
{
printf(" wrong answer \n");
score=score-1;
}

printf(" Q2- generally howmany hair are on the human skull \n");
printf(" [1] 1 lakh approx\n");
printf(" [2] 2 lakh approx \n");
printf(" [3] 3 lakh approx \n");
printf(" [4] 4 lakh approx \n");
scanf("%d",&answer);
if(answer==1)
{
printf(" thats correct \n");
score=score+3;
}
else
{
printf(" wrong answer \n");
score=score-1;
}

printf(" Q3- what is the smallest bone in our human body \n");
printf(" [1]  thai\n");
printf(" [2] ear\n");
printf(" [3] toe \n");
printf(" [4] finger \n");
scanf("%d",&answer);
if(answer==2)
{
printf(" thats correct \n");
score=score+3;
}
else
{
printf(" wrong answer \n");
score=score-1;
}

printf(" Q4- what is perfect ratio of human eyes \n");
printf(" [1] 6/12 \n");
printf(" [2] 6/8 \n ");
printf(" [3] 6/6 \n ");
printf(" [4] 6/10 \n ");
scanf("%d",&answer);
if(answer==3)
{
printf(" thats correct \n ");
score=score+3;
}
else
{
printf("  wrong answer \n ");
score=score-1;
}

printf(" Q5- howmuch time is taken body to0 digest food ?\n");
printf(" [1] 1-2 hours \n");
printf(" [2] 7-10 hours \n ");
printf(" [3] 6-8 hours \n");
printf(" [4] 3-6 hours \n");
scanf("%d",&answer);
if(answer==4)
{
printf(" thats correct \n ");
score=score+3;
}
else
{
printf(" wrong answer \n ");
score=score-1;
}
printf(" \n thank you for taking the quiz \n ");
printf(" your score is %d out of 15 ",score);
}

//for general science ......

science:
{
printf(" Q1- how many osscilations are happening in 1 sec in unit instruments \n");
printf(" [1] 9192631770 \n");
printf(" [2] 765434 \n");
printf(" [3] 4534232765 \n");
printf(" [4] 5346987626 \n");
scanf("%d",&answer);
if(answer==1)
{
printf(" thats correct \n ");
score=score+3;
}
else
{
printf(" wrong answer \n ");
score=score-1;
}

printf(" Q2- on what temp. 1lt. of water is = to 1 kg \n ");
printf(" [1] 12 degree C \n ");
printf(" [2] 4 degree C \n ");
printf(" [3] 8 degree C \n ");
printf(" [4] 16 degree C \n ");
scanf("%d",&answer);
if(answer==2)
{
printf(" thats correct \n ");
score=score+3;
}
else
{
printf(" wrong answer \n ");
score=score-1;
}

printf(" Q3- what is actual speed of light ? \n");
printf(" [1] 299792458 m/s \n");
printf(" [2] 54328765 m/s \n  ");
printf(" [3] 28876556m/s \n ");
printf(" [4] 29999756 m/s \n ");
scanf("%d",&answer);
if(answer==1)
{
printf(" thats correct \n ");
score=score+3;
}
else
{
printf(" wrong answer \n ");
score=score-1;
}

printf(" Q4-what is the name of bacteria of tv \n");
printf(" [1]  mada ena fleej \n");
printf(" [2] armand hippolite \n ");
printf(" [3] luyi fizzu \n ");
printf(" [4]  microbecteriam tubercluosis \n ");
scanf("%d",&answer);

if(answer==4)
{
printf(" thats correct \n ");
score=score+3;
}
	else
{
printf(" wrong answer \n");
score=score-1;
      }
printf(" \n thank you for taking tha quiz \n");
printf(" your total score is %d out of 15",score);
 }

 tecno:
 {

 printf(" Q1- what is new feature of google ?\n");
 printf(" [1]-chrome \n ");
 printf(" [2] - google assistant \n");
 printf(" [3] - google play +\n");
 printf(" [4] - google +\n");
 scanf("%d",&answer);
 if(answer==2)
 {
 printf(" thats correct \n ");
 score=score+3;
 }
 else
 {
 printf(" wrong answer \n");
 score=score-1;
 }

 printf(" Q2-which site is not able for learn c language \n ");
 printf(" [1] - sololearn \n ");
 printf(" [2] - w3school \n ");
 printf(" [3] - coursera \n ");
 printf(" [4] - incognito \n ");
 scanf("%d",&answer);
 if(answer==4)
 {
 printf(" thats correct \n");
 score=score+3;
 }
 else
 {
 printf(" wrong answer \n");
 score=score-1;
 }

 printf(" Q3-number of bit used by the IPv6 address? \n");
 printf(" [1] - 32 bit\n");
 printf(" [2] - 64 bit\n");
 printf(" [3] - 128 bit\n");
 printf(" [4] - 256 bit \n");
 scanf("%d",&answer);
 if(answer==3)
 {
 printf(" thats correct \n");
 score=score+3;
 }
 else
 {
 printf(" wrong answer \n");
 score=score-1;
 }

 printf(" Q4- first computer virus is known as \n");
 printf(" [1] - rabbit\n");
 printf(" [2] - creeper virus \n");
 printf(" [3] - elk cloner \n ");
 printf(" [4] - SCA virus\n");
 scanf("%d",&answer);
 if(answer==2)
 {
 printf(" thats correct \n");
 score=score+3;
 }
 else
 {
 printf(" wrong answer \n");
 score=score-1;
 }

 printf(" Q5-which one programming language is exclusively used for artificial intellgence ? \n");
 printf(" [1] - c \n");
 printf(" [2] - java \n");
 printf(" [3] - J2EE \n");
 printf(" [4] - prolog \n");
 scanf("%d",&answer);
 if(answer==4)
 {
 printf(" thats correct \n");
 score=score+3;
 }
 else
 {
 printf(" wrong answer \n");
 score=score-1;
 }
printf(" \n thank you for taking tha quiz \n");
printf(" your total score is %d out of 15",score);
}

maths:
{
printf(" Q1- complete this series 1:1::25:? \n");
printf(" [1] 625 \n");
printf(" [2] 325 \n");
printf(" [3] 835 \n");
printf(" [4] 1125 \n");
scanf("%d",&answer);
if(answer==1)
{
printf(" thats correct \n");
score=score+3;
}
else
{
printf(" wrong answer \n");
score=score-1;
}

printf(" Q2- what is ans of this expression 441/4 ?\n");
printf(" [1] - 11.25\n");
printf(" [2] - 111.25\n");
printf(" [3] - 110.25\n");
printf(" [4] - 101.25 \n");
scanf("%d",&answer);
if(answer==3)
{
printf(" thats correct \n");
score=score+3;
}
else
{
printf(" wrong answer \n");
score=score-1;
}

printf(" Q3-fill  the ? space.. 1:4:9:?\n");
printf(" [1] - 15\n");
printf(" [2] - 16\n");
printf(" [3] - 18\n");
printf(" [4] - 25 \n");
scanf("%d",&answer);
if(answer==2)
{
printf(" thats correct \n");
score=score+3;
}
else
{
printf(" wrong answer \n");
score=score-1;
}

printf(" Q4 - what  is formula of area of circle ?\n");
printf(" [1] - pi*r*r\n");
printf(" [2] - 2*pi*r\n");
printf(" [3] - (4/3)*pi*r*r*r \n");
printf(" [4] - 4*pi*r*r \n");
scanf("%d",&answer);
if(answer==1)
{
printf(" thats correct \n");
score=score+3;
}
else
{
printf(" wrong answer \n");
score=score-1;
}

printf(" Q5-- what is the squre of 65 \n");
printf(" [1] - 1225\n");
printf(" [2] - 2325\n");
printf(" [3] - 3425 \n");
printf(" [4] - 4225\n");
scanf("%d",&answer);
if(answer==4)
{
printf(" thats correct \n");
score=score+3;
}
else
{
printf(" wrong answer \n");
score=score-1;
}
printf(" \n thank you for taking tha quiz \n");
printf(" your total score is %d out of 15",score);
}
getch();
}
