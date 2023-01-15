int main()
{
    int a,b,c,sum,Ans;
    printf("Enter First Integer Number:\n");
    scanf("%d",&a);
    printf("Enter Second Integer Number:\n");
    scanf("%d",&b);
    printf("Enter Third Integer Number:\n");
    scanf("%d",&c);

    //calculating

    sum = a + b;
    printf("Value :");
    printf("%d+%d=%d\n",a,b,sum);
    Ans = sum - c;
    printf("%d-%d=%d\n",sum,c,Ans);
    return 0;
}

