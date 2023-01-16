

#include "TXLib.h"

int main()
    {
        txCreateWindow (1920, 1080);
        HDC  background = txLoadImage ("SP.bmp");
        HDC  background = txLoadImage ("GM.bmp");

        while(!GetAsyncKeyState (VK_ESCAPE))
    {
        txBegin();
        txSetColor (TX_WHITE);
        txSetFillColor(TX_BLACK);
        txBitBlt (txDC(), 0, 0, 1920, 1080, background, 0, 0);
        txTransparentBlt(txDC(),100,200,150,754,)


        txEnd();
        txSleep(10);
    }
        txDeleteDC (background);

    txTextCursor (false);
    return 0;
    }

