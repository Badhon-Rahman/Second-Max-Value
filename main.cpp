#include <iostream>
#include <algorithm>

using namespace std;

int SecondMax(int arr[], int n, int counMax){
     int secondMax = arr[0];
     int j = 0;
     int tempArr[n - 1];

      for(int i = 1; i < n - 1; i++){
        secondMax = max(secondMax, arr[i]);
      }
      for(int i = 0; i < n - 1; i++){
       if(arr[i] != secondMax){
         tempArr[j] = arr[i];
         j++;
       }
      }
      if(counMax == 2){
        cout << "Second max value: " << secondMax << endl;
        return 0;
      }
      else{
        return SecondMax(tempArr, n - 1, counMax + 1);
      }
}

int main()
{
    int n;

    cout << "Enter the size of the array:";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements:";
    for(int i = 0; i < n - 1; i++){
        cin >> arr[i];
    }
    SecondMax(arr, n, 1);
    return 0;
}
