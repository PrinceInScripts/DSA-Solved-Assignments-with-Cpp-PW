/*
Q8: Find the error.
double getAverage(int arr[], int size);
int main () {
int balance[5] = {1000, 2, 3, 17, 50};
double avg;
avg = getAverage( balance[0], 5 ) ;
cout << "Average value is: " << avg << endl;
return 0;
}
*/

/*
avg = getAverage( balance[0], 5 ) ; 
error in these file because in getAverage function takes a array on argument and their you send only a element
*/