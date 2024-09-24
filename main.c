#include <stdio.h>
#include <string.h>

int main(void){
    
    // Section 1: Finding the length of a string without using a predefined function
    
    char str[]="Welcome";
    int i;
    
    for(i=0;str[i]!='\0';i++){
        printf("%c",str[i]);
    }
    printf("\n");
    printf("The length of the string is %d\n",i);
    
    // Section 2: Converting the case of a string using ASCII values
    
    char name[]="Anish";
    
    for(i=0;name[i]!='\0';i++){
    }
    
    for(int x=0;x<i;x++){
        if(name[x]>=65&&name[x]<=90){
            name[x]=name[x]+32;
        } else if(name[x]>=97&&name[x]<=122){
            name[x]=name[x]-32;
        }
    }
    
    printf("Case-converted string: %s\n",name);
    
    // Section 3: Finding the number of words, vowels, and consonants in a string
    
    char sentence[]="How are you";
    int consonantCount=0, wordCount=1, vowelCount=0;
    
    for(i=0;sentence[i]!='\0';i++){
        if(sentence[i]==' '&&sentence[i-1]!=' '){
            wordCount++;
        }
        
        if(sentence[i]=='a'||sentence[i]=='A'||
           sentence[i]=='e'||sentence[i]=='E'||
           sentence[i]=='i'||sentence[i]=='I'||
           sentence[i]=='o'||sentence[i]=='O'||
           sentence[i]=='u'||sentence[i]=='U') {
            vowelCount++;
        }else if((sentence[i]>=65&&sentence[i]<=90) ||
                 (sentence[i]>=97&&sentence[i]<=122)) {
            consonantCount++;
        }
    }
    
    printf("Number of words: %d\n",wordCount);
    printf("Number of consonants: %d\n",consonantCount);
    printf("Number of vowels: %d\n",vowelCount);
    
    // Section 4: Reversing a string without using a temp variable
    
    char toReverse[]="TheWeeknd";
    int len=strlen(toReverse);
    i=0;
    int j=len-1;
    
    while(i<j){
        toReverse[i]=toReverse[i]+toReverse[j];
        toReverse[j]=toReverse[i]-toReverse[j];
        toReverse[i]=toReverse[i]-toReverse[j];
        i++;
        j--;
    }
    
    printf("Reversed string: %s\n",toReverse);
    
    return 0;
}

