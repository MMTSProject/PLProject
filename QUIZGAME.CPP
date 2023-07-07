#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
clrscr();
char yes;
char no;
char name[200];
int answer;
int score=0;
printf("\n\n****************************************************");
printf("\n\n\t\tWELCOME TO QUIZTOPIA!");
printf("\n\n****************************************************");

printf("\n\n\n\n\nDo you want to start the game?\n");
printf("\nYes OR No (y/n):");
scanf("%c",&yes,&no);
if(yes=='y'){
clrscr();
printf("\nEnter your name: ");
scanf("%s",name);
clrscr();
printf("\n\t  -----------STARTING GAME------------\n________________________________________________________");

printf("\n\nQUESTION 1:\nWhich is the largest flower in the world?");
printf("\n 1.Stinking corpse lily\n 2.Water lily");
printf("\n 3.orchid\n 4.Sunflower");
printf("\n\nChoose your answer:");
scanf("%d",&answer);
if(answer==1){
printf("\nAbsolutely Correct!\nYou got 5 points");
score++;
getch();
}
else{
printf("\nWrong Answer!\nThe correct answer is '1'(Stinking corpse lily)");
getch();
}

clrscr();{
printf("QUESTION 2:\nWhat is the weight of Blue whale?");
printf("\n 1.500 tonns\n 2.300 tonns");
printf("\n 3.200 tonns\n 4.50 tonns");
printf("\n\nChoose your answer:");
scanf("%d",&answer);
if(answer==3){
printf("\nAbsolutely Correct!\nYou got 5 points");
score++;
getch();
}
else{
printf("\nWrong Answer!\nThe correct answer is '3'(200 tonns)");
getch();
}

}
clrscr();
printf("QUESTION 3:\nWhich Mughal Emperor built Taj Mahal?");
printf("\n 1.Babar\n 2.Akbar");
printf("\n 3.Aurangzeb\n 4.Shah Jahan");
printf("\n\nChoose your answer:");
scanf("%d",&answer);
if(answer==4){
printf("\nAbsolutely correct!\nYou got 5 more points");
score++;
getch();
}
else{
printf("\nWrong Answer!\nThe correct answer is '4'(Shah Jahan)");
getch();
}

clrscr();
printf("QUESTION 4:\nWho is the father of C language?");
printf("\n 1.Steve Jobs\n 2.Dennis Retchie\n 3.Rasmus Lerdorf\n 4.James Gosling");
printf("\n\nChoose your answer:");
scanf("%d",&answer);
if(answer==2){
printf("\nAbsolutely correct!\nYou got 5 more points");
score++;
getch();
}
else{
printf("\nWrong Answer!\nThe correct answer is '2'(Dennis Retchie)");
getch();
}
clrscr();
printf("QUESTION 5:\nWhich of the following is not an omnivore?");
printf("\n 1.Bear\n 2.Human");
printf("\n 3.Raccoons\n 4.Lion");
printf("\n\nChoose your answer:");
scanf("%d",&answer);
if(answer==4){
printf("\nAbsolutely correct!\nYou got 5 more points");
score++;
getch();
}
else{
printf("\nWrong Answer!\nThe correct answer is '4'(Lion)");
getch();
}

clrscr();
printf("QUESTION 6:\nHow many stars are there in the flag of USA?");
printf("\n 1. 10\n 2. 30");
printf("\n 3. 50\n 4. 20");
printf("\n\nChoose your answer:");
scanf("%d",&answer);
if(answer==3){
printf("\nAbsolutely correct!\nYou got 5 more points");
score++;
getch();
}
else{
printf("\nWrong Answer!\nThe correct answer is '3'(50)");
getch();
}

clrscr();
printf("QUESTION 7:\nWhich is the longest river in the world?");
printf("\n 1.Nile\n 2.Amazon");
printf("\n 3.Indus\n 4.Mississippi");
printf("\n\nChoose your answer:");
scanf("%d",&answer);
if(answer==1){
printf("\nAbsolutely correct!\nYou got 5 more points");
score++;
getch();
}
else{
printf("\nWrong Answer!\nThe correct answer is '1'(Nile)");
getch();
}

clrscr();
printf("QUESTION 8:\nWhich is the smallest continent of the world?");
printf("\n 1.Europe\n 2.Asia");
printf("\n 3 Arctic\n 4.Oceania");
printf("\n\nChoose your answer:");
scanf("%d",&answer);
if(answer==4){
printf("\nAbsolutely correct!\nYou got 5 more points");
score++;
getch();}
else{
printf("\nWrong Answer!\nThe correct answer is '4'(oceania)");
getch();
}

clrscr();
printf("QUESTION 9:\nWhich planet has the most number of moons in our solar system?");
printf("\n 1.Jupiter\n 2.Saturn");
printf("\n 3.pluto\n 4.Earth");
printf("\n\nChoose your answer:");
scanf("%d",&answer);
if(answer==2){
printf("\nAbsolutely correct!\nYou got 5 more points");
score++;
getch();}
else{
printf("\nWrong Answer!\nThe correct answer is '2'(saturn)");
getch();
}

clrscr();
printf("QUESTION 10:\nWhich of the following is the largest tree of the world?");
printf("\n 1.General Sherman Tree\n 2.Oak Tree");
printf("\n 3.Birch Tree\n 4.Juniper Tree");
printf("\n\nChoose your answer:");
scanf("%d",&answer);
if(answer==1){
printf("\nAbsolutely correct!\nYou got 5 more points");
score++;
getch();}
else{
printf("\nWrong Answer!\nThe correct answer is '1'(General sherman tree)");
getch();
}
clrscr();
printf("QUESTION 11:\nWhich of the following is the correct operator to campare two variables in C?");
printf("\n 1.=\n 2.<");
printf("\n 3.==\n 4.!=");
printf("\n\nChoose your answer:");
scanf("%d",&answer);
if(answer==3){
printf("\nAbsolutely correct!\nYou got 5 more points");
score++;
getch();}
else{
printf("\nWrong Answer!\nThe correct answer is'3'(==)");
getch();}

clrscr();
printf("QUESTION 12:\nWhat is the most widely used natural source of food colour?");
printf("\n 1.saffron\n 2.butterfly pea");
printf("\n 3.turmeric\n 4.beetroot");
printf("\n\nChoose your answer:");
scanf("%d",&answer);
if(answer==3){
printf("\nAbsolutely correct!\nYou got 5 more points");
score++;
getch();}
else{
printf("\nWrong Answer!\nThe correct answer is '3'(turmeric)");
getch();}

clrscr();
printf("QUESTION 13:\nWhich was the first campus of ned that was put in operation?");
printf("\n 1.Main Campus\n 2.City Campus");
printf("\n 3.LEJ Campus\n 4.Thar Campus");
printf("\n\nChoose your answer:");
scanf("%d",&answer);
if(answer==2){
printf("\nAbsolutely correct!\nYou got 5 more points");
score++;
getch();}
else{
printf("\nWrong Answer!\nThe correct answer is'2'(City Campus)");
getch();}

clrscr();
printf("QUESTION 14:\nWho was the first person to win the noble price in Pakistan?");
printf("\n 1.Dr.Abdus Salam\n 2.Dr.Abdul Qadeer Khan");
printf("\n 3.Riaz ud Din\n 4.Malala Yousufzai");
printf("\n\nChoose your answer:");
scanf("%d",&answer);
if(answer==1){
printf("\nAbsolutely correct!\nYou got 5 more points");
score++;
getch();}
else{
printf("\nWrong Answer!\nThe correct answer is '1'(Dr.Abdus Salam)");
getch();}

clrscr();
printf("QUESTION 15:\nAcrophobia is the fear of?");
printf("\n 1.Fear of people\n 2.Fear of heights");
printf("\n 3.Fear of insects\n 4.Fear of water");
printf("\n\nChoose your answer:");
scanf("%d",&answer);
if(answer==2){
printf("\nAbsolutely correct!\nYou got 5 more points");
score++;
getch();}
else{
printf("\nWrong Answer!\nThe correct answer is '2'(Fear of heights)");
getch();
}

clrscr();
printf("QUESTION 16:\nHow many datatypes are there in C?");
printf("\n 1.four\n 2.eight");
printf("\n 3.six\n 4.five");
printf("\n\nChoose your answer:");
scanf("%d",&answer);
if(answer==3){
printf("\nAbsolutely correct!\nYou got 5 more points");
score++;
getch();}
else{
printf("\nWrong Answer!\nThe correct answer is '3'(six)");
getch();
}
clrscr();
printf("QUESTION 17:\nWhich country has won the most football worldcups?");
printf("\n 1.Germany\n 2.Brazil");
printf("\n 3.Mexico\n 4.New Zealand");
printf("\n\nChoose your answer:");
scanf("%d",&answer);
if(answer==2){
printf("\nAbsolutely correct!\nYou got 5 more points");
score++;
getch();}
else{
printf("\nWrong Answer!\nThe correct answer is '2'(Brazil)");
getch();
}

clrscr();
printf("QUESTION 18:\nWhich country gifted The Statue of Liberty to USA?");
printf("\n 1.Denmark\n 2.Australia");
printf("\n 3.Argentina\n 4.France");
printf("\n\nChoose your answer:");
scanf("%d",&answer);
if(answer==4){
printf("\nAbsolutely correct!\nYou got 5 more points");
score++;
getch();}
else{
printf("\nWrong Answer!\nThe correct answer is '4'(France)");
getch();
}

clrscr();
printf("QUESTION 19:\nThe asteroid belt is present between which two planets?");
printf("\n 1.Jupiter and Mars\n 2.Mars and Earth");
printf("\n 3.Uranus and Neptune\n 4.Venus and Mercury");
printf("\n\nChoose your answer:");
scanf("%d",&answer);
if(answer==1){
printf("\nAbsolutely correct!\nYou got 5 more points");
score++;
getch();}
else{
printf("\nWrong Answer!\nThe correct answer is '1'(Jupiter and Mars)");
getch();
}

clrscr();
printf("QUESTION 20:\nWhich blood group is referred to as the Universal Doner?");
printf("\n 1.AB+\n 2.B+");
printf("\n 3.O-\n 4.A-");
printf("\n\nChoose your answer:");
scanf("%d",&answer);
if(answer==3){
printf("\nAbsolutely correct!\nYou got 5 more points");
score++;
getch();}
else{
printf("\nWrong Answer!\nThe correct answer is '3'(O-)");
getch();
}
score*=5;
printf("\n\n\t*******************************\n\n\t\tYou finished the Quiz\n__________________________________________________________");
printf("\n\nYour total score is : %d/100 ",score);
getch();
clrscr();
{
FILE *file = fopen("scores", "a");
if (file == NULL)
{
printf("Failed to open the file.\n");
return 1;
}
fprintf(file, "Player: %s\tScore: %d\n", name, score);
fclose(file);
printf("------SCORE RECORD------\n\n");
file=fopen("scores","r");
char line[100];
while(fgets(line,100,file)!=NULL){
printf("%s",line);
getch();
}

fclose(file);
}
}
else{
printf("\nGoodbye\nLeaving Quiztopia \2");
}
getch();
return 0;
}
