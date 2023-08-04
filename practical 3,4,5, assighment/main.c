char ch;{
    printf("enter a lower case letter:");
    scanf (" %s",&ch);
    switch(ch){
        case 'a' :
        case 'e':
        case 'i':
        case 'o':
        case 'u': printf("%s is a vowel",letter);break;
        default: printf("consonant");}
        return 0;
