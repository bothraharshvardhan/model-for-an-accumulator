#include <iostream>
#include <fstream>
using namespace std;

float uli(float x)
{   
    float a[7][7],sx2,sx,sy,sxy,n;
    sx2=sx=sy=sxy=0;
    a[0][0] = 700, a[0][1] = 696.33, a[0][2] = 2570.9, a[0][3] = 0.0011, a[0][4] = 0.273, a[0][5] = 697.1, a[0][6] = 2762;
    a[1][0] = 750, a[1][1] = 708.475, a[1][2] = 2573.75, a[1][3] = 0.0011, a[1][4] = 0.255, a[1][5] = 709.3, a[1][6] = 2765;
    a[2][0] = 800, a[2][1] = 720.02, a[2][2] = 2576, a[2][3] = 0.0011, a[2][4] = 0.24, a[2][5] = 720.9, a[2][6] = 2768;
    a[3][0] = 850, a[3][1] = 731.065, a[3][2] = 2575.35, a[3][3] = 0.0011, a[3][4] = 0.229, a[3][5] = 732, a[3][6] = 2770;
    a[4][0] = 900, a[4][1] = 741.61, a[4][2] = 2578.5, a[4][3] = 0.0011, a[4][4] = 0.215, a[4][5] = 742.6, a[4][6] = 2772;
    a[5][0] = 950, a[5][1] = 751.755, a[5][2] = 2580.2, a[5][3] = 0.0011, a[5][4] = 0.204, a[5][5] = 752.8, a[5][6] = 2774;
    a[6][0] = 1000, a[6][1] = 761.5, a[6][2] = 2582, a[6][3] = 0.0011, a[6][4] = 0.194, a[6][5] = 762.6, a[6][6] = 2776;
    for(int i=0;i<7;i++)
    {
        sx = sx + a[i][0];
        sy = sy + a[i][1];
        sxy = sxy + (a[i][0]*a[i][1]);
        sx2 = sx2 + (a[i][0]*a[i][0]);
    }
    n=7;
    float m = ( ( (n*sxy) - (sx*sy) )/( (n*sx2) - (sx*sx) ) )   ;
    float c = (sy - (m*sx))/n;
    float t = x*m + c;
    return t;
    
}

float uvi(float x)
{   
    float a[7][7],sx2,sx,sy,sxy,n;
    sx2=sx=sy=sxy=0;
    a[0][0] = 700, a[0][1] = 696.33, a[0][2] = 2570.9, a[0][3] = 0.0011, a[0][4] = 0.273, a[0][5] = 697.1, a[0][6] = 2762;
    a[1][0] = 750, a[1][1] = 708.475, a[1][2] = 2573.75, a[1][3] = 0.0011, a[1][4] = 0.255, a[1][5] = 709.3, a[1][6] = 2765;
    a[2][0] = 800, a[2][1] = 720.02, a[2][2] = 2576, a[2][3] = 0.0011, a[2][4] = 0.24, a[2][5] = 720.9, a[2][6] = 2768;
    a[3][0] = 850, a[3][1] = 731.065, a[3][2] = 2575.35, a[3][3] = 0.0011, a[3][4] = 0.229, a[3][5] = 732, a[3][6] = 2770;
    a[4][0] = 900, a[4][1] = 741.61, a[4][2] = 2578.5, a[4][3] = 0.0011, a[4][4] = 0.215, a[4][5] = 742.6, a[4][6] = 2772;
    a[5][0] = 950, a[5][1] = 751.755, a[5][2] = 2580.2, a[5][3] = 0.0011, a[5][4] = 0.204, a[5][5] = 752.8, a[5][6] = 2774;
    a[6][0] = 1000, a[6][1] = 761.5, a[6][2] = 2582, a[6][3] = 0.0011, a[6][4] = 0.194, a[6][5] = 762.6, a[6][6] = 2776;
    for(int i=0;i<7;i++)
    {
        sx = sx + a[i][0];
        sy = sy + a[i][2];
        sxy = sxy + (a[i][0]*a[i][2]);
        sx2 = sx2 + (a[i][0]*a[i][0]);
    }
    n=7;
    float m = ( ( (n*sxy) - (sx*sy) )/( (n*sx2) - (sx*sx) ) )   ;
    float c = (sy - (m*sx))/n;
    float t = x*m + c;
    return t;
    
}

