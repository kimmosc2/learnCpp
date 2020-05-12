int main()
{

    int i = 1,*ip = &i;
    // change pointer address
    int j = 0,*ip = &j;

    
    // change value
    *ip = 1;
    return 0;
}