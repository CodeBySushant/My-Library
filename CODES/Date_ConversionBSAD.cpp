// Date Conversion from AD to BS and BS to AD
#include<iostream>
using namespace std;

    const int REF_BS_YEAR = 2000;
    const int REF_AD_YEAR = 1943;
    const int REF_BS_MONTH = 1;
    const int REF_AD_MONTH = 4;
    const int REF_BS_DAY = 1;
    const int REF_AD_DAY = 14;
    
    const int bs_month_days[] = {30, 32, 31, 32, 32, 30, 30, 30, 29, 30, 29, 30}; //Declared Days of Every Month in Year using Arrays

    // Function To Convert BS To AD
    void bsToAd(int bs_year, int bs_month, int bs_day){
        int ad_year = REF_AD_YEAR + (bs_year - REF_BS_YEAR);
        int ad_month = REF_AD_MONTH;
        int ad_day = REF_AD_DAY;

        for(int i=REF_BS_MONTH; i<bs_month; ++i){
            ad_day = ad_day + bs_month_days[i-1];
            if(ad_day>30){
                ad_month++;
                ad_day = ad_day - 30;
            }
        }
        ad_day = ad_day + (bs_day - REF_BS_DAY);
        while(ad_day > 30){
            ad_month++;
            ad_day = ad_day - 30;
        }
        while(ad_month > 12){
            ad_year++;
            ad_month = ad_month - 12;
        }
        cout<<"Equivalent AD Date: "<<ad_year<<"-"<<ad_month<<"-"<<ad_day<<endl;
    }

    // Function To Convert AD To BS
    void AdToBs(int ad_year, int ad_month, int ad_day){
        int bs_year = REF_BS_YEAR + (ad_year - REF_AD_YEAR);
        int bs_month = REF_BS_MONTH;
        int bs_day = REF_AD_DAY;

        for(int i=REF_AD_MONTH; i<ad_month; ++i){
            bs_day = bs_day + 30;
            if(bs_day > bs_month_days[bs_month - 1]){
                bs_month++;
                bs_day = bs_day - bs_month_days[bs_month - 2];

            }
        }
        bs_day = bs_day + (ad_day - REF_AD_DAY);
        while(bs_day > bs_month_days[bs_month - 1]){
            bs_month++;
            bs_day = bs_day - bs_month_days[bs_month - 1];
        }
        while(bs_month > 12){
            bs_year++;
            bs_month = bs_month - 12;
        }
        cout<<"Equivalent BS Date: "<<bs_year<<"-"<<bs_month<<"-"<<bs_day<<endl;
    }

    int main(){
        int num;
        cout<<"Choose an option: "<<endl;
        cout<<"1) BS To AD"<<endl;
        cout<<"2) AD To BS"<<endl;
        cin>>num;
        int bs_year, bs_month, bs_day, ad_year, ad_month, ad_day;

        switch(num){
            case 1:
            cout<<"Enter BS date (year:month:day): ";
            cin>>bs_year>>bs_month>>bs_day;
            bsToAd(bs_year, bs_month, bs_day);
            break;

            case 2:
            cout<<"Enter AD date (year:month:day): ";
            cin>>ad_year>>ad_month>>ad_day;
            AdToBs(ad_year, ad_month, ad_day);
            break;

            default:
            cout<<"Invalid choice";
            break;
        }
        return 0;
    }

    