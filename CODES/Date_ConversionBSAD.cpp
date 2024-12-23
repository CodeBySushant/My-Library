// Date Conversion from AD to BS and BS to AD
#include<iostream>
using namespace std;
int main(){
    const int REF_BS_YEAR = 2000;
    const int REF_AD_YEAR = 1943;
    const int REF_BS_MONTH = 1;
    const int REF_AD_MONTH = 4;
    const int REF_BS_DAY = 1;
    const int REF_AD_DAY = 14;
    
    const int bs_month_days[] = {30, 32, 31, 32, 32, 30, 30, 30, 29, 30, 29, 30}; //Declared Days of Every Month in Year using Arrays

    void bsToAd(int bs_year, int bs_month, int bs_day){
        int ad_year = REF_AD_YEAR + (bs_year - REF_BS_YEAR);
    }

    return 0;
}