void AdToBs(int ad_year, int ad_month, int ad_day){
        int bs_year = REF_BS_YEAR + (ad_year - REF_AD_YEAR);
        int bs_month = REF_BS_MONTH;
        int bs_day = REF_AD_DAY;

        for(int i=REF_AD_MONTH; i<ad_month; ++i){
            bs_day = bs_day + 30;
            if(bs_day > bs_month_days[]){

            }
        }
    }