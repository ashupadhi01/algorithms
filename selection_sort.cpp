void selection_sort(vector <int>& v) {
    int temp;
  
    for(int i = 0; i < v.size() - 1; i++) {
      for(int j = i + 1; j < v.size(); j++) {
          if(v[i] > v[j]) {
            temp = v[j];
            v[j] = v[i];
            v[i] = temp;
          }
      }
    }
  
}
