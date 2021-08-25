#include<stdio.h>
#include<ctype.h>
#include<string.h>
struct player_activity{
		double efficiency_score;
	    int points,rebounds,blocks;
};
struct player{
		char name[25],surname[25];
		int number;
		struct player_activity play_a[500];
};
void find_mvp(struct player person[],int n_player){
	int i,j;
	double max_score = 0.0;
	char f_letter;
	
	for(i=0;i<n_player;i++){
		if(person[i].play_a[i].efficiency_score > max_score){
			person[i].name[0]=toupper(person[i].name[0]);
			f_letter = person[i].name[0];
			max_score = person[i].play_a[i].efficiency_score;
			j=i;
		}
	}
	printf("The MVP of the team is:%s, %c.",person[j].surname,f_letter);	
		
}

int main(){
	
	int n_player,i,j;
	printf("How many players?:");
	scanf("%d",&n_player);
	struct player person[n_player];
	printf("\n");
	
	for(i=0;i<n_player;i++){
		printf("\nEnter player %d info:",i+1);
	    scanf("%d %s %s %d %d %d",&person[i].number,person[i].name,person[i].surname,&person[i].play_a[i].points,&person[i].play_a[i].rebounds,&person[i].play_a[i].blocks);     
		
			for(int j=0; person[i].surname[j]!='\0'; j++)
   			{
      			person[i].surname[j]=tolower(person[i].surname[j]);
      			if(islower(person[i].surname[0])){
      				person[i].surname[0]=toupper(person[i].surname[0]);
				  }
			}
		}
	printf("\n\nThe efficiency scores of players:\n");
	for(i=0;i<n_player;i++){
		char f_letter;
		person[i].name[0]=toupper(person[i].name[0]);
		f_letter = person[i].name[0];
		person[i].play_a[i].efficiency_score = (( person[i].play_a[i].points *50.0 )/100.0)+(( person[i].play_a[i].rebounds * 30.0 )/100.0)+ (( person[i].play_a[i].blocks * 20.0)/100.0);
		printf("#%d\t%s, %c.\t%.2lf\n",person[i].number,person[i].surname,f_letter,person[i].play_a[i].efficiency_score);	 	
}
    find_mvp(person,n_player);
	
	return 0;
}
