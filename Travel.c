#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("Travel Guide Delhi.txt","w+");
    fprintf(fptr, "DELHI TRAVEL GUIDE\n");
    fprintf(fptr, "Delhi, for all the right reasons, is the national capital of incredible India.\n Synonymous with diversity, Delhi has always been the epicentre of all activities in India which is reflected in its tourism.\n Right from the time of Pandavas, it has served as a major strategic and cultural hub of the country and rightly so,\n today it’s an exhibition of the history of India.\n Travelling in Delhi isn’t just limited to history but it’s a step to take past and present hand in hand.\n Blended with modern advancements, Delhi is the modern-day city of Troy. The amalgamation of all religion and spiritual hubs \n of different faiths coexisting together in peace is the testament of the unity in diversity.\n Delhi offers numerous tourist attractions ranging from monuments, museums, shrines to modern day markets.\n Exploring the city is like witnessing a mini-India, with Delhi Tourism being a reflection of the rich culture of India.\n Contact No.-(Local Guide)9999999999");
fclose(fptr);
printf("The File Travel Guide is Successfully Created "); 
return 0;
}
