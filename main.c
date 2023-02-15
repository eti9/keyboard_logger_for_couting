#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL_image.h>
#include <sdl_image>
#include <windows.h>
#include <time.h>
#include <conio.h>
#include <SDL/SDL_ttf.h>
#include <winuser.h>
#define PATH  "D:/test-log.txt"
#define MAXINPUT 1024
#define HEIGHT 55
#define WIDTH 55
int status = 0;
int s1[MAXINPUT];
int continuer;
void pause();
void coloring(float moyenne, float *red, float *green, float *blue, int lettre){
    if (s1[lettre] > moyenne){
        *red = 255;
        *blue = 0;
        if (s1[lettre]/moyenne > 10) *green = 0;
        else *green = 255 - ((s1[lettre]/moyenne)*25.5);
    }
    if (s1[lettre] < moyenne){
        *red = 0;
        *green = 255;
        if (moyenne/s1[lettre] > 10)  *blue = 255;
        else *blue = (moyenne/s1[lettre]) * 25,5;
    }
}

void keyboardgraph(){
    float totaltouchedown = 0;
    float moyenne;
    float red=0;
    float blue=0;
    float green=0;
    float *redpts = &red;
    float *bluepts = &blue;
    float *greenpts = &green;
    int comptr;
    if (continuer){
     SDL_Surface *keyEcran = NULL, *image = NULL;
     for (comptr = 48; comptr <= 57; comptr++){
        totaltouchedown += s1[comptr];
     }
     for (comptr = 65; comptr <= 90; comptr++){
        totaltouchedown += s1[comptr];
     }
     moyenne = totaltouchedown/36;


    //Calcul des couleurs
/* if (s1[100] > moyenne){
        red = 255;
        blue = 0;
        if (s1[100]/moyenne > 10) green = 0;
        else green = 255 - ((s1[100]/moyenne)*25.5);
    }
    if (s1[100] < moyenne){
        red = 0;
        green = 255;
        if (moyenne/s1[100] > 10)  blue = 255;
        else blue = (moyenne/s1[100]) * 25,5;
    }     */

    // Test avec la touche A
    //Calcul des couleurs


    SDL_Rect positionImage;
    positionImage.y = 0;
    positionImage.x = 0;
    SDL_Init(SDL_INIT_VIDEO);
    keyEcran = SDL_SetVideoMode(900, 300, 32, SDL_HWSURFACE);
    image = IMG_Load("keyboard.bmp");
    SDL_FillRect(keyEcran, NULL, SDL_MapRGB(keyEcran->format, 255, 255, 255));
    SDL_Surface *a, *b, *c, *d, *e, *f, *g, *h, *i, *j, *k, *l, *m, *n, *o, *p, *q, *r, *s, *t, *u, *v, *w, *x, *y, *z, *un, *deux, *trois, *quatre, *cinq, *six, *sept, *huit, *neuf, *zero;
    SDL_Rect positionRectangle;


    coloring(moyenne, &red, &green, &blue, 65);
    a = SDL_CreateRGBSurface(0, WIDTH, HEIGHT, 32, 0, 0, 0, 0);
    positionRectangle.x = 107;
    positionRectangle.y = 122;
    SDL_FillRect(a, NULL, SDL_MapRGB(a->format, red, green, blue));
    SDL_BlitSurface(a , NULL, keyEcran, &positionRectangle);

    coloring(moyenne, &red, &green, &blue, 66);
    b = SDL_CreateRGBSurface(0, WIDTH, HEIGHT, 32, 0, 0, 0, 0);
    positionRectangle.x = 377;
    positionRectangle.y = 182;
    SDL_FillRect(b , NULL, SDL_MapRGB(b->format, red, green, blue));
    SDL_BlitSurface(b , NULL, keyEcran, &positionRectangle);

    coloring(moyenne, &red, &green, &blue, 67);
    c = SDL_CreateRGBSurface(0, WIDTH, HEIGHT, 32, 0, 0, 0, 0);
    positionRectangle.x = 257;
    positionRectangle.y = 182;
    SDL_FillRect(c , NULL, SDL_MapRGB(c->format, red, green, blue));
    SDL_BlitSurface(c , NULL, keyEcran, &positionRectangle);

    coloring(moyenne, &red, &green, &blue, 68);
    d = SDL_CreateRGBSurface(0, WIDTH, HEIGHT, 32, 0, 0, 0, 0);
    positionRectangle.x = 227;
    positionRectangle.y = 122;
    SDL_FillRect(d , NULL, SDL_MapRGB(d->format, red, green, blue));
    SDL_BlitSurface(d , NULL, keyEcran, &positionRectangle);

    coloring(moyenne, &red, &green, &blue, 69);
    e = SDL_CreateRGBSurface(0, WIDTH, HEIGHT, 32, 0, 0, 0, 0);
    positionRectangle.x = 213;
    positionRectangle.y = 62;
    SDL_FillRect(e , NULL, SDL_MapRGB(e->format, red, green, blue));
    SDL_BlitSurface(e , NULL, keyEcran, &positionRectangle);

    coloring(moyenne, &red, &green, &blue, 70);
    f = SDL_CreateRGBSurface(0, WIDTH, HEIGHT, 32, 0, 0, 0, 0);
    positionRectangle.x = 287;
    positionRectangle.y = 122;
    SDL_FillRect(f , NULL, SDL_MapRGB(f->format, red, green, blue));
    SDL_BlitSurface(f , NULL, keyEcran, &positionRectangle);

    coloring(moyenne, &red, &green, &blue, 71);
    g = SDL_CreateRGBSurface(0, WIDTH, HEIGHT, 32, 0, 0, 0, 0);
    positionRectangle.x = 347;
    positionRectangle.y = 122;
    SDL_FillRect(g , NULL, SDL_MapRGB(g->format, red, green, blue));
    SDL_BlitSurface(g , NULL, keyEcran, &positionRectangle);

    coloring(moyenne, &red, &green, &blue,  72);
    h = SDL_CreateRGBSurface(0, WIDTH, HEIGHT, 32, 0, 0, 0, 0);
    positionRectangle.x = 407;
    positionRectangle.y = 122;
    SDL_FillRect(h , NULL, SDL_MapRGB(h->format, red, green, blue));
    SDL_BlitSurface(h , NULL, keyEcran, &positionRectangle);

    coloring(moyenne, &red, &green, &blue,  73);
    i = SDL_CreateRGBSurface(0, WIDTH, HEIGHT, 32, 0, 0, 0, 0);
    positionRectangle.x = 513;
    positionRectangle.y = 62;
     SDL_FillRect(i , NULL, SDL_MapRGB(i->format, red, green, blue));
    SDL_BlitSurface(i , NULL, keyEcran, &positionRectangle);

    coloring(moyenne, &red, &green, &blue,  74);
    j = SDL_CreateRGBSurface(0, WIDTH, HEIGHT, 32, 0, 0, 0, 0);
    positionRectangle.x = 467;
    positionRectangle.y = 122;
     SDL_FillRect(j , NULL, SDL_MapRGB(j->format, red, green, blue));
    SDL_BlitSurface(j , NULL, keyEcran, &positionRectangle);

    coloring(moyenne, &red, &green, &blue,  75);
    k = SDL_CreateRGBSurface(0, WIDTH, HEIGHT, 32, 0, 0, 0, 0);
    positionRectangle.x = 527;
    positionRectangle.y = 122;
     SDL_FillRect(k , NULL, SDL_MapRGB(k->format, red, green, blue));
    SDL_BlitSurface(k , NULL, keyEcran, &positionRectangle);

    coloring(moyenne, &red, &green, &blue,  76);
    l = SDL_CreateRGBSurface(0, WIDTH, HEIGHT, 32, 0, 0, 0, 0);
    positionRectangle.x = 587;
    positionRectangle.y = 122;
     SDL_FillRect(l, NULL, SDL_MapRGB(l->format, red, green, blue));
    SDL_BlitSurface(l , NULL, keyEcran, &positionRectangle);

    coloring(moyenne, &red, &green, &blue,  77);
    m = SDL_CreateRGBSurface(0, WIDTH, HEIGHT, 32, 0, 0, 0, 0);
    positionRectangle.x = 497;
    positionRectangle.y = 182;
     SDL_FillRect(m , NULL, SDL_MapRGB(m->format, red, green, blue));
    SDL_BlitSurface(m , NULL, keyEcran, &positionRectangle);

    coloring(moyenne, &red, &green, &blue,  78);
    n = SDL_CreateRGBSurface(0, WIDTH, HEIGHT, 32, 0, 0, 0, 0);
    positionRectangle.x = 437;
    positionRectangle.y = 182;
     SDL_FillRect(n , NULL, SDL_MapRGB(n->format, red, green, blue));
    SDL_BlitSurface(n , NULL, keyEcran, &positionRectangle);

    coloring(moyenne, &red, &green, &blue,  79);
    o = SDL_CreateRGBSurface(0, WIDTH, HEIGHT, 32, 0, 0, 0, 0);
    positionRectangle.x = 573;
    positionRectangle.y = 62;
     SDL_FillRect(o , NULL, SDL_MapRGB(o->format, red, green, blue));
    SDL_BlitSurface(o , NULL, keyEcran, &positionRectangle);

    coloring(moyenne, &red, &green, &blue,  80);
    p = SDL_CreateRGBSurface(0, WIDTH, HEIGHT, 32, 0, 0, 0, 0);
    positionRectangle.x = 633;
    positionRectangle.y = 62;
     SDL_FillRect(p , NULL, SDL_MapRGB(p->format, red, green, blue));
    SDL_BlitSurface(p , NULL, keyEcran, &positionRectangle);

    coloring(moyenne, &red, &green, &blue,  81);
    q = SDL_CreateRGBSurface(0, WIDTH, HEIGHT, 32, 0, 0, 0, 0);
    positionRectangle.x = 92;
    positionRectangle.y = 62;
     SDL_FillRect(q , NULL, SDL_MapRGB(q->format, red, green, blue));
    SDL_BlitSurface(q , NULL, keyEcran, &positionRectangle);

    coloring(moyenne, &red, &green, &blue,  82);
    r = SDL_CreateRGBSurface(0, WIDTH, HEIGHT, 32, 0, 0, 0, 0);
    positionRectangle.x = 272;
    positionRectangle.y = 62;
     SDL_FillRect(r , NULL, SDL_MapRGB(r->format, red, green, blue));
    SDL_BlitSurface(r , NULL, keyEcran, &positionRectangle);

    coloring(moyenne, &red, &green, &blue,  83);
    s = SDL_CreateRGBSurface(0, WIDTH, HEIGHT, 32, 0, 0, 0, 0);
    positionRectangle.x = 167;
    positionRectangle.y = 122;
    SDL_FillRect(s , NULL, SDL_MapRGB(s->format, red, green, blue));
    SDL_BlitSurface(s , NULL, keyEcran, &positionRectangle);

    coloring(moyenne, &red, &green, &blue,  84);
    t = SDL_CreateRGBSurface(0, WIDTH, HEIGHT, 32, 0, 0, 0, 0);
    positionRectangle.x = 332;
    positionRectangle.y = 62;
    SDL_FillRect(t , NULL, SDL_MapRGB(t->format, red, green, blue));
    SDL_BlitSurface(t , NULL, keyEcran, &positionRectangle);

    coloring(moyenne, &red, &green, &blue,  85);
    u = SDL_CreateRGBSurface(0, WIDTH, HEIGHT, 32, 0, 0, 0, 0);
    positionRectangle.x = 453;
    positionRectangle.y = 62;
    SDL_FillRect(u , NULL, SDL_MapRGB(u->format, red, green, blue));
    SDL_BlitSurface(u , NULL, keyEcran, &positionRectangle);

    coloring(moyenne, &red, &green, &blue,  86);
    v = SDL_CreateRGBSurface(0, WIDTH, HEIGHT, 32, 0, 0, 0, 0);
    positionRectangle.x = 317;
    positionRectangle.y = 182;
     SDL_FillRect(v , NULL, SDL_MapRGB(v->format, red, green, blue));
    SDL_BlitSurface(v , NULL, keyEcran, &positionRectangle);

    coloring(moyenne, &red, &green, &blue,  87);
    w = SDL_CreateRGBSurface(0, WIDTH, HEIGHT, 32, 0, 0, 0, 0);
    positionRectangle.x = 152;
    positionRectangle.y = 62;
     SDL_FillRect(w , NULL, SDL_MapRGB(w->format, red, green, blue));
    SDL_BlitSurface(w , NULL, keyEcran, &positionRectangle);

    coloring(moyenne, &red, &green, &blue,  88);
    x = SDL_CreateRGBSurface(0, WIDTH, HEIGHT, 32, 0, 0, 0, 0);
    positionRectangle.x = 197;
    positionRectangle.y = 182;
     SDL_FillRect(x , NULL, SDL_MapRGB(x->format, red, green, blue));
    SDL_BlitSurface(x , NULL, keyEcran, &positionRectangle);

    coloring(moyenne, &red, &green, &blue,  89);
    y = SDL_CreateRGBSurface(0, WIDTH, HEIGHT, 32, 0, 0, 0, 0);
    positionRectangle.x = 393;
    positionRectangle.y = 62;
     SDL_FillRect(y , NULL, SDL_MapRGB(y->format, red, green, blue));
    SDL_BlitSurface(y , NULL, keyEcran, &positionRectangle);

    coloring(moyenne, &red, &green, &blue,  90);
    z = SDL_CreateRGBSurface(0, WIDTH, HEIGHT, 32, 0, 0, 0, 0);
    positionRectangle.x = 137;
    positionRectangle.y = 182;
     SDL_FillRect(z , NULL, SDL_MapRGB(z->format, red, green, blue));
    SDL_BlitSurface(z , NULL, keyEcran, &positionRectangle);

    coloring(moyenne, &red, &green, &blue,  49);
    un = SDL_CreateRGBSurface(0, WIDTH, HEIGHT, 32, 0, 0, 0, 0);
    positionRectangle.x = 62;
    positionRectangle.y = 2;
     SDL_FillRect(un , NULL, SDL_MapRGB(un->format, red, green, blue));
    SDL_BlitSurface(un , NULL, keyEcran, &positionRectangle);

    coloring(moyenne, &red, &green, &blue,  50);
    deux = SDL_CreateRGBSurface(0, WIDTH, HEIGHT, 32, 0, 0, 0, 0);
    positionRectangle.x = 122;
    positionRectangle.y = 2;
     SDL_FillRect(deux , NULL, SDL_MapRGB(deux->format, red, green, blue));
    SDL_BlitSurface(deux , NULL, keyEcran, &positionRectangle);

coloring(moyenne, &red, &green, &blue,  51);
trois = SDL_CreateRGBSurface(0, WIDTH, HEIGHT, 32, 0, 0, 0, 0);
    positionRectangle.x = 182;
    positionRectangle.y = 2;
     SDL_FillRect(trois , NULL, SDL_MapRGB(trois->format, red, green, blue));
    SDL_BlitSurface(trois , NULL, keyEcran, &positionRectangle);

coloring(moyenne, &red, &green, &blue,  52);
quatre = SDL_CreateRGBSurface(0, WIDTH, HEIGHT, 32, 0, 0, 0, 0);
    positionRectangle.x = 242;
    positionRectangle.y = 2;
     SDL_FillRect(quatre , NULL, SDL_MapRGB(quatre->format, red, green, blue));
    SDL_BlitSurface(quatre , NULL, keyEcran, &positionRectangle);

coloring(moyenne, &red, &green, &blue,  53);
cinq = SDL_CreateRGBSurface(0, WIDTH, HEIGHT, 32, 0, 0, 0, 0);
    positionRectangle.x = 303;
    positionRectangle.y = 2;
     SDL_FillRect(cinq , NULL, SDL_MapRGB(cinq->format, red, green, blue));
    SDL_BlitSurface(cinq , NULL, keyEcran, &positionRectangle);

coloring(moyenne, &red, &green, &blue,  54);
six = SDL_CreateRGBSurface(0, WIDTH, HEIGHT, 32, 0, 0, 0, 0);
    positionRectangle.x = 363;
    positionRectangle.y = 2;
     SDL_FillRect(six , NULL, SDL_MapRGB(six->format, red, green, blue));
    SDL_BlitSurface(six , NULL, keyEcran, &positionRectangle);

coloring(moyenne, &red, &green, &blue,  55);
sept = SDL_CreateRGBSurface(0, WIDTH, HEIGHT, 32, 0, 0, 0, 0);
    positionRectangle.x = 423;
    positionRectangle.y = 2;
     SDL_FillRect(sept , NULL, SDL_MapRGB(sept->format, red, green, blue));
    SDL_BlitSurface(sept , NULL, keyEcran, &positionRectangle);

coloring(moyenne, &red, &green, &blue,  56);
huit = SDL_CreateRGBSurface(0, WIDTH, HEIGHT, 32, 0, 0, 0, 0);
    positionRectangle.x = 483;
    positionRectangle.y = 2;
     SDL_FillRect(huit , NULL, SDL_MapRGB(huit->format, red, green, blue));
    SDL_BlitSurface(huit , NULL, keyEcran, &positionRectangle);

coloring(moyenne, &red, &green, &blue,  57);
neuf = SDL_CreateRGBSurface(0, WIDTH, HEIGHT, 32, 0, 0, 0, 0);
    positionRectangle.x = 543;
    positionRectangle.y = 2;
     SDL_FillRect(neuf , NULL, SDL_MapRGB(neuf->format, red, green, blue));
    SDL_BlitSurface(neuf , NULL, keyEcran, &positionRectangle);

coloring(moyenne, &red, &green, &blue,  48);
zero = SDL_CreateRGBSurface(0, WIDTH, HEIGHT, 32, 0, 0, 0, 0);
    positionRectangle.x = 602;
    positionRectangle.y = 2;
     SDL_FillRect(zero , NULL, SDL_MapRGB(zero->format, red, green, blue));
    SDL_BlitSurface(zero , NULL, keyEcran, &positionRectangle);



    SDL_BlitSurface(image, NULL, keyEcran, &positionImage);
    SDL_Flip(keyEcran);
    pause();
    SDL_FreeSurface(image);
    SDL_FreeSurface(keyEcran);
    SDL_Quit();
    }
}
int log(int conversion, int choixcalcul, int miniState)
{
    if (miniState != 3 ) status = miniState;
    if (status == 1){
    int comptr;
    if (choixcalcul == 0) {
    if (s1[0] != 0){
    for (comptr = 0; comptr < 1024; comptr++){
        s1[comptr] = 0;
    }
    }
    s1[conversion]++;
    return 0;
    }
    }
    if (choixcalcul == 1){
        return s1[conversion];
    }
    else return 0;
}
LRESULT CALLBACK LowLevelKeyboardProc(int nCode, WPARAM wParam, LPARAM lParam){
        KBDLLHOOKSTRUCT *pointKeyBoard = (KBDLLHOOKSTRUCT *) lParam;
        DWORD dwMsg = 1;
        switch(wParam){
        case WM_KEYDOWN :{

            DWORD vkCode = pointKeyBoard->vkCode;
            char key[16];
            log(vkCode, 0, 3);
            break;
        }
        default :
            return CallNextHookEx(NULL, nCode, wParam, lParam);
            break;
        }
return 0;
}
DWORD WINAPI
KeyLogger(LPVOID lpParameter)
{

    HHOOK hKeyHook;
    HINSTANCE hExe = GetModuleHandle(NULL);

    if (!hExe)
    {
        return 1;
    }
    else
    {
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Surface *bouton = NULL, *ecranbouton = NULL, *pressed = NULL, *over = NULL, *on = NULL, *off = NULL, *quit = NULL, *wood = NULL;
    SDL_Rect positionbouton;
    SDL_Rect positionswitch;
    SDL_Rect positionquit;
    SDL_Rect positionwood;
    positionwood.x = 0;
    positionwood.y = 0;
    positionquit.x = 450;
    positionquit.y = 10;
    positionswitch.x = 218;
    positionswitch.y = 35;
    positionbouton.x = 125;
    positionbouton.y = 125;
    bouton = IMG_Load("normal_button.bmp");
    pressed = IMG_Load("clicked_button.bmp");
    over = IMG_Load("hovered_button.bmp");
    on = IMG_Load("on.bmp");
    off = IMG_Load("off.bmp");
    quit = IMG_Load("quit.bmp");
    wood = IMG_Load("wood.jpg");

    ecranbouton = SDL_SetVideoMode(500, 500, 32, SDL_HWSURFACE);
    SDL_BlitSurface(wood,NULL,ecranbouton, &positionwood);
    SDL_BlitSurface(bouton,NULL,ecranbouton,&positionbouton);
    SDL_BlitSurface(quit,NULL,ecranbouton,&positionquit);
    SDL_BlitSurface(off,NULL,ecranbouton,&positionswitch);
    SDL_Flip(ecranbouton);
    SDL_Event event2;
        hKeyHook = SetWindowsHookEx(WH_KEYBOARD_LL,(HOOKPROC) LowLevelKeyboardProc, hExe, 0);
        MSG msg;
        int jecompte = 0;
        int bitch = 0;
        int onsencriss = 0;
        while (GetMessage(&msg, NULL, 0, 0) != 0 || jecompte == 0)
        {
            continuer = 0;
            SDL_WaitEvent(&event2);
            switch (event2.type){
            case SDL_QUIT:
                jecompte = 1;
                SDL_FreeSurface(wood);
                SDL_FreeSurface(quit);
                SDL_FreeSurface(on);
                SDL_FreeSurface(off);
                SDL_FreeSurface(bouton);
                SDL_FreeSurface(pressed);
                SDL_FreeSurface(over);
                SDL_FreeSurface(ecranbouton);
                SDL_Quit();
                UnhookWindowsHookEx(hKeyHook);
                return 0;
            break;
            case SDL_MOUSEMOTION:
                  if   ((((event2.motion.y-250)*(event2.motion.y-250))+((event2.motion.x-250)*(event2.motion.x-250))) <= 16525){
                    if (bitch != 1){
                SDL_BlitSurface(over,NULL,ecranbouton,&positionbouton);
                SDL_UpdateRect(ecranbouton,0 ,0 ,0 ,0);
                bitch = 1;
                    }
                  }
                  else {
                    if (bitch != 0){
                SDL_BlitSurface(bouton,NULL,ecranbouton,&positionbouton);
                SDL_UpdateRect(ecranbouton,0 ,0 ,0 ,0);
                bitch = 0;
                    }
                  }
                  break;
            case SDL_MOUSEBUTTONDOWN:
        if   ((((event2.button.y-250)*(event2.button.y-250))+((event2.button.x-250)*(event2.button.x-250))) <= 16525){
                SDL_BlitSurface(pressed,NULL,ecranbouton,&positionbouton);
                SDL_UpdateRect(ecranbouton,0 ,0 ,0 ,0);
                Sleep(100);
                SDL_BlitSurface(bouton,NULL,ecranbouton,&positionbouton);
                SDL_UpdateRect(ecranbouton, 0, 0 ,0 ,0);
                if (onsencriss != 1){
                SDL_BlitSurface(on,NULL,ecranbouton,&positionswitch);
                SDL_UpdateRect(ecranbouton,0 ,0 ,0 ,0);
                onsencriss = 1;
                log(0,0,1);
                } else {
                SDL_BlitSurface(off,NULL,ecranbouton,&positionswitch);
                SDL_UpdateRect(ecranbouton,0 ,0 ,0 ,0);
                onsencriss = 0;
                log(0,0,0);
                continuer = 1;
                jecompte = 1;
                SDL_FreeSurface(wood);
                SDL_FreeSurface(quit);
                SDL_FreeSurface(on);
                SDL_FreeSurface(off);
                SDL_FreeSurface(bouton);
                SDL_FreeSurface(pressed);
                SDL_FreeSurface(over);
                SDL_FreeSurface(ecranbouton);
                SDL_Quit();
                UnhookWindowsHookEx(hKeyHook);
                return 0;
                }
                  }
                else if ((((event2.button.y-25)*(event2.button.y-25))+((event2.button.x-465)*(event2.button.x-465))) <= 225){
                jecompte = 1;
                SDL_FreeSurface(wood);
                SDL_FreeSurface(quit);
                SDL_FreeSurface(on);
                SDL_FreeSurface(off);
                SDL_FreeSurface(bouton);
                SDL_FreeSurface(pressed);
                SDL_FreeSurface(over);
                SDL_FreeSurface(ecranbouton);
                SDL_Quit();
                UnhookWindowsHookEx(hKeyHook);
                return 0;
                }
                  break;
        }
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
        SDL_FreeSurface(wood);
        SDL_FreeSurface(quit);
        SDL_FreeSurface(on);
        SDL_FreeSurface(off);
        SDL_FreeSurface(bouton);
        SDL_FreeSurface(pressed);
        SDL_FreeSurface(over);
        SDL_FreeSurface(ecranbouton);
        SDL_Quit();
        UnhookWindowsHookEx(hKeyHook);
    }
    return 0;
}
int start(char* argv[])
{
    HANDLE hThread;
    hThread = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE) KeyLogger,
            (LPVOID) argv[0], 0, NULL );

    if (hThread)
    {
        return WaitForSingleObject(hThread, INFINITE);
    }
    return 1;
}
int main(int argc, char *argv[])
{
    continuer = 1;
    while (continuer){
    start(argv);
    keyboardgraph();
    }
    return 0;
}

void pause()
{
    int continuer = 1;
    SDL_Event event;

    while (continuer)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
                continuer = 0;
        }
    }
}
