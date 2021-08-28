#pragma config(Sensor, port3,  EndX,           sensorVexIQ_Touch)
#pragma config(Sensor, port4,  EndY,           sensorVexIQ_Touch)
#pragma config(Motor,  motor2,          MotorX,        tmotorVexIQ, PIDControl, encoder)
#pragma config(Motor,  motor5,          MotorY,        tmotorVexIQ, PIDControl, encoder)
#pragma config(Motor,  motor6,          MotorPen,      tmotorVexIQ, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                       //
//   VEX-IQ-Plotter v3     (C) Andreas Dreier / Germany        Please don't hesitate to send me a mail   //
//                             andreas@dreier-privat.de        when you found errors or when you have    //
//   Plotter.C3PO.c            21.11.2015                      ideas for improvements ;-)                //
//                                                                                                       //
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                       //
//   Necessary parts:                                                                                    //
//                                                                                                       //
//   1 x Super Kit       --> http://www.vexrobotics.com/vexiq/products/kits-bundles/super-kit-eu.html    //
//       P/N: 228-3670                                                                                   //
//                                                                                                       //
//   2 x Gear Add-On kit --> http://www.vexrobotics.com/vexiq/products/accessories/228-2532.html         //
//       P/N: 228-2532                                                                                   //
//                                                                                                       //
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                       //
//   Connections to the VEX-IQ brain:                                                                    //
//                                                                                                       //
//   Port   Type           Function                                                                      //
//   ----   ------------   -------------------------------------------------------------------           //
//    02    Motor          Movement x axis                                                               //
//    03    Touch sensor   Detecting right limitation of x axis                                          //
//    04    Touch sensor   Detecting bottom limitation of y axis                                         //
//    05    Motor          Movement y axis                                                               //
//    06    Motor          Movement pen up and down                                                      //
//                                                                                                       //
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "plotBasics.inc"

///////////////////////////////////////////////////////////////////////////////////////////////////////////


float ms;
int   mx;
int   my;

///////////////////////////////////////////////////////////////////////////////////////////////////////////

