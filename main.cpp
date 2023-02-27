#include <windows.h>
#include <commctrl.h>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include "resource.h"

HINSTANCE hInst;
HWND h_peso, h_resul, h_carc, h_visc, h_musc, h_totd, h_check1, h_check2, h_check3, h_check4, h_check5, h_check6;

BOOL CALLBACK DlgMain(HWND hwndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch(uMsg)
    {
    case WM_INITDIALOG:
    {
        h_peso = GetDlgItem(hwndDlg, PESO);
        h_resul = GetDlgItem(hwndDlg, RESUL);
        h_carc = GetDlgItem(hwndDlg, CARC);
        h_visc = GetDlgItem(hwndDlg, VISC);
        h_musc = GetDlgItem(hwndDlg, MUSC);
        h_totd = GetDlgItem(hwndDlg, TOTD);
        h_check1 = GetDlgItem(hwndDlg, CHECK1);
        h_check2 = GetDlgItem(hwndDlg, CHECK2);
        h_check3 = GetDlgItem(hwndDlg, CHECK3);
        h_check4 = GetDlgItem(hwndDlg, CHECK4);
        h_check5 = GetDlgItem(hwndDlg, CHECK5);
        h_check6 = GetDlgItem(hwndDlg, CHECK6);
    }
    return TRUE;

    case WM_CLOSE:
    {
        EndDialog(hwndDlg, 0);
    }
    return TRUE;

    case WM_COMMAND:
    {
        switch(LOWORD(wParam))
        {

            case CALC:
            char c_peso[10];

            GetWindowText(h_peso, c_peso, 10);

            int checked1 = SendMessage(h_check1, BM_GETCHECK, 0, 0);
            int checked2 = SendMessage(h_check2, BM_GETCHECK, 0, 0);
            int checked3 = SendMessage(h_check3, BM_GETCHECK, 0, 0);
            int checked4 = SendMessage(h_check4, BM_GETCHECK, 0, 0);
            int checked5 = SendMessage(h_check5, BM_GETCHECK, 0, 0);
            int checked6 = SendMessage(h_check6, BM_GETCHECK, 0, 0);

            if(checked1 == BST_CHECKED){
                //(box1*3)/100
                float f_peso, f_resul, f_carc, f_visc, f_musc, f_totd;

                f_peso = atof(c_peso);
                f_resul = ((f_peso*3)/100)*1000;
                f_carc = f_resul*0.5;
                f_visc = f_resul*0.4;
                f_musc = f_resul*0.1;
                f_totd = f_carc+f_visc+f_musc;

                char c_resultado[15], c_carc[15], c_visc[15], c_musc[15], c_totd[15];
                sprintf(c_resultado, "%.2f", f_resul);
                sprintf(c_carc, "%.2f", f_carc);
                sprintf(c_visc, "%.2f", f_visc);
                sprintf(c_musc, "%.2f", f_musc);
                sprintf(c_totd, "%.2f", f_totd);

                SetWindowText(h_resul, c_resultado);
                SetWindowText(h_carc, c_carc);
                SetWindowText(h_visc, c_visc);
                SetWindowText(h_musc, c_musc);
                SetWindowText(h_totd, c_totd);

            }else if(checked2 == BST_CHECKED){

                //(box1*2)/100
                float f_peso, f_resul, f_carc, f_visc, f_musc, f_totd;

                f_peso = atof(c_peso);
                f_resul = ((f_peso*2)/100)*1000;
                f_carc = f_resul*0.5;
                f_visc = f_resul*0.4;
                f_musc = f_resul*0.1;
                f_totd = f_carc+f_visc+f_musc;

                char c_resultado[15], c_carc[15], c_visc[15], c_musc[15], c_totd[15];
                sprintf(c_resultado, "%.2f", f_resul);
                sprintf(c_carc, "%.2f", f_carc);
                sprintf(c_visc, "%.2f", f_visc);
                sprintf(c_musc, "%.2f", f_musc);
                sprintf(c_totd, "%.2f", f_totd);

                SetWindowText(h_resul, c_resultado);
                SetWindowText(h_carc, c_carc);
                SetWindowText(h_visc, c_visc);
                SetWindowText(h_musc, c_musc);
                SetWindowText(h_totd, c_totd);

            }else if(checked3 == BST_CHECKED){

                //(box1*2.5)/100
                float f_peso, f_resul, f_carc, f_visc, f_musc, f_totd;

                f_peso = atof(c_peso);
                f_resul = ((f_peso*2.5)/100)*1000;
                f_carc = f_resul*0.5;
                f_visc = f_resul*0.4;
                f_musc = f_resul*0.1;
                f_totd = f_carc+f_visc+f_musc;

                char c_resultado[15], c_carc[15], c_visc[15], c_musc[15], c_totd[15];
                sprintf(c_resultado, "%.2f", f_resul);
                sprintf(c_carc, "%.2f", f_carc);
                sprintf(c_visc, "%.2f", f_visc);
                sprintf(c_musc, "%.2f", f_musc);
                sprintf(c_totd, "%.2f", f_totd);

                SetWindowText(h_resul, c_resultado);
                SetWindowText(h_carc, c_carc);
                SetWindowText(h_visc, c_visc);
                SetWindowText(h_musc, c_musc);
                SetWindowText(h_totd, c_totd);

            }else if(checked4 == BST_CHECKED){

                //(box1*1.5)/100
                float f_peso, f_resul, f_carc, f_visc, f_musc, f_totd;

                f_peso = atof(c_peso);
                f_resul = ((f_peso*1.5)/100)*1000;
                f_carc = f_resul*0.5;
                f_visc = f_resul*0.4;
                f_musc = f_resul*0.1;
                f_totd = f_carc+f_visc+f_musc;

                char c_resultado[15], c_carc[15], c_visc[15], c_musc[15], c_totd[15];
                sprintf(c_resultado, "%.2f", f_resul);
                sprintf(c_carc, "%.2f", f_carc);
                sprintf(c_visc, "%.2f", f_visc);
                sprintf(c_musc, "%.2f", f_musc);
                sprintf(c_totd, "%.2f", f_totd);

                SetWindowText(h_resul, c_resultado);
                SetWindowText(h_carc, c_carc);
                SetWindowText(h_visc, c_visc);
                SetWindowText(h_musc, c_musc);
                SetWindowText(h_totd, c_totd);

            }else if(checked5 == BST_CHECKED){

                //(box1*2)/100
                float f_peso, f_resul, f_carc, f_visc, f_musc, f_totd;

                f_peso = atof(c_peso);
                f_resul = ((f_peso*2)/100)*1000;
                f_carc = f_resul*0.5;
                f_visc = f_resul*0.4;
                f_musc = f_resul*0.1;
                f_totd = f_carc+f_visc+f_musc;

                char c_resultado[15], c_carc[15], c_visc[15], c_musc[15], c_totd[15];
                sprintf(c_resultado, "%.2f", f_resul);
                sprintf(c_carc, "%.2f", f_carc);
                sprintf(c_visc, "%.2f", f_visc);
                sprintf(c_musc, "%.2f", f_musc);
                sprintf(c_totd, "%.2f", f_totd);

                SetWindowText(h_resul, c_resultado);
                SetWindowText(h_carc, c_carc);
                SetWindowText(h_visc, c_visc);
                SetWindowText(h_musc, c_musc);
                SetWindowText(h_totd, c_totd);

            }else if(checked6 == BST_CHECKED){

                //(box1*1.5)/100
                float f_peso, f_resul, f_carc, f_visc, f_musc, f_totd;

                f_peso = atof(c_peso);
                f_resul = ((f_peso*1.5)/100)*1000;
                f_carc = f_resul*0.5;
                f_visc = f_resul*0.4;
                f_musc = f_resul*0.1;
                f_totd = f_carc+f_visc+f_musc;

                char c_resultado[15], c_carc[15], c_visc[15], c_musc[15], c_totd[15];
                sprintf(c_resultado, "%.2f", f_resul);
                sprintf(c_carc, "%.2f", f_carc);
                sprintf(c_visc, "%.2f", f_visc);
                sprintf(c_musc, "%.2f", f_musc);
                sprintf(c_totd, "%.2f", f_totd);

                SetWindowText(h_resul, c_resultado);
                SetWindowText(h_carc, c_carc);
                SetWindowText(h_visc, c_visc);
                SetWindowText(h_musc, c_musc);
                SetWindowText(h_totd, c_totd);

            }
            break;
        }
    }
    return TRUE;
    }
    return FALSE;
}


int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
    ShowWindow(GetConsoleWindow(), SW_HIDE);
    hInst=hInstance;
    InitCommonControls();
    return DialogBox(hInst, MAKEINTRESOURCE(DLG_MAIN), NULL, (DLGPROC)DlgMain);
}
