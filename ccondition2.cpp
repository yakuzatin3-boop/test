int nuse, ouse, total;
double pay;


total = ouse - nuse;

if(total >= 1 && total <= 10){
    pay = total * 350;
}else if(total > 10 && total <=20){
    pay = 10 * 350 + (total-10) * 450;
}else if(total > 20 && total <=30){
    pay = 10 * 350 + 10 * 450 + (total - 20) *550;
}



28;
1 - 10 = 350
11 - 20 = 450 ;


pay = (10 * 350) + (10 * 450) + (total - 20 * 550) + (total - 30);