#include <stdio.h>
int r()
{
    static int n = 7;
    return n--;
}
int main()
{
    for(r();r();r())
    {
        printf("%d",r());
    }
	return 0;
}
