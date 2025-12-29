#include<stdio.h>
#include<string.h>
#define seats 20
struct s {
    char time[100];
};
struct moviebook {
    int moviecount;
    char title[100];
    int showcount;
    struct s show[100];
    int seat[100][seats];
} m, movie[100];
void addmovie();
void displaymovies();
void bookticket();
void cancelticket();
int main() {
    int choice;
    while(1){
        printf("\n====== MOVIE TICKET BOOKING SYSTEM ======\n");
        printf("1. Add Movie (Admin)\n");
        printf("2. Display Movies\n");
        printf("3. Book Ticket\n");
        printf("4. Cancel Ticket\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if(choice==1) addmovie();
        else if(choice==2) displaymovies();
        else if(choice==3) bookticket();
        else if(choice==4) cancelticket();
        else if(choice==5) {
            printf("Exiting...\n");
            break;
        }
        else printf("Invalid Choice!\n");
    }
    return 0;
}
void addmovie() {
    printf("Enter number of movies to be added: ");
    scanf("%d",&m.moviecount);
    for(int i=1;i<=m.moviecount;i++) {
        printf("Enter movie %d name: ",i);
        scanf(" %[^\n]s",movie[i].title);
        printf("Enter number of shows for movie %d: ",i);
        scanf("%d",&movie[i].showcount);
        for(int j=1;j<=movie[i].showcount;j++) {
            printf("Enter show %d timing: ",j);
            scanf(" %[^\n]s",movie[i].show[j].time);
            for(int k=0;k<seats;k++)
                movie[i].seat[j][k] = 0;
        }
    }
}
void displaymovies() {
    printf("\nAvailable Movies:\n");
    for(int i=1;i<=m.moviecount;i++) {
        printf("%d. %s\n",i,movie[i].title);
    }
}
void bookticket() {
    char smovie[100];
    printf("Enter movie name: ");
    scanf(" %[^\n]s", smovie);
    for(int i=1;i<=m.moviecount;i++) {
        if(strcmp(smovie,movie[i].title)==0) {
            printf("Available Shows:\n");
            for(int j=1;j<=movie[i].showcount;j++) {
                printf("%d. %s\n", j, movie[i].show[j].time);
            }
            int ch;
            printf("Enter show option: ");
            scanf("%d", &ch);
            if(ch < 1 || ch > movie[i].showcount){
                printf("Invalid show option!\n");
                return;
            }
            printf("Available Seats (0=free, 1=booked):\n");
            for(int s=0; s<seats; s++) {
                printf("%d:%d  ", s+1, movie[i].seat[ch][s]);
                if((s+1)%10==0) printf("\n");
            }
            int seatno;
            printf("\nEnter seat number (1-20): ");
            scanf("%d", &seatno);
            if(seatno < 1 || seatno > seats){
                printf("Invalid seat!\n");
                return;
            }
            if(movie[i].seat[ch][seatno-1] == 1){
                printf("Seat already booked!\n");
                return;
            }
            movie[i].seat[ch][seatno-1] = 1;
            printf("Ticket Booked Successfully!\n");
            printf("Movie: %s\nShow: %s\nSeat: %d\n",
                   movie[i].title, movie[i].show[ch].time, seatno);
            return;
        }
    }
    printf("Movie not found!\n");
}
void cancelticket() {
    char smovie[100];
    printf("Enter movie name to cancel: ");
    scanf(" %[^\n]s", smovie);
    for(int i=1;i<=m.moviecount;i++) {
        if(strcmp(smovie,movie[i].title)==0) {
            int ch;
            printf("Enter show number: ");
            scanf("%d", &ch);
            if(ch < 1 || ch > movie[i].showcount){
                printf("Invalid show!\n");
                return;
            }
            int seatno;
            printf("Enter seat number to cancel: ");
            scanf("%d", &seatno);
            if(seatno < 1 || seatno > seats){
                printf("Invalid seat!\n");
                return;
            }
            if(movie[i].seat[ch][seatno-1] == 0){
                printf("Seat was not booked!\n");
                return;
            }
            movie[i].seat[ch][seatno-1] = 0;
            printf("Ticket Cancelled Successfully!\n");
            return;
        }
    }
    printf("Movie not found!\n");
}