void plotLine( int px, int py )
{
     plotLineTo( mx + ms * px, my + ms * py );
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////

void plotMove( int px, int py )
{
     plotMoveTo( mx + ms * px, my + ms * py );
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////

void plotC3PO( int x, int y, float scale = 1.0 )
{
     ms = scale;
     mx = x;
     my = y;

     plotMove(  243,  326 );
     plotPenDown();
     plotLine(  245,  360 );
     plotLine(  247,  402 );
     plotLine(  249,  436 );
     plotLine(  250,  464 );
     plotLine(  255,  476 );
     plotLine(  256,  490 );
     plotLine(  255,  511 );
     plotLine(  264,  521 );
     plotLine(  267,  527 );
     plotLine(  271,  534 );
     plotLine(  279,  537 );
     plotLine(  285,  543 );
     plotLine(  287,  547 );
     plotLine(  300,  557 );
     plotLine(  305,  554 );
     plotLine(  311,  552 );
     plotLine(  313,  555 );
     plotLine(  312,  561 );
     plotLine(  312,  564 );
     plotLine(  323,  569 );
     plotLine(  335,  573 );
     plotLine(  339,  577 );
     plotLine(  344,  582 );
     plotLine(  351,  591 );
     plotLine(  359,  590 );
     plotLine(  362,  592 );
     plotLine(  364,  595 );
     plotLine(  359,  602 );
     plotLine(  398,  629 );
     plotLine(  400,  631 );
     plotLine(  408,  631 );
     plotLine(  411,  636 );
     plotLine(  415,  636 );
     plotLine(  418,  636 );
     plotLine(  418,  644 );
     plotLine(  412,  645 );
     plotLine(  406,  653 );
     plotLine(  405,  656 );
     plotLine(  388,  671 );
     plotLine(  372,  691 );
     plotLine(  366,  694 );
     plotLine(  359,  693 );
     plotLine(  356,  692 );
     plotLine(  331,  719 );
     plotLine(  333,  728 );
     plotLine(  328,  740 );
     plotLine(  321,  751 );
     plotLine(  312,  761 );
     plotLine(  296,  770 );
     plotLine(  285,  777 );
     plotLine(  274,  777 );
     plotLine(  265,  777 );
     plotLine(  233,  782 );
     plotLine(  229,  794 );
     plotLine(  230,  800 );
     plotLine(  221,  801 );
     plotLine(  219,  805 );
     plotLine(  217,  817 );
     plotLine(  226,  822 );
     plotLine(  231,  818 );
     plotLine(  234,  820 );
     plotLine(  233,  831 );
     plotLine(  229,  837 );
     plotLine(  230,  856 );
     plotLine(  234,  865 );
     plotLine(  236,  886 );
     plotLine(  232,  887 );
     plotLine(  230,  897 );
     plotLine(  224,  912 );
     plotLine(  220,  925 );
     plotLine(  210,  934 );
     plotLine(  198,  941 );
     plotLine(  186,  946 );
     plotLine(  175,  951 );
     plotLine(  165,  947 );
     plotLine(  152,  938 );
     plotLine(  141,  927 );
     plotLine(  132,  909 );
     plotLine(  131,  897 );
     plotLine(  131,  875 );
     plotLine(  128,  873 );
     plotLine(  136,  845 );
     plotLine(  141,  844 );
     plotLine(  144,  830 );
     plotLine(  144,  812 );
     plotLine(  148,  807 );
     plotLine(  148,  815 );
     plotLine(  160,  812 );
     plotLine(  161,  806 );
     plotLine(  160,  804 );
     plotLine(  152,  805 );
     plotLine(  141,  776 );
     plotLine(  109,  771 );
     plotLine(   97,  769 );
     plotLine(   88,  759 );
     plotLine(   83,  753 );
     plotLine(   60,  734 );
     plotLine(   62,  727 );
     plotLine(    4,  643 );
     plotLine(    0,  636 );
     plotLine(    0,  627 );
     plotLine(    0,  613 );
     plotLine(    4,  561 );
     plotLine(   12,  537 );
     plotLine(   15,  520 );
     plotLine(   21,  506 );
     plotLine(   28,  486 );
     plotLine(   31,  489 );
     plotLine(   28,  510 );
     plotLine(   43,  484 );
     plotLine(   46,  486 );
     plotLine(   41,  515 );
     plotLine(   57,  488 );
     plotLine(   62,  492 );
     plotLine(   55,  519 );
     plotLine(   69,  497 );
     plotLine(   70,  474 );
     plotLine(   78,  417 );
     plotLine(   83,  375 );
     plotLine(   88,  355 );
     plotLine(   94,  320 );
     plotLine(   88,  307 );
     plotLine(   86,  297 );
     plotLine(   87,  287 );
     plotLine(   92,  272 );
     plotLine(   99,  263 );
     plotLine(  104,  261 );
     plotLine(  110,  238 );
     plotLine(  114,  236 );
     plotLine(  132,  172 );
     plotLine(  139,  127 );
     plotLine(  140,  108 );
     plotLine(  141,   98 );
     plotLine(  140,   93 );
     plotLine(  132,   82 );
     plotLine(  115,   71 );
     plotLine(   99,   61 );
     plotLine(   84,   49 );
     plotLine(   78,   43 );
     plotLine(   75,   36 );
     plotLine(   74,   31 );
     plotLine(   97,   24 );
     plotLine(  113,   23 );
     plotLine(  126,   24 );
     plotLine(  145,   31 );
     plotLine(  179,   46 );
     plotLine(  193,   51 );
     plotLine(  199,   56 );
     plotLine(  195,   65 );
     plotLine(  196,   79 );
     plotLine(  194,   89 );
     plotLine(  199,  112 );
     plotLine(  195,  119 );
     plotLine(  190,  128 );
     plotLine(  187,  178 );
     plotLine(  184,  209 );
     plotLine(  177,  254 );
     plotLine(  184,  249 );
     plotLine(  190,  249 );
     plotLine(  195,  238 );
     plotLine(  206,  178 );
     plotLine(  209,  118 );
     plotLine(  206,   86 );
     plotLine(  202,   81 );
     plotLine(  208,   78 );
     plotLine(  205,   67 );
     plotLine(  197,   45 );
     plotLine(  190,   36 );
     plotLine(  185,   20 );
     plotLine(  187,    8 );
     plotLine(  191,    3 );
     plotLine(  201,    1 );
     plotLine(  216,    0 );
     plotLine(  227,    1 );
     plotLine(  239,    5 );
     plotLine(  248,   13 );
     plotLine(  259,   43 );
     plotLine(  257,   53 );
     plotLine(  255,   66 );
     plotLine(  256,   74 );
     plotLine(  263,   82 );
     plotLine(  263,   88 );
     plotLine(  256,  101 );
     plotLine(  257,  133 );
     plotLine(  260,  168 );
     plotLine(  264,  195 );
     plotLine(  267,  203 );
     plotLine(  260,  218 );
     plotLine(  261,  254 );
     plotLine(  265,  240 );
     plotLine(  263,  235 );
     plotLine(  270,  222 );
     plotLine(  272,  242 );
     plotLine(  270,  240 );
     plotLine(  264,  262 );
     plotLine(  267,  285 );
     plotLine(  266,  296 );
     plotLine(  261,  309 );
     plotLine(  255,  318 );
     plotLine(  247,  324 );
     plotLine(  243,  325 );
     plotPenUp();

     plotMove(  104,  261 );
     plotPenDown();
     plotLine(  122,  260 );
     plotLine(  131,  258 );
     plotLine(  143,  257 );
     plotLine(  152,  254 );
     plotLine(  160,  252 );
     plotLine(  169,  253 );
     plotLine(  174,  259 );
     plotLine(  168,  264 );
     plotLine(  165,  276 );
     plotLine(  164,  287 );
     plotLine(  166,  303 );
     plotLine(  173,  311 );
     plotLine(  170,  331 );
     plotLine(  166,  361 );
     plotLine(  161,  374 );
     plotLine(  159,  393 );
     plotLine(  153,  419 );
     plotLine(  148,  439 );
     plotLine(  145,  445 );
     plotLine(  149,  457 );
     plotLine(  153,  470 );
     plotLine(  156,  482 );
     plotLine(  163,  493 );
     plotLine(  159,  499 );
     plotLine(  153,  490 );
     plotLine(  151,  480 );
     plotLine(  148,  471 );
     plotLine(  147,  463 );
     plotLine(  145,  455 );
     plotLine(  134,  454 );
     plotLine(  124,  459 );
     plotLine(  114,  469 );
     plotLine(  106,  482 );
     plotLine(   97,  490 );
     plotLine(   84,  504 );
     plotLine(   81,  511 );
     plotLine(   71,  513 );
     plotLine(   62,  534 );
     plotLine(   65,  537 );
     plotLine(   73,  532 );
     plotLine(   85,  523 );
     plotLine(   86,  524 );
     plotLine(   86,  530 );
     plotLine(   73,  545 );
     plotLine(   71,  548 );
     plotLine(   65,  549 );
     plotLine(   58,  559 );
     plotLine(   47,  566 );
     plotLine(   43,  574 );
     plotLine(   47,  598 );
     plotLine(   52,  608 );
     plotLine(   51,  614 );
     plotLine(   89,  672 );
     plotLine(   89,  661 );
     plotLine(   88,  653 );
     plotLine(   88,  643 );
     plotLine(   91,  633 );
     plotLine(   93,  623 );
     plotLine(   98,  615 );
     plotLine(  103,  619 );
     plotLine(  110,  614 );
     plotLine(  122,  610 );
     plotLine(  135,  609 );
     plotLine(  143,  611 );
     plotLine(  151,  613 );
     plotLine(  159,  617 );
     plotLine(  168,  621 );
     plotLine(  178,  619 );
     plotLine(  191,  615 );
     plotLine(  207,  612 );
     plotLine(  221,  608 );
     plotLine(  228,  605 );
     plotLine(  239,  602 );
     plotLine(  242,  599 );
     plotLine(  245,  605 );
     plotLine(  249,  613 );
     plotLine(  254,  621 );
     plotLine(  256,  627 );
     plotLine(  255,  632 );
     plotLine(  259,  635 );
     plotLine(  255,  641 );
     plotLine(  267,  682 );
     plotLine(  271,  687 );
     plotLine(  279,  686 );
     plotLine(  287,  686 );
     plotLine(  292,  686 );
     plotLine(  303,  674 );
     plotLine(  284,  638 );
     plotLine(  285,  636 );
     plotLine(  275,  608 );
     plotLine(  278,  605 );
     plotLine(  249,  575 );
     plotLine(  245,  569 );
     plotLine(  240,  572 );
     plotLine(  237,  589 );
     plotLine(  225,  595 );
     plotLine(  212,  594 );
     plotLine(  200,  592 );
     plotLine(  186,  585 );
     plotLine(  168,  578 );
     plotLine(  151,  572 );
     plotLine(  132,  569 );
     plotLine(  113,  570 );
     plotLine(  103,  572 );
     plotLine(   95,  586 );
     plotLine(   96,  590 );
     plotLine(  102,  591 );
     plotLine(  104,  609 );
     plotLine(   98,  615 );
     plotPenUp();

     plotMove(   95,  586 );
     plotPenDown();
     plotLine(   92,  577 );
     plotLine(   85,  567 );
     plotLine(   87,  555 );
     plotLine(   87,  532 );
     plotPenUp();

     plotMove(   86,  522 );
     plotPenDown();
     plotLine(   86,  515 );
     plotLine(   81,  513 );
     plotPenUp();

     plotMove(   71,  512 );
     plotPenDown();
     plotLine(   83,  497 );
     plotLine(   93,  483 );
     plotLine(  105,  469 );
     plotLine(  114,  458 );
     plotLine(  125,  455 );
     plotLine(  145,  452 );
     plotPenUp();

     plotMove(  160,  377 );
     plotPenDown();
     plotLine(  162,  352 );
     plotLine(  165,  332 );
     plotLine(  164,  323 );
     plotLine(  172,  319 );
     plotPenUp();

     plotMove(  163,  323 );
     plotPenDown();
     plotLine(  156,  319 );
     plotLine(  148,  312 );
     plotLine(  142,  303 );
     plotLine(  140,  294 );
     plotLine(  139,  287 );
     plotLine(  140,  285 );
     plotLine(  111,  286 );
     plotLine(   85,  291 );
     plotPenUp();

     plotMove(  170,  317 );
     plotPenDown();
     plotLine(  165,  318 );
     plotLine(  156,  315 );
     plotLine(  149,  308 );
     plotLine(  146,  298 );
     plotLine(  144,  285 );
     plotLine(  146,  273 );
     plotLine(  148,  265 );
     plotLine(  153,  259 );
     plotLine(  159,  257 );
     plotLine(  167,  255 );
     plotLine(  170,  259 );
     plotPenUp();

     plotMove(  123,  285 );
     plotPenDown();
     plotLine(  126,  275 );
     plotLine(  130,  266 );
     plotLine(  137,  261 );
     plotLine(  142,  258 );
     plotPenUp();

     plotMove(   97,  286 );
     plotPenDown();
     plotLine(   99,  275 );
     plotLine(  103,  267 );
     plotLine(  113,  261 );
     plotPenUp();

     plotMove(  166,  279 );
     plotPenDown();
     plotLine(  194,  278 );
     plotLine(  227,  280 );
     plotLine(  225,  290 );
     plotLine(  227,  303 );
     plotLine(  232,  313 );
     plotLine(  242,  325 );
     plotPenUp();

     plotMove(  180,  277 );
     plotPenDown();
     plotLine(  182,  266 );
     plotLine(  187,  259 );
     plotLine(  192,  255 );
     plotPenUp();

     plotMove(  210,  277 );
     plotPenDown();
     plotLine(  212,  269 );
     plotLine(  217,  263 );
     plotLine(  222,  259 );
     plotLine(  227,  254 );
     plotPenUp();

     plotMove(  190,  253 );
     plotPenDown();
     plotLine(  250,  253 );
     plotLine(  240,  259 );
     plotLine(  235,  269 );
     plotLine(  232,  280 );
     plotLine(  231,  293 );
     plotLine(  235,  304 );
     plotLine(  241,  313 );
     plotLine(  251,  316 );
     plotLine(  260,  308 );
     plotLine(  265,  298 );
     plotLine(  265,  288 );
     plotLine(  265,  275 );
     plotLine(  263,  265 );
     plotLine(  259,  257 );
     plotLine(  251,  255 );
     plotPenUp();

     plotMove(  141,  101 );
     plotPenDown();
     plotLine(  159,   94 );
     plotLine(  174,   92 );
     plotLine(  192,   89 );
     plotPenUp();

     plotMove(  206,   89 );
     plotPenDown();
     plotLine(  220,   88 );
     plotLine(  239,   82 );
     plotLine(  252,   77 );
     plotLine(  256,   76 );
     plotPenUp();

     plotMove(  145,   90 );
     plotPenDown();
     plotLine(  153,   80 );
     plotLine(  160,   68 );
     plotLine(  161,   49 );
     plotPenUp();

     plotMove(  129,   72 );
     plotPenDown();
     plotLine(  141,   65 );
     plotLine(  143,   56 );
     plotLine(  146,   43 );
     plotPenUp();

     plotMove(  104,   62 );
     plotPenDown();
     plotLine(  113,   63 );
     plotLine(  120,   61 );
     plotLine(  127,   55 );
     plotLine(  133,   45 );
     plotLine(  133,   36 );
     plotPenUp();

     plotMove(   76,   37 );
     plotPenDown();
     plotLine(   88,   32 );
     plotLine(  105,   31 );
     plotLine(  119,   32 );
     plotLine(  133,   35 );
     plotLine(  147,   44 );
     plotLine(  159,   49 );
     plotLine(  178,   53 );
     plotLine(  191,   60 );
     plotLine(  195,   64 );
     plotPenUp();

     plotMove(  187,   13 );
     plotPenDown();
     plotLine(  197,    9 );
     plotLine(  215,    8 );
     plotLine(  227,    8 );
     plotLine(  237,   13 );
     plotLine(  248,   22 );
     plotLine(  258,   44 );
     plotPenUp();

     plotMove(  200,   44 );
     plotPenDown();
     plotLine(  215,   45 );
     plotLine(  229,   42 );
     plotLine(  241,   38 );
     plotLine(  243,   32 );
     plotPenUp();

     plotMove(  192,   31 );
     plotPenDown();
     plotLine(  204,   34 );
     plotLine(  215,   34 );
     plotLine(  228,   30 );
     plotLine(  234,   23 );
     plotLine(  239,   16 );
     plotPenUp();

     plotMove(  211,   70 );
     plotPenDown();
     plotLine(  219,   70 );
     plotLine(  229,   70 );
     plotLine(  236,   65 );
     plotLine(  244,   54 );
     plotLine(  247,   45 );
     plotPenUp();

     plotMove(   19,  538 );
     plotPenDown();
     plotLine(   31,  526 );
     plotPenUp();

     plotMove(   30,  546 );
     plotPenDown();
     plotLine(   41,  533 );
     plotPenUp();

     plotMove(   21,  504 );
     plotPenDown();
     plotLine(   26,  509 );
     plotPenUp();

     plotMove(   32,  513 );
     plotPenDown();
     plotLine(   39,  514 );
     plotPenUp();

     plotMove(   46,  514 );
     plotPenDown();
     plotLine(   52,  518 );
     plotPenUp();

     plotMove(   40,  529 );
     plotPenDown();
     plotLine(   41,  514 );
     plotPenUp();

     plotMove(   29,  525 );
     plotPenDown();
     plotLine(   29,  509 );
     plotPenUp();

     plotMove(   51,  542 );
     plotPenDown();
     plotLine(   50,  533 );
     plotLine(   53,  520 );
     plotPenUp();

     plotMove(   52,  543 );
     plotPenDown();
     plotLine(   62,  548 );
     plotPenUp();

     plotMove(  142,  878 );
     plotPenDown();
     plotLine(  142,  882 );
     plotLine(  146,  888 );
     plotLine(  153,  892 );
     plotLine(  164,  893 );
     plotLine(  173,  893 );
     plotLine(  177,  889 );
     plotLine(  181,  894 );
     plotLine(  188,  897 );
     plotLine(  202,  897 );
     plotLine(  210,  891 );
     plotLine(  212,  886 );
     plotPenUp();

     plotMove(  142,  877 );
     plotPenDown();
     plotLine(  146,  869 );
     plotLine(  153,  862 );
     plotLine(  162,  855 );
     plotLine(  169,  857 );
     plotLine(  175,  864 );
     plotLine(  178,  872 );
     plotLine(  177,  888 );
     plotPenUp();

     plotMove(  178,  871 );
     plotPenDown();
     plotLine(  183,  865 );
     plotLine(  190,  862 );
     plotLine(  201,  863 );
     plotLine(  207,  872 );
     plotLine(  211,  881 );
     plotLine(  213,  885 );
     plotPenUp();

     plotMove(  173,  838 );
     plotPenDown();
     plotLine(  188,  841 );
     plotLine(  189,  835 );
     plotLine(  174,  834 );
     plotLine(  173,  839 );
     plotPenUp();

     plotMove(  149,  828 );
     plotPenDown();
     plotLine(  161,  831 );
     plotLine(  173,  834 );
     plotLine(  189,  836 );
     plotLine(  204,  837 );
     plotLine(  226,  836 );
     plotPenUp();

     plotMove(  154,  882 );
     plotPenDown();
     plotLine(  152,  878 );
     plotLine(  151,  873 );
     plotLine(  152,  869 );
     plotLine(  158,  867 );
     plotLine(  165,  868 );
     plotLine(  169,  874 );
     plotLine(  168,  877 );
     plotLine(  165,  882 );
     plotLine(  162,  885 );
     plotLine(  156,  882 );
     plotPenUp();

     plotMove(  187,  876 );
     plotPenDown();
     plotLine(  188,  873 );
     plotLine(  191,  870 );
     plotLine(  195,  870 );
     plotLine(  198,  873 );
     plotLine(  202,  879 );
     plotLine(  201,  884 );
     plotLine(  195,  887 );
     plotLine(  191,  885 );
     plotLine(  189,  883 );
     plotLine(  187,  878 );
     plotLine(  187,  875 );
     plotPenUp();

     plotMove(  161,  812 );
     plotPenDown();
     plotLine(  175,  808 );
     plotLine(  188,  809 );
     plotLine(  201,  814 );
     plotLine(  213,  824 );
     plotLine(  221,  836 );
     plotLine(  221,  853 );
     plotLine(  220,  871 );
     plotLine(  221,  881 );
     plotLine(  222,  892 );
     plotLine(  218,  906 );
     plotLine(  213,  917 );
     plotLine(  207,  926 );
     plotLine(  199,  934 );
     plotLine(  187,  939 );
     plotLine(  175,  940 );
     plotLine(  163,  939 );
     plotLine(  152,  935 );
     plotLine(  145,  928 );
     plotLine(  141,  919 );
     plotLine(  138,  905 );
     plotLine(  136,  894 );
     plotLine(  139,  872 );
     plotLine(  144,  851 );
     plotLine(  150,  835 );
     plotLine(  159,  820 );
     plotLine(  161,  813 );
     plotPenUp();

     plotMove(  141,  776 );
     plotPenDown();
     plotLine(  138,  759 );
     plotLine(  142,  755 );
     plotLine(  144,  758 );
     plotLine(  144,  767 );
     plotLine(  148,  779 );
     plotLine(  156,  802 );
     plotLine(  157,  788 );
     plotLine(  152,  769 );
     plotLine(  158,  766 );
     plotLine(  178,  766 );
     plotLine(  196,  771 );
     plotLine(  201,  760 );
     plotLine(  204,  763 );
     plotLine(  201,  812 );
     plotLine(  195,  812 );
     plotLine(  196,  774 );
     plotPenUp();

     plotMove(  160,  789 );
     plotPenDown();
     plotLine(  193,  790 );
     plotLine(  211,  790 );
     plotLine(  230,  786 );
     plotPenUp();

     plotMove(  154,  801 );
     plotPenDown();
     plotLine(  175,  803 );
     plotLine(  188,  803 );
     plotLine(  195,  802 );
     plotPenUp();

     plotMove(  202,  803 );
     plotPenDown();
     plotLine(  210,  801 );
     plotLine(  223,  801 );
     plotPenUp();

     plotMove(  262,  778 );
     plotPenDown();
     plotLine(  255,  764 );
     plotLine(  251,  752 );
     plotLine(  251,  736 );
     plotLine(  251,  720 );
     plotLine(  254,  708 );
     plotLine(  260,  697 );
     plotLine(  269,  688 );
     plotPenUp();

     plotMove(  289,  691 );
     plotPenDown();
     plotLine(  280,  693 );
     plotLine(  276,  706 );
     plotLine(  275,  717 );
     plotLine(  280,  727 );
     plotLine(  287,  735 );
     plotLine(  297,  739 );
     plotLine(  307,  743 );
     plotLine(  319,  743 );
     plotLine(  328,  737 );
     plotLine(  331,  728 );
     plotPenUp();

     plotMove(  311,  741 );
     plotPenDown();
     plotLine(  373,  667 );
     plotLine(  360,  665 );
     plotLine(  349,  665 );
     plotLine(  345,  657 );
     plotLine(  335,  646 );
     plotLine(  280,  700 );
     plotPenUp();

     plotMove(  328,  647 );
     plotPenDown();
     plotLine(  323,  640 );
     plotLine(  286,  610 );
     plotLine(  284,  614 );
     plotLine(  286,  625 );
     plotLine(  292,  635 );
     plotLine(  295,  633 );
     plotLine(  312,  659 );
     plotLine(  316,  663 );
     plotPenUp();

     plotMove(  251,  573 );
     plotPenDown();
     plotLine(  262,  566 );
     plotLine(  272,  556 );
     plotLine(  279,  544 );
     plotPenUp();

     plotMove(  253,  568 );
     plotPenDown();
     plotLine(  239,  563 );
     plotLine(  224,  556 );
     plotLine(  212,  550 );
     plotLine(  201,  541 );
     plotLine(  189,  536 );
     plotLine(  180,  528 );
     plotLine(  178,  521 );
     plotLine(  181,  516 );
     plotLine(  190,  521 );
     plotLine(  199,  528 );
     plotLine(  207,  534 );
     plotLine(  185,  514 );
     plotLine(  174,  503 );
     plotLine(  170,  496 );
     plotLine(  172,  493 );
     plotLine(  183,  501 );
     plotLine(  193,  509 );
     plotLine(  205,  519 );
     plotLine(  216,  527 );
     plotLine(  197,  508 );
     plotLine(  187,  497 );
     plotLine(  181,  488 );
     plotLine(  185,  485 );
     plotLine(  192,  488 );
     plotLine(  202,  500 );
     plotLine(  215,  511 );
     plotLine(  228,  524 );
     plotLine(  210,  505 );
     plotLine(  205,  494 );
     plotLine(  200,  485 );
     plotLine(  205,  482 );
     plotLine(  209,  485 );
     plotLine(  216,  497 );
     plotLine(  223,  505 );
     plotLine(  230,  516 );
     plotLine(  238,  520 );
     plotLine(  224,  501 );
     plotLine(  221,  493 );
     plotLine(  220,  487 );
     plotLine(  222,  484 );
     plotLine(  227,  489 );
     plotLine(  231,  499 );
     plotLine(  244,  514 );
     plotLine(  251,  513 );
     plotPenUp();

     plotMove(  135,  693 );
     plotPenDown();
     plotLine(  120,  686 );
     plotLine(  111,  676 );
     plotLine(  106,  666 );
     plotLine(  106,  655 );
     plotLine(  107,  644 );
     plotLine(  113,  634 );
     plotLine(  120,  629 );
     plotLine(  133,  628 );
     plotLine(  146,  634 );
     plotLine(  157,  643 );
     plotLine(  164,  656 );
     plotLine(  163,  670 );
     plotLine(  158,  682 );
     plotLine(  148,  690 );
     plotLine(  136,  693 );
     plotPenUp();

     plotMove(  135,  674 );
     plotPenDown();
     plotLine(  126,  670 );
     plotLine(  120,  662 );
     plotLine(  121,  654 );
     plotLine(  124,  649 );
     plotLine(  132,  647 );
     plotLine(  139,  648 );
     plotLine(  145,  654 );
     plotLine(  147,  662 );
     plotLine(  144,  671 );
     plotLine(  133,  675 );
     plotPenUp();

     plotMove(  110,  614 );
     plotPenDown();
     plotLine(  105,  576 );
     plotPenUp();

     plotMove(  119,  609 );
     plotPenDown();
     plotLine(  111,  575 );
     plotPenUp();

     plotMove(  127,  608 );
     plotPenDown();
     plotLine(  127,  571 );
     plotPenUp();

     plotMove(  136,  577 );
     plotPenDown();
     plotLine(  134,  608 );
     plotPenUp();

     plotMove(  156,  615 );
     plotPenDown();
     plotLine(  135,  579 );
     plotPenUp();

     plotMove(  138,  572 );
     plotPenDown();
     plotPenUp();

     plotMove(  160,  601 );
     plotPenDown();
     plotLine(  137,  573 );
     plotPenUp();

     plotMove(  169,  619 );
     plotPenDown();
     plotLine(  166,  579 );
     plotPenUp();

     plotMove(  162,  576 );
     plotPenDown();
     plotPenUp();

     plotMove(  159,  577 );
     plotPenDown();
     plotLine(  158,  617 );
     plotPenUp();

     plotMove(  187,  588 );
     plotPenDown();
     plotLine(  191,  615 );
     plotPenUp();

     plotMove(  200,  611 );
     plotPenDown();
     plotLine(  197,  591 );
     plotPenUp();

     plotMove(  207,  595 );
     plotPenDown();
     plotLine(  209,  610 );
     plotPenUp();

     plotMove(  215,  608 );
     plotPenDown();
     plotLine(  212,  599 );
     plotPenUp();

     plotMove(  231,  596 );
     plotPenDown();
     plotLine(  229,  606 );
     plotPenUp();

     plotMove(   97,  711 );
     plotPenDown();
     plotLine(  111,  716 );
     plotLine(  126,  718 );
     plotLine(  143,  721 );
     plotLine(  152,  725 );
     plotLine(  159,  738 );
     plotLine(  161,  745 );
     plotPenUp();

     plotMove(  241,  709 );
     plotPenDown();
     plotLine(  232,  706 );
     plotLine(  220,  703 );
     plotLine(  207,  708 );
     plotLine(  192,  714 );
     plotLine(  180,  719 );
     plotLine(  167,  719 );
     plotLine(  155,  721 );
     plotPenUp();

     plotMove(  108,  767 );
     plotPenDown();
     plotLine(   99,  752 );
     plotLine(   94,  741 );
     plotLine(   93,  731 );
     plotLine(   93,  719 );
     plotPenUp();

     plotMove(   91,  761 );
     plotPenDown();
     plotLine(   86,  751 );
     plotLine(   86,  738 );
     plotLine(   87,  724 );
     plotLine(   89,  710 );
     plotLine(   91,  700 );
     plotLine(   91,  684 );
     plotLine(   89,  671 );
     plotPenUp();

     plotMove(    3,  620 );
     plotPenDown();
     plotLine(    9,  627 );
     plotLine(   16,  630 );
     plotLine(   30,  630 );
     plotLine(   42,  626 );
     plotLine(   46,  641 );
     plotLine(   48,  650 );
     plotLine(   48,  658 );
     plotLine(   50,  666 );
     plotLine(   59,  669 );
     plotLine(   64,  664 );
     plotLine(   64,  655 );
     plotLine(   61,  643 );
     plotLine(   55,  634 );
     plotLine(   51,  623 );
     plotLine(   47,  613 );
     plotLine(   43,  604 );
     plotLine(   40,  598 );
     plotLine(   34,  597 );
     plotLine(   28,  605 );
     plotLine(   34,  613 );
     plotLine(   41,  627 );
     plotPenUp();

     plotMove(   90,  548 );
     plotPenDown();
     plotLine(   92,  541 );
     plotLine(   96,  533 );
     plotLine(  101,  524 );
     plotLine(  106,  518 );
     plotLine(  115,  515 );
     plotLine(  126,  516 );
     plotLine(  136,  522 );
     plotLine(  144,  530 );
     plotLine(  155,  537 );
     plotLine(  171,  545 );
     plotLine(  183,  552 );
     plotLine(  197,  561 );
     plotLine(  213,  568 );
     plotPenUp();

     plotMove(  167,  783 );
     plotPenDown();
     plotLine(  167,  779 );
     plotLine(  165,  774 );
     plotLine(  168,  771 );
     plotLine(  173,  771 );
     plotLine(  179,  774 );
     plotLine(  180,  780 );
     plotLine(  177,  784 );
     plotLine(  170,  784 );
     plotLine(  168,  783 );
     plotPenUp();

     plotMove(   67,  725 );
     plotPenDown();
     plotLine(   82,  705 );
     plotPenUp();

     plotMove(   67,  726 );
     plotPenDown();
     plotLine(   82,  744 );
     plotPenUp();

     plotMove(   16,  628 );
     plotPenDown();
     plotLine(   18,  589 );
     plotPenUp();

     plotMove(  330,  640 );
     plotPenDown();
     plotLine(  343,  634 );
     plotLine(  349,  626 );
     plotLine(  354,  619 );
     plotLine(  356,  608 );
     plotLine(  350,  601 );
     plotLine(  337,  593 );
     plotLine(  329,  588 );
     plotLine(  318,  579 );
     plotLine(  307,  573 );
     plotLine(  299,  565 );
     plotLine(  298,  556 );
     plotPenUp();

     plotMove(  310,  570 );
     plotPenDown();
     plotLine(  313,  565 );
     plotPenUp();

     plotMove(  319,  579 );
     plotPenDown();
     plotLine(  323,  572 );
     plotPenUp();

     plotMove(  335,  575 );
     plotPenDown();
     plotLine(  330,  587 );
     plotPenUp();

     plotMove(  345,  582 );
     plotPenDown();
     plotLine(  338,  592 );
     plotPenUp();

}


///////////////////////////////////////////////////////////////////////////////////////////////////////////

task main()
{
     // Initialize the plotter

     plotInit();

     plotC3PO( 200, 200, 1.5 );

     // Move back to home position

     plotMoveHome();
}

//---------------------------------------------------------------------------------------------------------
//   Plotter.Minion.c    ---   End of program
//---------------------------------------------------------------------------------------------------------
