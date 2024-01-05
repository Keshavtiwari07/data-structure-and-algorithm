vector<int> getSecondOrderElements(int n, vector<int> a) {
  // Write your code here.

  vector<int> vec1(2);

  int slargest = -1;
  int largest = a[0];

  for (int i = 0; i < n; i++) {

    if (a[i] > largest) {
      slargest = largest;
      largest = a[i];
    }
    if (largest > a[i] && slargest < a[i]) {
      slargest = a[i];
    }
  }

  
  int smallest = a[0];
  int ssmallest = INT_MAX;
  for (int i = 0; i < n; i++) {

    if (a[i] < smallest) {
      ssmallest = smallest;
      smallest = a[i];
    }
    if (a[i] > smallest && ssmallest > a[i]) {
      ssmallest = a[i];
    }
  }
  vec1[0]= slargest;
  vec1[1]= smallest;
  
  return vec1;
}