int main() {
    int i,j;
    for(i=5; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        for(j=4; j>=i; j--)
        {
            printf("  ");
        }
        for(j=1; j<=i; j++)
        {
            printf("*");
        } 
        printf("\n");
    }
}