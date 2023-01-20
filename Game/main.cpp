

#include "TXLib.h"

int main()
{
        txCreateWindow (1920, 1080);
            HDC  background = txLoadImage ("SP.bmp");
            HDC  gumonoid   = txLoadImage ("GM.bmp");
            int  yGumonoid  = 500;
            int  xGumonoid  = 900;
        while(!GetAsyncKeyState (VK_ESCAPE))
    {
        txBegin();
        txSetColor (TX_WHITE);
        txSetFillColor(TX_BLACK);
        txBitBlt (txDC(), 0, 0, 1920, 1080, background, 0, 0);
        txTransparentBlt(txDC() ,xGumonoid ,yGumonoid ,90 ,388 , gumonoid ,0 , 0, TX_WHITE);
        if(GetAsyncKeyState('W'))
        {
            yGumonoid -=10;

        }
        if(GetAsyncKeyState('S'))
        {
            yGumonoid +=10;

        }
        if(GetAsyncKeyState('D'))
        {
            xGumonoid +=10;

        }
        if(GetAsyncKeyState('A'))
        {
            xGumonoid -=10;
        }
        txEnd();
        txSleep(10);
    }
        txDeleteDC (background);
        txDeleteDC (gumonoid);
txTextCursor (false);
return 0;
}

