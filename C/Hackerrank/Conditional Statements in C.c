int main() 
{
    int a;
    scanf("%d", &a);
    
    char *number[] = {"one", "two", "three", "four", "five", "six", "seven", "eight",  "nine", "Greater than 9"};
    int i;
    for(i=0; i<a; i++)
    {

    }
    
        if(i<=9)
        {
            printf("%s\n", number[i-1]);

        }
        else
        {
            printf ("%s\n", number[9]);
        }    
    
    return 0;

}
