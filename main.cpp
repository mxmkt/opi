#include <iostream>
using namespace std;
 int main()
 { const int n = 15; int a[n], i, countOfNegatives = 0, sumOfElements = 0, maxOfNegativeElements, firstEvenNumber = -1, lastEvenNumber = -1, minOfElements, countOfPositive = 0, sumOfPositive = 0, temp;
 cout << "Input elements (" << n << " elements)" << endl;
 for (i=0; i < n; i++)
   cin >> a[i];
  cout<<"Output elements" << endl;
 for (i=0; i < n; i++)
 cout << a[i] << " "; for (i = 0; i < n; i++) { if (a[i] < 0) countOfNegatives++; }
for (i = 0; i < n; i++) sumOfElements += a[i];
 double averageNumber = (double)sumOfElements / n; i = 0; while (i < n && a[i] >= 0) i++;
if (i == n) cout << "\nNo negative elements\n"; else { maxOfNegativeElements = a[i]; for (; i < n; i++) { if (a[i] < 0 && a[i] > maxOfNegativeElements) { maxOfNegativeElements = a[i]; 
} 
} 
} 
}