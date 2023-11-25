#include "factors.h"

/**
 * smallnum - main function
 * Return: void
*/
void smallnum(void)
{
    unsigned long long _I = atoi(EX.Gline);
    unsigned long long _div = 2;

    while (_div < _I)
    {
        if (!(_I % _div))
        {
            printf("%lli=%lli*%lli\n", _I, _I/_div, _div);
            break;
        }
        _div++;
    }
}