float vli(float x)
{   
    float a[7][7],sx2,sx,sy,sxy,n;
    sx2=sx=sy=sxy=0;
    a[0][0] = 700, a[0][1] = 696.33, a[0][2] = 2570.9, a[0][3] = 0.0011, a[0][4] = 0.273, a[0][5] = 697.1, a[0][6] = 2762;
    a[1][0] = 750, a[1][1] = 708.475, a[1][2] = 2573.75, a[1][3] = 0.0011, a[1][4] = 0.255, a[1][5] = 709.3, a[1][6] = 2765;
    a[2][0] = 800, a[2][1] = 720.02, a[2][2] = 2576, a[2][3] = 0.0011, a[2][4] = 0.24, a[2][5] = 720.9, a[2][6] = 2768;
    a[3][0] = 850, a[3][1] = 731.065, a[3][2] = 2575.35, a[3][3] = 0.0011, a[3][4] = 0.229, a[3][5] = 732, a[3][6] = 2770;
    a[4][0] = 900, a[4][1] = 741.61, a[4][2] = 2578.5, a[4][3] = 0.0011, a[4][4] = 0.215, a[4][5] = 742.6, a[4][6] = 2772;
    a[5][0] = 950, a[5][1] = 751.755, a[5][2] = 2580.2, a[5][3] = 0.0011, a[5][4] = 0.204, a[5][5] = 752.8, a[5][6] = 2774;
    a[6][0] = 1000, a[6][1] = 761.5, a[6][2] = 2582, a[6][3] = 0.0011, a[6][4] = 0.194, a[6][5] = 762.6, a[6][6] = 2776;
    for(int i=0;i<7;i++)
    {
        sx = sx + a[i][0];
        sy = sy + a[i][3];
        sxy = sxy + (a[i][0]*a[i][3]);
        sx2 = sx2 + (a[i][0]*a[i][0]);
    }
    n=7;
    float m = ( ( (n*sxy) - (sx*sy) )/( (n*sx2) - (sx*sx) ) )   ;
    float c = (sy - (m*sx))/n;
    float t = x*m + c;
    return t;
    
}

float vvi(float x)
{   
    float a[7][7],sx2,sx,sy,sxy,n;
    sx2=sx=sy=sxy=0;
    a[0][0] = 700, a[0][1] = 696.33, a[0][2] = 2570.9, a[0][3] = 0.0011, a[0][4] = 0.273, a[0][5] = 697.1, a[0][6] = 2762;
    a[1][0] = 750, a[1][1] = 708.475, a[1][2] = 2573.75, a[1][3] = 0.0011, a[1][4] = 0.255, a[1][5] = 709.3, a[1][6] = 2765;
    a[2][0] = 800, a[2][1] = 720.02, a[2][2] = 2576, a[2][3] = 0.0011, a[2][4] = 0.24, a[2][5] = 720.9, a[2][6] = 2768;
    a[3][0] = 850, a[3][1] = 731.065, a[3][2] = 2575.35, a[3][3] = 0.0011, a[3][4] = 0.229, a[3][5] = 732, a[3][6] = 2770;
    a[4][0] = 900, a[4][1] = 741.61, a[4][2] = 2578.5, a[4][3] = 0.0011, a[4][4] = 0.215, a[4][5] = 742.6, a[4][6] = 2772;
    a[5][0] = 950, a[5][1] = 751.755, a[5][2] = 2580.2, a[5][3] = 0.0011, a[5][4] = 0.204, a[5][5] = 752.8, a[5][6] = 2774;
    a[6][0] = 1000, a[6][1] = 761.5, a[6][2] = 2582, a[6][3] = 0.0011, a[6][4] = 0.194, a[6][5] = 762.6, a[6][6] = 2776;
    for(int i=0;i<7;i++)
    {
        sx = sx + a[i][0];
        sy = sy + a[i][4];
        sxy = sxy + (a[i][0]*a[i][4]);
        sx2 = sx2 + (a[i][0]*a[i][0]);
    }
    n=7;
    float m = ( ( (n*sxy) - (sx*sy) )/( (n*sx2) - (sx*sx) ) )   ;
    float c = (sy - (m*sx))/n;
    float t = x*m + c;
    return t;
    
}




