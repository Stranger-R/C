#include <stdio.h>

void UK()
{
    printf("\nYou Are In UK ");
    Japan();
}
void Austrila ()
{
    printf("\nYou Are In Austrila ");
    UK ();
}
void USA()
{
    printf("\nYou Are In USA ");
    Austrila ();
}

void Japan()
{
    printf("\nYou Are In Japan ");
}
int main()
{
    printf("\nYou Are In India ");
    USA();

    return 0;
}

