/* Declarations of functions implementing operations bis and bic */
int bis(int x, int m); //create result z by setting bit in x to 1 where bit in m is 1
int bic(int x, int m); //create result z by setting bit in x to 0 where bit in m is 1

/* Compute x | y using only calls to bis and bic */
int bool_or(int x, int y) {
    int result = bis(x, y);
    return result;
}

/* Compute x ^ y using only calls to bis and bic */
int bool_xor(int x, int y) {
    int result = bis(bic(x,y, bis(y,x));           ;
    return result;
}

