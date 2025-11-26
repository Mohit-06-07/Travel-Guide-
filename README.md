Activity 8
Research 
Files in the programming world  are crucial for permanent data storage because data in program memory is volatile and lost when the program terminates. File handling allows data to be stored on a disk, enabling persistence, reusability, and portability across different program runs and systems. This also allows programs to manage large datasets efficiently and maintain logs or records, which is essential for real-world applications. In C programming  files are used for permanent storage of data on secondary memory, allowing data to persist beyond the program's execution. File handling involves operations like creating, opening, reading, writing, and closing files.
Files are of 2 types: text files and binary files.
Text Files store data in ASCII characters, making them human-readable when opened in a text editor.Typically have extensions like .txt.They are Easily created and edited but offer less security as content is directly visible.Binary Files Store data in raw binary format (0 and 1), that is not human-readable.Have extensions like.bin. It occupies less storage space and offers better security compared to text files.
Analyse
File handling in C allows programs to interact with files on the computer's storage, enabling data persistence beyond the program's runtime. It involves operations such as creating, opening, reading, writing, and closing files. The stdio.h header file provides the necessary functions for these operations hence it must be included in the program.
A FILE * pointer is declared to manage a file. This pointer stores information about the file, including its current position.C has basic 3 modes of file opening.The mode specifies how the file will be accessed:"r": Read mode (file must exist)."w": Write mode (creates a new file or truncates an existing one)."a": Append mode (creates a new file or appends to an existing one).File modes and operations are fundamental for interacting with files.


Ideate
Travel guides are important because they provide inspiration and practical information for potential travelers, influence destination choices by showcasing both popular and lesser-known locations, and serve as a powerful marketing tool for the tourism industry. They build trust and relatability through personal narratives and visual storytelling, making destinations feel more accessible and real for viewers.Inspiration and awareness: Vlogs inspire people to travel by showing them new places and cultures through engaging visual content and storytelling.
Travel Guides provide-
They provide useful, firsthand information on what to see and do, where to eat, and how to get around, often through authentic user-generated content. Guides can highlight off-the-beaten-path destinations that may not have large marketing budgets, giving viewers a wider range of options. Viewers can connect with vloggers' personal experiences, which creates a sense of familiarity and trust that influences their own travel decisions.Guides can be a fun and immersive way to learn about the world, with personal stories and engagement fostering a connection with the content and the destination.
The objective of the program is to create a travel guide that gives travel information which is stored in  a file named  travel guide.
Algorithm
Step 1-Start
Step 2-Create the file named Travel guide 
Step 3-displaying a file 
Step 4-close the file
Step 5-End
Build
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
Testing-
C program Output
 The File Travel Guide is Successfully Created
Text File Output
Travel Guide.txt
DELHI TRAVEL GUIDE
Delhi, for all the right reasons, is the national capital of incredible India.\n Synonymous with diversity, Delhi has always been the epicentre of all activities in India which is reflected in its tourism.\n Right from the time of Pandavas, it has served as a major strategic and cultural hub of the country and rightly so, today it’s an exhibition of the history of India.\n Travelling in Delhi isn’t just limited to history but it’s a step to take past and present hand in hand.\n Blended with modern advancements, Delhi is the modern-day city of Troy. The amalgamation of all religion and spiritual hubs of different faiths coexisting together in peace is the testament of the unity in diversity.\n Delhi offers numerous tourist attractions ranging from monuments, museums, shrines to modern day markets.\n Exploring the city is like witnessing a mini-India, with Delhi Tourism being a reflection of the rich culture of India.
Implementation
https://github.com/Mohit-06-07/Travel-Guide-/blob/main/Travel.c
References-
https://delhitourism.gov.in/
https://www.ingramspark.com/blog/create-and-sell-your-own-travel-guide
https://www.lonelyplanet.com/destinations/india/delhi
Conclusion
This program successfully demonstrates how file handling can be used to create an informative and organized travel guide for Delhi. By storing details about landmarks, culture, food, and transportation in external files, the program ensures easy access, updates, and retrieval of information. Using files also helps keep the guide structured, scalable, and efficient to manage. Overall, this project highlights the practical importance of file operations in real-world applications, especially when dealing with large amounts of data. It not only enhances the user’s understanding of Delhi but also showcases how programming can simplify the creation of helpful digital resources.





