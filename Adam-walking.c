#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  FILE * adamFile;
  adamFile = fopen("adam.txt", "r");
  int counter = 0;
  char attempts [100];
  while (fgets(attempts, 100, adamFile)){
    attempts[strcspn(attempts,"\n")]='\0'; 
    //this gets rid of the white space fgets obtains from teh file 
    if (counter >= 1){ //here it would skip the first line of the file 
      int successAttempt = 0; //the variable that will sum up to the number of U's
      for (int letter = 0; letter<strlen(attempts); letter++ ){ 
        //looping through each letter of a test case to find the first successful attempt
        if(attempts[letter] == 'U'){
          successAttempt ++;
        }
        else{
          break;
        }
      }
      printf("%i\n",successAttempt);
    }
    counter++;
  }
  fclose(adamFile);
  return 0;
}