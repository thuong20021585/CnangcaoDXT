#include <stdio.h>
int Nam(int year){
    int test;
        if(year>=0&&year<=2022){
             test= 0;
        }else{
            test = 1;
        }
        return test;
}
int Namnhuan(int year){
    if((year%4 == 0 && year%100 ==0) || (year%400==0))
    {
        return 0;
    }else {
        return 1;
    }
}
int Kiemtrangaythang(int ngay , int thang,int year){
    int kiem ;

    if(thang >=0 && thang<=12){

    switch(thang) {

    case 1: case 3: case 5: case 7: case 8: case 10:  case 12:

                if( ngay>0 && ngay<=31){

                kiem=0;

                break;
                }
              else{
                kiem =1;
                break;

                }

    case 4: case 6: case 9: case 11:

                if( ngay<=30 && ngay>0){

                kiem =0;

                break;

                }
                else{
                kiem = 1;
                break;

                }

    case 2:

                if( ngay <=28 && ngay > 0 && (Namnhuan(year) == 1)){

                kiem = 0;
                break;

                }

                else if ( ngay <=29 && ngay >0 && (Namnhuan(year) == 0))

               { kiem = 0 ;

                break;

                }
                else{
                    kiem = 1;
                    break;
                }

    default:

    break;
    }
    }
    else{
        kiem = 1;
    }
    return kiem ;
 }

int main(){
    int a,b,c;
    do {
    printf("Nhap ngay sinh cua ban :");
    scanf("%d",&a);
    printf("Nhap thang sinh cua ban :");
    scanf("%d",&b);
    printf("Nhap nam sinh cua ban :");
    scanf("%d",&c);
    }while(Nam(c)== 1 || Kiemtrangaythang(a,b,c) == 1 );
    int d,m;
    printf("Hom nay la ngay : ");
    scanf("%d",&d);
    printf("Thang nay la thang : ");
    scanf("%d",&m);
    if((b>m)||(a==d&&b==m)){
        printf("Tuoi cua ban la: %d",2023-c);
    }else{
        printf("Tuoi cua ban la : %d",2022-c);
    }
    return 0;
}