int main()
{
    int i, m = -1, n = -1;
    float a[7][7], x1 = 0, l = 0, h = 2, x, P, Pl = 0, Ph = 0, p1, p2, pf, pi, m1, m2, ai, af, t, h1, h2, ulsatf, uvsatf, ulsati, uvsati, mi, mf, ui, uf, ul, uv, vlsati, vvsati, vlsatf, vvsatf, vacc = 0;
    float ulsatfu, uvsatfu, ulsatfv, uvsatfv, vlsatfu, vvsatfu, vlsatfv, vvsatfv,x3,x4,vacc1;

    ifstream var_in("variable_parameter.txt");

    //variable parameters from the file

    cout << "P1(in Kpa between 800kPa and 1000kPa) = ";
    var_in >> p1; cout << p1 << endl;
    cout << "P2(in Kpa between 700kPa and 750kPa) = ";
    var_in >> p2; cout << p2 << endl;
    cout << "m1(kg/hr) = ";
    var_in >> m1; cout << m1 << endl;
    cout << "m2(kg/hr) = ";
    var_in >> m2; cout << m2 << endl;
    cout << "t(hrs) = ";
    var_in >> t; cout << t << endl;
    cout << "Pi(kPa) = ";
    var_in >> pi; cout << pi << endl;
    cout << "alpha_i = ";
    var_in >> ai; cout << ai << endl;
    cout << "alpha_f = ";
    var_in >> af; cout << af << endl;
    cout << "H1 = ";
    var_in >> h1; cout << h1 << endl;
    cout << "H2 = ";
    var_in >> h2; cout << h2 << endl;

    a[0][0] = 700, a[0][1] = 696.33, a[0][2] = 2570.9, a[0][3] = 0.0011, a[0][4] = 0.273, a[0][5] = 697.1, a[0][6] = 2762;
    a[1][0] = 750, a[1][1] = 708.475, a[1][2] = 2573.75, a[1][3] = 0.0011, a[1][4] = 0.255, a[1][5] = 709.3, a[1][6] = 2765;
    a[2][0] = 800, a[2][1] = 720.02, a[2][2] = 2576, a[2][3] = 0.0011, a[2][4] = 0.24, a[2][5] = 720.9, a[2][6] = 2768;
    a[3][0] = 850, a[3][1] = 731.065, a[3][2] = 2575.35, a[3][3] = 0.0011, a[3][4] = 0.229, a[3][5] = 732, a[3][6] = 2770;
    a[4][0] = 900, a[4][1] = 741.61, a[4][2] = 2578.5, a[4][3] = 0.0011, a[4][4] = 0.215, a[4][5] = 742.6, a[4][6] = 2772;
    a[5][0] = 950, a[5][1] = 751.755, a[5][2] = 2580.2, a[5][3] = 0.0011, a[5][4] = 0.204, a[5][5] = 752.8, a[5][6] = 2774;
    a[6][0] = 1000, a[6][1] = 761.5, a[6][2] = 2582, a[6][3] = 0.0011, a[6][4] = 0.194, a[6][5] = 762.6, a[6][6] = 2776;
    for (i = 0; i <= 6; i++)
    {
        ulsati = a[2][1];
        uvsati = a[2][2];
        uvsatf = a[i][2];
        ulsatf = a[i][1];
        vlsati = a[2][3];
        vvsati = a[2][4];
        vlsatf = a[i][3];
        vvsatf = a[i][4];
        P = a[i][0];
        x = (((m1 - m2)) / ((af / vlsatf) + ((1 - af) / vvsatf) - ((ai / vlsati) + ((1 - ai) / vvsati)))) / ((m1 * h1 - m2 * h2) / ((af * ulsatf / vlsatf) + ((1 - af) * uvsatf / vvsatf) - ((ai * ulsati / vlsati) + ((1 - ai) * uvsati / vvsati))));
        cout << x << endl;

        if (x<1 and x>l)
        {
            l = x;
            Pl = P;
            m = i;
        }
        else
        {
            if (x > 1 and x < h)
            {
                h = x;
                Ph = P;
                n = i;
            }
        }
        if (x == 1)
        {
            return x,i;
        }
        if (i == 0)
        {
            x3 = x;
        }
        if (i == 6)
        {
            x4 = x;
        }
    }
    cout << m << endl << n << endl;

    if (m == -1 or n == -1)
    {
        cout << " No possible Solution exist in the Steam Table given.";
        if (x3 < x4)
        {
            cout << " Solution lies on pressure greater than 1000 KPa ";
        }
        else
        { 
            cout << " Solution lies on pressure lesser than 700 KPa ";
        }
        return n;
    }
    
    ulsati = a[2][1];
    uvsati = a[2][2];
    uvsatfu = a[m][2];
    ulsatfu = a[m][1];
    uvsatfv = a[n][2];
    ulsatfv = a[n][1];
    vlsati = a[2][3];
    vvsati = a[2][4];
    vlsatfu = a[m][3];
    vvsatfu = a[m][4];
    vlsatfv = a[n][3];
    vvsatfv = a[n][4];
    Pl = a[m][0];
    Ph = a[n][0];
    x1 = 0;
    P = Pl;
    for (i = 1; i <= 500; i++)
    {
        P = P + 0.1;
        ulsati = a[2][1];
        uvsati = a[2][2];
        uvsatf = ((uvsatfv - uvsatfu) / (Ph - Pl) )*(P - Pl)  +  uvsatfu;
        ulsatf = ((ulsatfv - ulsatfu) / (Ph - Pl) )*(P - Pl)  +  ulsatfu;
        vlsati = a[2][3];
        vvsati = a[2][4];
        vlsatf = ((vlsatfv - vlsatfu) / (Ph - Pl) )*(P - Pl)  +  vlsatfu;
        vvsatf = ((vvsatfv - vvsatfu) / (Ph - Pl) )*(P - Pl)  +  vvsatfu;
        
        x = (((m1 - m2)) / ((af / vlsatf) + ((1 - af) / vvsatf) - ((ai / vlsati) + ((1 - ai) / vvsati)))) / ((m1 * h1 - m2 * h2) / ((af * ulsatf / vlsatf) + ((1 - af) * uvsatf / vvsatf) - ((ai * ulsati / vlsati) + ((1 - ai) * uvsati / vvsati))));
        
        vacc = ((m1 * h1 - m2 * h2) / ((af * ulsatf / vlsatf) + ((1 - af) * uvsatf / vvsatf) - ((ai * ulsati / vlsati) + ((1 - ai) * uvsati / vvsati)))) * t;
        if (x == 1)
        {

            return x;
        }
        if ((x - 1) < (0.001))
        {
            if ((x - 1) > (-0.001))
            {
                break;
            }
        }
        x1 = x;
    }
    cout << "Pf = " << P << "   " << "Vacc = " << vacc<<"    Using linear Interpolation"<<endl<<endl;
    
    
    
    ulsati = a[2][1];
    uvsati = a[2][2];
    uvsatfu = a[m][2];
    ulsatfu = a[m][1];
    uvsatfv = a[n][2];
    ulsatfv = a[n][1];
    vlsati = a[2][3];
    vvsati = a[2][4];
    vlsatfu = a[m][3];
    vvsatfu = a[m][4];
    vlsatfv = a[n][3];
    vvsatfv = a[n][4];
    P = a[m][0];
    
    for (i = 1; i <= 500; i++)
    {
        ulsati = a[2][1];
        uvsati = a[2][2];
        uvsatf = uvi(P);
        ulsatf = uli(P);
        vlsati = a[2][3];
        vvsati = a[2][4];
        vlsatf = vli(P);
        vvsatf = vvi(P);
        x = (((m1 - m2)) / ((af / vlsatf) + ((1 - af) / vvsatf) - ((ai / vlsati) + ((1 - ai) / vvsati)))) / ((m1 * h1 - m2 * h2) / ((af * ulsatf / vlsatf) + ((1 - af) * uvsatf / vvsatf) - ((ai * ulsati / vlsati) + ((1 - ai) * uvsati / vvsati))));
        vacc = ((m1 * h1 - m2 * h2) / ((af * ulsatf / vlsatf) + ((1 - af) * uvsatf / vvsatf) - ((ai * ulsati / vlsati) + ((1 - ai) * uvsati / vvsati)))) * t;
        
        if (abs(x - 1) < 0.001)
        {
            Pl = P;
            vacc1 = vacc;
            break;
        }
        else
        {
            if(abs(x - 1)<0.01)
            {
                Pl = P;
                vacc1 = vacc;
                break;
            }    
            else
            {
                if ( abs(x - 1)< 0.1)
                {
                    Pl = P;
                    vacc1 = vacc;
                }
            }
        }
        P = P + 0.1;
    }    
    cout << "Pf = " << Pl << "   " << "Vacc = " << vacc1<<"     Using least squares Regression";
    cout<<endl<<"It's better to use linear interpolation";
}
