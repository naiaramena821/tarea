#include <iostream>

using namespace std;
//1

void imprimirDigitos(int x)
{
    cout << x/10000 << '\t';
    x%=10000;
    cout << x/1000 << '\t';
    x%=1000;
    cout << x/100 << '\t';
    x%=100;
    cout << x/10 << '\t';
    x%=10;
    cout << x << '\t';
}

int main()
{
    int x;
    cin >> x;
    imprimirDigitos(x);

    return 0;
}

//2
 int contDigitos(int x)
 {
     int y = 0;
     while (x!=0){
        x/=10;
        y++;
     }
     return y;
 }
 int main()
 {
     int x;
     cout << "numero: ";
     cin >> x;
     cout << contDigitos(x);
 }

//3
bool palindromo(int x)
{
    int a,b,c,d,e;
    a=x/10000;
    x%=10000;
    b=x/1000;
    x%=1000;
    c=x/100;
    x%=100;
    d=x/10;
    x%=10;
    e=x;
    if(a==e && b==d)
        return true;
    else
        return false;
}
int main()
{
    int x;
    cout << "numero de 5 digitos: ";
    cin >> x;
    cout << palindromo(x);
}

//4
int fibo(int n)
{
    int x=1,y=0,z;
    for (int i=1;i<=n;i++){
        z=x+y;
        cout << z << endl;
        x=y;
        y=z;
    }
}
int main()
{
    int n;
    cout << "ingrese cantidad de numeros deseados: ";
    cin >> n;
    cout << fibo(n);
    return 0;
}

//5
bool caract(char a)
{
    int n = static_cast < int > (a);
    if (47 < n and n < 58){
        return true;
    }
    else {
        return false;
    }
}
int main()
{
    char a;
    cout << "caracter: ";
    cin >> a;
    cout << caract(a)<< endl;
}

//6
bool letra(char x)
{
    int y;
    y=static_cast <int>(x);
    if (y>=65 && y<=90){
        cout << static_cast < char > (x-32);
    }
    else if (y>=97 && y<=122){
        cout << static_cast < char > (x-32);
    }
    else
        return false;
}
int main ()
{
    char x;
    cin >> x;
    cout << letra(x) << endl;
    return 0;
}
