// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
        int dl =0;

   if(a == b){
    return a;
   }
   else if (a > b) {
    if (0 == (a & b)){
        return b;
    }
    else {
        dl = b;
        for (; 0<dl; dl--){
            if (0 == (b % dl) && 0 == (a % dl)){
                return dl;
                break;
            }
        }
    }
   }
   else {
    if (0 == (b & a)){
        return a;
    }
    else {
        dl = a;
        for (; 0<dl; dl--){
            if (0 == (a % dl) && 0 == (b % dl)){
                return dl;
                break;
            }
        }
    }
   }
   if ( 0 == dl){
    return 1;
   }
}
