int main(){
    int *p = new int[10];
    p[9] = 1; //Correct this to size - 1 = 10 - 1 = 9

    delete p; //deallocate memory from the 'new' above
    return 0;
}
