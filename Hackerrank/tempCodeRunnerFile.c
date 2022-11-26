 switch (ch)
    {
    case '+':
        printf("sum is %d", a + b);
        break;
    case '-':
        printf("difference is %d", a - b);
        break;
    case '*':
        printf("multiplication is %d", a * b);
        break;
    case '/':
        printf("division is %d", a / b);
        break;
    default:
        printf("no such operation");
    }