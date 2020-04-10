
int digitsProduct(int product) {
   if(product == 0) return 10;
   else if(product == 1) return 1;
   else {
        string str;
        for(int i = 9; i > 1; i--) {
            while(product%i == 0) {
                product /= i;
                str = char(i + '0') + str;
            }
        }
        if(product == 1) return stoi(str);
        else return -1;
    }
   
}
