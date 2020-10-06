int dowhile1(){
    int i=1,j;
    printf ("Enter number : ")
    scanf("%d",&j);
    do{
        printf("Enter a Number :");
        sum=sum+i;
        i++;
    }
    while(i<=j);
    printf("\nSum=%d",sum);
    return 0;
}
