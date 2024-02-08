//mul add sub mul of two numbers//
int main()
{
    int a,b,mul,add,sub,div;
    printf("enter your two numbers: ");
    scanf("%d%d",&a,&b);
    mul = a*b;
    add = a+b;
    div = a/b;
    sub = a-b;
    printf("Mul: %d\nAdd: %d\nDiv:%d\nSub: %d",mul,add,div,sub);
return 0;
}