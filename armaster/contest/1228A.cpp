#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l, r;
    cin>>l>>r;
    int ck=1; ///ck=1 mane akhon porjonto kono number pai nai jetar digit gula alada, ck=0 dibo jodi number paia jai
    ///ar ck=3 dibo jodi kono digit check korte gea dekhi je aita hobe na
    for(int i=l; i<=r; i++){
        int arr[10]={0};
        ///array er sob value 0 kore dichi
        int k=i;
        ck=1; /// number akhono pai nai, tobe check o kori nai, hoteo pare aita
        ///i ke modify korle loop thik moto cholbe na, tai i er value k te nea nichi. k nea e kaj korbo.
        while(k) ///jotokkhon porjonto k er maan 0 na hobe totokkhon while loop cholbe
        {
            int digit=k%10;
            //cout<<i<<" er digit: "<<digit<<endl;
            ///last digit ta nilam
            arr[digit]++;
            ///digit count kortechi, same digit ak er besi hole arr[digit] er value 1 er besi hoia jabe
            if(arr[digit]>1) ///ak er besi kono digit paile
            {
                ck=3; /// mane ai number ta hobe na
                break; ///while loop ar chalaia ar lav ki, ak er besi digit to paia gechi e. so ai number ta hobe na
            }
            k=k/10; /// last er digit ta baad dilam, seta to check kora hoia geche
            ///jemon, 123%10=3, 3 check kore felchi, 123/10=12, akhon 12 check korbo
        }
        if(ck==1) ///ck=3 hoy nai, mane while loop e count kore kono digit 1 er besi pai nai. mane aitai sei number
        {
            cout<<i<<endl; /// i number ta ke e to check korlam hobe kina
            ck=0; ///number paia gechi....
            break; /// number to paia gechi, ar for loop chalaia ki kormu?
        }
    }
    if(ck) /// ck er value jodi 0 na hoy
    {
        ///ck=0 na hole to number ta pai nai, tai na??
        cout<<"-1"<<endl;
    }
 return 0;
}