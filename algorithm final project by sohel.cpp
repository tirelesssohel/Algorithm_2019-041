
/* Algorithm Final Project
   By Md Sohel Rana
   ID: 19-0-52-801-041
*/

#include <bits/stdc++.h>
using namespace std;

int mc[30][30];
const int N = 50;
int biarr[10];

vector<int>g[N];
bool vis[N];

#define V 5

// for min spanning tree
#define inf 999999
int mn,mincost=0,p[9];
int cost[9][9] = {
   {0, 10, 20},
   {12, 0, 15},
   {16, 18, 0}
};

//all function declaration
void megamenu();
void sorting(), searching(), greedy(), dp(), graph(), stringtree(), exitprogram();
void bubblesort(), quicksort(), insertionsort(), mergesort(), radixsort(), countingsort();
void linearsearch(), binarysearch();
void knapsackproblem(), activityselection();
void largestcommonsub(), matrixchainmul();
void dfsalgo(), bfsalgo(), dijkstraalgo(), floidwarshalalgo(), belmanfordalgo();
void stringmatching(), primsalgo(), kruskalsalgo();


int main(){
    megamenu();
return 0;
}


void megamenu(){
    int option;
    cout << "\n\n-----------------------------------------" << endl;
    cout << "----------------Mega Menu----------------" << endl;
    cout << "\t1. Sorting" << endl;
    cout << "\t2. Searching" << endl;
    cout << "\t3. Greedy algorithm" << endl;
    cout << "\t4. Dynamic programming" << endl;
    cout << "\t5. Graph related" << endl;
    cout << "\t6. String match & Spanning tree" << endl;
    cout << "\t7. Exit" << endl << endl;
    cout << "\t-Select operation ";
    cin >> option;

    switch(option){
        case 1:{
            sorting();
            break;
        }
        case 2:{
            searching();
            break;
        }
        case 3:{
            greedy();
            break;
        }
        case 4:{
            dp();
            break;
        }
        case 5:{
            graph();
            break;
        }
        case 6:{
            stringtree();
            break;
        }
        default:{
            exitprogram();
        }
    }
}





void sorting(){
    int sortoption;
    cout << "\n\n\t-----------------------------------------" << endl;
    cout << "\t-------------Sorting submenu-------------" << endl;
    cout << "\t\t1. Bubble sort" << endl;
    cout << "\t\t2. Quick sort" << endl;
    cout << "\t\t3. Insertion sort" << endl;
    cout << "\t\t4. Merge sort" << endl;
    cout << "\t\t5. Radix sort" << endl;
    cout << "\t\t6. Counting sort" << endl;
    cout << "\t\t7. Exit" << endl;
    cout << "\t\t0. Mega menu" << endl << endl;
    cout << "\t\t-Select operation ";
    cin >> sortoption;

    switch(sortoption){
        case 0:{
            megamenu();
            break;
        }
        case 1:{
            bubblesort();
            break;
        }
        case 2:{
            quicksort();
            break;
        }
        case 3:{
            insertionsort();
            break;
        }
        case 4:{
            mergesort();
            break;
        }
        case 5:{
            radixsort();
            break;
        }
        case 6:{
            countingsort();
            break;
        }
        default:{
            exitprogram();
        }
    }
}







void searching(){
    int searchoption;
    cout << "\n\n\t-----------------------------------------" << endl;
    cout << "\t-------------Searching submenu-------------" << endl;
    cout << "\t\t1. Linear search" << endl;
    cout << "\t\t2. Binary search" << endl;
    cout << "\t\t3. Exit" << endl;
    cout << "\t\t0. Mega menu" << endl << endl;
    cout << "\t\t-Select operation ";
    cin >> searchoption;

    switch(searchoption){
        case 0:{
            megamenu();
            break;
        }
        case 1:{
            linearsearch();
            break;
        }
        case 2:{
            binarysearch();
            break;
        }
        default:{
            exitprogram();
        }
    }
}






void greedy(){
    int greedyoption;
    cout << "\n\n\t-----------------------------------------" << endl;
    cout << "\t-------------Greedy submenu-------------" << endl;
    cout << "\t\t1. Knapsack algorithm" << endl;
    cout << "\t\t2. Activity selection" << endl;
    cout << "\t\t3. Exit" << endl;
    cout << "\t\t0. Mega menu" << endl << endl;
    cout << "\t\t-Select operation ";
    cin >> greedyoption;

    switch(greedyoption){
        case 0:{
            megamenu();
            break;
        }
        case 1:{
            knapsackproblem();
            break;
        }
        case 2:{
            activityselection();
            break;
        }
        default:{
            exitprogram();
        }
    }
}







void dp(){
    int dpoption;
    cout << "\n\n\t-----------------------------------------" << endl;
    cout << "\t-------------DP submenu-------------" << endl;
    cout << "\t\t1. Largest common subsequence" << endl;
    cout << "\t\t2. Matrix chain multiplication" << endl;
    cout << "\t\t3. Exit" << endl;
    cout << "\t\t0. Mega menu" << endl << endl;
    cout << "\t\t-Select operation ";
    cin >> dpoption;

    switch(dpoption){
        case 0:{
            megamenu();
            break;
        }
        case 1:{
            largestcommonsub();
            break;
        }
        case 2:{
            matrixchainmul();
            break;
        }
        default:{
            exitprogram();
        }
    }
}






void graph(){
    int graphoption;
    cout << "\n\n\t-----------------------------------------" << endl;
    cout << "\t-------------Graph submenu-------------" << endl;
    cout << "\t\t1. DFS" << endl;
    cout << "\t\t2. BFS" << endl;
    cout << "\t\t3. Dijkstras algorithm" << endl;
    cout << "\t\t4. Floid warshal algorithm" << endl;
    cout << "\t\t5. Belman ford algorithm" << endl;
    cout << "\t\t6. Exit" << endl;
    cout << "\t\t0. Mega menu" << endl << endl;
    cout << "\t\t-Select operation ";
    cin >> graphoption;

    switch(graphoption){
        case 0:{
            megamenu();
            break;
        }
        case 1:{
            dfsalgo();
            break;
        }
        case 2:{
            bfsalgo();
            break;
        }
        case 3:{
            dijkstraalgo();
            break;
        }
        case 4:{
            floidwarshalalgo();
            break;
        }
        case 5:{
            belmanfordalgo();
            break;
        }
        default:{
            exitprogram();
        }
    }
}






void stringtree(){
    int stoption;
    cout << "\n\n\t-----------------------------------------" << endl;
    cout << "\t-----String & spanning tree submenu------" << endl;
    cout << "\t\t1. String matching" << endl;
    cout << "\t\t2. Prims algorithm" << endl;
    cout << "\t\t3. Krushkals algorithm" << endl;
    cout << "\t\t4. Exit" << endl;
    cout << "\t\t0. Mega menu" << endl << endl;
    cout << "\t\t-Select operation ";
    cin >> stoption;

    switch(stoption){
        case 0:{
            megamenu();
            break;
        }
        case 1:{
            stringmatching();
            break;
        }
        case 2:{
            primsalgo();
            break;
        }
        case 3:{
            kruskalsalgo();
            break;
        }
        default:{
            exitprogram();
        }
    }
}







void exitprogram(){
    cout << "\n\tThanks and bye" << endl;
    exit(0);
}




// 1 functions for bubble sort--------------------------------------------------------------

void bubblesort(){
    int n;
    cout << "Enter number of element ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements \n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
            break;
    }


    cout << "Sorted array \n";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl << endl;
    cout << "1. Go to Mega menu" << endl;
    cout << "2. Stay on current menu" << endl;
    cout << "3. Exit" << endl;
    int bopt;
    cout << "Select option ";
    cin >> bopt;
    if(bopt == 1){
        megamenu();
    }else if(bopt == 2){
        sorting();
    }else{
        exitprogram();
    }
}
// Bubble sort finish-------------------------------------------------------------------



// 3 functions for quick sort---------------------------------------------------------------
int partition(int arr[], int low, int high){

    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++){
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high){
    if (low < high){
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void quicksort(){
    int n;
    cout << "Enter number of element ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements \n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }


    quickSort(arr, 0, n - 1);

    cout << "Sorted array \n";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl << endl;
    cout << "1. Go to Mega menu" << endl;
    cout << "2. Stay on current menu" << endl;
    cout << "3. Exit" << endl;
    int bopt;
    cout << "Select option ";
    cin >> bopt;
    if(bopt == 1){
        megamenu();
    }else if(bopt == 2){
        sorting();
    }else{
        exitprogram();
    }
}

// End of quick sort-----------------------------------------------------------------------


// 2 functions for insertion sort--------------------------------------------------------

void insertionSort(int arr[], int n){
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void insertionsort(){
    int n;
    cout << "Enter number of element ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements \n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    insertionSort(arr, n);

    cout << "Sorted array \n";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl << endl;
    cout << "1. Go to Mega menu" << endl;
    cout << "2. Stay on current menu" << endl;
    cout << "3. Exit" << endl;
    int bopt;
    cout << "Select option ";
    cin >> bopt;
    if(bopt == 1){
        megamenu();
    }else if(bopt == 2){
        sorting();
    }else{
        exitprogram();
    }
}
// finish insertion sort -------------------------------------------------------------


// 3 functions for mergesort--------------------------------------------------------
void merge(int arr[], int l, int m, int r){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];


    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];


    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }


    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }


    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}


void mergeSort(int arr[], int l, int r){
    if (l < r) {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

void mergesort(){
    int n;
    cout << "Enter number of element ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements \n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    mergeSort(arr, 0, n-1);

    cout << "Sorted array \n";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl << endl;
    cout << "1. Go to Mega menu" << endl;
    cout << "2. Stay on current menu" << endl;
    cout << "3. Exit" << endl;
    int bopt;
    cout << "Select option ";
    cin >> bopt;
    if(bopt == 1){
        megamenu();
    }else if(bopt == 2){
        sorting();
    }else{
        exitprogram();
    }
}
// finish merge sort -------------------------------------------------------------------



// 4 function for radix sort ----------------------------------------------------------
int getMax(int arr[], int n){
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}


void countSort(int arr[], int n, int exp){

    int output[n];
    int i, count[10] = { 0 };

    for (i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    for (i = 0; i < n; i++)
        arr[i] = output[i];
}


void radixSort(int arr[], int n){

    int m = getMax(arr, n);

    for (int exp = 1; m / exp > 0; exp *= 10){
        countSort(arr, n, exp);
    }
}


void radixsort(){
    int n;
    cout << "Enter number of element ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements \n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    radixSort(arr, n);

    cout << "Sorted array \n";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl << endl;
    cout << "1. Go to Mega menu" << endl;
    cout << "2. Stay on current menu" << endl;
    cout << "3. Exit" << endl;
    int bopt;
    cout << "Select option ";
    cin >> bopt;
    if(bopt == 1){
        megamenu();
    }else if(bopt == 2){
        sorting();
    }else{
        exitprogram();
    }
}
// Radix sort finish ------------------------------------------------------------------



// 3 function for counting sort--------------------------------------------------------

int getLarge(int a[], int n){
   int max = a[0];
   for(int i = 1; i<n; i++) {
      if(a[i] > max)
         max = a[i];
   }
   return max;
}


void countSort(int a[], int n){
   int output[n+1];
   int max = getLarge(a, n);
   int count[max+1];

   for (int i = 0; i <= max; ++i){
     count[i] = 0;
   }

   for (int i = 0; i < n; i++){
     count[a[i]]++;
   }

   for(int i = 1; i<=max; i++){
      count[i] += count[i-1];
   }

   for (int i = n - 1; i >= 0; i--){
     output[count[a[i]] - 1] = a[i];
     count[a[i]]--;
   }

   for(int i = 0; i<n; i++){
      a[i] = output[i];
   }
}


void countingsort(){
    int n;
    cout << "Enter number of element ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements \n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    countSort(arr, n);

    cout << "Sorted array \n";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl << endl;
    cout << "1. Go to Mega menu" << endl;
    cout << "2. Stay on current menu" << endl;
    cout << "3. Exit" << endl;
    int bopt;
    cout << "Select option ";
    cin >> bopt;
    if(bopt == 1){
        megamenu();
    }else if(bopt == 2){
        sorting();
    }else{
        exitprogram();
    }
}

// counting sort finish--------------------------------------------------------


// 1 function for linear search-------------------------------------------------
void linearsearch(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements " << endl;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << endl << "Enter the item you want to search ";
    int item, index = -1;
    cin >> item;
    for(int i = 0; i < n; i++){
        if(arr[i] == item){
            index = i;
            break;
        }
    }
    if(index == -1){
        cout << "Item doesn't found" << endl;
    }else{
        cout << "Item is in position = " << index + 1 << endl;
    }
    cout << endl << endl;
    cout << "1. Go to Mega menu" << endl;
    cout << "2. Stay on current menu" << endl;
    cout << "3. Exit" << endl;
    int bopt;
    cout << "Select option ";
    cin >> bopt;
    if(bopt == 1){
        megamenu();
    }else if(bopt == 2){
        searching();
    }else{
        exitprogram();
    }
}
// linear search finish ----------------------------------------------------------



// 2 function for binary search ------------------------------------------------
int search(int x, int z, int a){
    int mid = (x + z) / 2;
    if(biarr[mid] == a){
        return mid;
    }else if(biarr[mid] > a){
        int newLast = mid - 1;
        search(x, newLast, a);
    }else{
        int newFirst = mid + 1;
        search(newFirst, z, a);
    }
}


void binarysearch(){
    cout << "Enter 10 array elements" << endl;

    for(int i = 0; i < 10; i++){
        cin >> biarr[i];
    }

    cout << "\nEnter which item you want to search: ";
    int item;
    cin >> item;

    int startIndex = 0, lastIndex = 9;

    int index = search(startIndex, lastIndex, item);

    cout << "Item found at position: " << index+1 << endl;

    cout << endl << endl;
    cout << "1. Go to Mega menu" << endl;
    cout << "2. Stay on current menu" << endl;
    cout << "3. Exit" << endl;
    int bopt;
    cout << "Select option ";
    cin >> bopt;
    if(bopt == 1){
        megamenu();
    }else if(bopt == 2){
        searching();
    }else{
        exitprogram();
    }
}
// binary search finish -------------------------------------------------


// 1 function for knapsack ------------------------------------------------

int max(int a, int b){
   return (a > b) ? a : b;
}


int knapSack(int W, int wt[], int val[], int n){
   int i, j;
   vector<vector<int>> K(n + 1, vector<int>(W + 1));
   for(i = 0; i <= n; i++) {
      for(j = 0; j <= W; j++) {
         if (i == 0 || j == 0)
            K[i][j] = 0;
         else if (wt[i - 1] <= j)
            K[i][j] = max(val[i - 1] + K[i - 1][j - wt[i - 1]], K[i - 1][j]);
         else
            K[i][j] = K[i - 1][j];
      }
   }
   return K[n][W];
}


void knapsackproblem(){
    int n, W;
    cout << "Enter number of items: ";
    cin >> n;
    int val[n], wt[n];
    cout << "Enter values \n" ;
    for(int i = 0; i < n; i++){
        cin >> val[i];
    }
    cout << "Enter weights \n";
    for(int i = 0; i < n; i++){
        cin >> wt[i];
    }
    cout << "\nEnter size of knapsack ";
    cin >> W;

    cout << "Maximum Profit: " << knapSack(W, wt, val, n);
    cout << endl << endl;
    cout << "1. Go to Mega menu" << endl;
    cout << "2. Stay on current menu" << endl;
    cout << "3. Exit" << endl;
    int bopt;
    cout << "Select option ";
    cin >> bopt;
    if(bopt == 1){
        megamenu();
    }else if(bopt == 2){
        greedy();
    }else{
        exitprogram();
    }
}
// finish knapsack problem ----------------------------------------------


// 2 functions for activity selection problem -----------------------------------
void printMaxActivities(int s[], int f[], int n){
    int i, j;

    cout << "\nSelected activities are: ";

    i = 0;
    cout << i << " ";

    for (j = 1; j < n; j++) {
        if (s[j] >= f[i]) {
            cout << j << " ";
            i = j;
        }
    }
}



void activityselection(){
    int n;
    cout << "Enter number of activity: ";
    cin >> n;

    int start[n], finish[n];

    cout << "Enter all starting times \n";
    for(int i = 0; i < n; i++){
        cin >> start[i];
    }

    cout << "\nEnter all sorted finish times \n";
    for(int i = 0; i < n; i++){
        cin >> finish[i];
    }

    printMaxActivities(start, finish, n);
    cout << endl << endl;
    cout << "1. Go to Mega menu" << endl;
    cout << "2. Stay on current menu" << endl;
    cout << "3. Exit" << endl;
    int bopt;
    cout << "Select option ";
    cin >> bopt;
    if(bopt == 1){
        megamenu();
    }else if(bopt == 2){
        greedy();
    }else{
        exitprogram();
    }
}

// activity selection finish -----------------------------------------------------



// 3 functions for LCS -------------------------------------------------------------------
int large(int a, int b){
   return (a > b) ? a : b;
}

void lcs(string X, string Y, int m, int n){
   int L[m + 1][n + 1];
   int i, j, index;
   for (i = 0; i <= m; i++) {
      for (j = 0; j <= n; j++) {
         if (i == 0 || j == 0)
            L[i][j] = 0;
         else if (X[i - 1] == Y[j - 1]) {
            L[i][j] = L[i - 1][j - 1] + 1;
         } else
            L[i][j] = large(L[i - 1][j], L[i][j - 1]);
      }
   }
   index = L[m][n];
   char LCS[index + 1];
   LCS[index] = '\0';
   i = m, j = n;
   while (i > 0 && j > 0) {
      if (X[i - 1] == Y[j - 1]) {
         LCS[index - 1] = X[i - 1];
         i--;
         j--;
         index--;
      } else if (L[i - 1][j] > L[i][j - 1])
         i--;
      else
         j--;
   }
   cout << "\nLargest LCS: " << LCS << endl;
   cout << "Length of LCS: " << L[m][n];
}


void largestcommonsub(){
    string x;
    string y;
    cout << "Enter first string: ";
    cin >> x;
    cout << "Enter second string: ";
    cin >> y;
    int m = x.size();
    int n = y.size();

    lcs(x, y, m, n);

    cout << endl << endl;
    cout << "1. Go to Mega menu" << endl;
    cout << "2. Stay on current menu" << endl;
    cout << "3. Exit" << endl;
    int bopt;
    cout << "Select option ";
    cin >> bopt;
    if(bopt == 1){
        megamenu();
    }else if(bopt == 2){
        dp();
    }else{
        exitprogram();
    }
}

// largest common subsequence finish -----------------------------------------------



// 2 functions for matrix chain multiplication -------------------------------------
int dp(int c[], int i, int j){

    if(i == j){
        return 0;
    }

    if(mc[i][j] != -1){
        return mc[i][j];
    }

    mc[i][j] = INT_MAX;
    for(int k = i; k < j; k++){
        mc[i][j] = min(mc[i][j], dp(c, i, k)+ dp(c, k+1, j)+c[i-1]*c[k]*c[j]);
    }

    return mc[i][j];
}



void matrixchainmul(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements " << endl;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    memset(mc, -1, sizeof(mc));
    cout << "Minimum number of multiplication: " << dp(arr, 1, n-1) << endl;

    cout << endl << endl;
    cout << "1. Go to Mega menu" << endl;
    cout << "2. Stay on current menu" << endl;
    cout << "3. Exit" << endl;
    int bopt;
    cout << "Select option ";
    cin >> bopt;
    if(bopt == 1){
        megamenu();
    }else if(bopt == 2){
        dp();
    }else{
        exitprogram();
    }
}
// finish matrix chain multiplication ---------------------------------------




// 2 functions for DFS algorithm ------------------------------------------------
void dfs(int vertex){
    cout << vertex << " ";
    vis[vertex] = true;
    for(int child : g[vertex]){
        if(vis[child]) continue;
        dfs(child);
    }
}


void dfsalgo(){
    int v, e;
    cout << "Enter number of vertices & edges: ";
    cin >> v >> e;
    cout << "Enter " << e << " edges " << endl;
    for(int i = 0; i < e; i++){
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    cout << "\nList of visited edges" << endl;
    dfs(1);
    memset(vis, 0, N);

    cout << endl << endl;
    cout << "1. Go to Mega menu" << endl;
    cout << "2. Stay on current menu" << endl;
    cout << "3. Exit" << endl;
    int bopt;
    cout << "Select option ";
    cin >> bopt;
    if(bopt == 1){
        megamenu();
    }else if(bopt == 2){
        graph();
    }else{
        exitprogram();
    }
}

// DFS finish --------------------------------------------------------------------




// 2 functions for BFS algorithm -------------------------------------------------
void bfs(int source){
    queue<int>q;
    q.push(source);
    vis[source] = 1;
    while(!q.empty()){
        int cur_v = q.front();
        q.pop();
        cout << cur_v << " ";
        for(int child : g[cur_v]){
            if(!vis[child]){
                q.push(child);
                vis[child] = 1;
            }
        }
    }
    cout << endl;
}



void bfsalgo(){
    int e;
    cout << "Enter number of edges: ";
    cin >> e;
    cout << "Enter all edges" << endl;

    for(int i = 1; i <= e; i++){
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    cout << "\nList of visited vertices: " << endl;
    bfs(1);
    memset(vis, 0, N);

    cout << endl << endl;
    cout << "1. Go to Mega menu" << endl;
    cout << "2. Stay on current menu" << endl;
    cout << "3. Exit" << endl;
    int bopt;
    cout << "Select option ";
    cin >> bopt;
    if(bopt == 1){
        megamenu();
    }else if(bopt == 2){
        graph();
    }else{
        exitprogram();
    }
}
// BFS algorithm finish ----------------------------------------------------------------



// 2 functions for dijkstras algorithm --------------------------------------------------
int min_dist(int dist[], bool visited[]){
   int minimum=INT_MAX,ind;
   for(int k=0; k<6; k++) {
      if(visited[k]==false && dist[k]<=minimum) {
         minimum=dist[k];
         ind=k;
      }
   }
   return ind;
}


void greedy_dijsktra(int gp[6][6],int src){
   int dist[6];
   bool visited[6];
   for(int k = 0; k<6; k++) {
      dist[k] = INT_MAX;
      visited[k] = false;
   }
   dist[src] = 0;
   for(int k = 0; k<6; k++) {
      int m=min_dist(dist,visited);
      visited[m]=true;
      for(int k = 0; k<6; k++) {
         if(!visited[k] && gp[m][k] && dist[m]!=INT_MAX && dist[m]+gp[m][k]<dist[k])
            dist[k]=dist[m]+gp[m][k];
      }
   }
   cout<<"\nVertex\t\tdist from source vertex"<<endl;
   for(int k = 0; k<6; k++) {
      char str=65+k;
      cout<<str<<"\t\t\t"<<dist[k]<<endl;
   }
}



void dijkstraalgo(){
    int gp[6][6]= {
      {0, 1, 2, 0, 0, 0},
      {1, 0, 0, 5, 1, 0},
      {2, 0, 0, 2, 3, 0},
      {0, 5, 2, 0, 2, 2},
      {0, 1, 3, 2, 0, 1},
      {0, 0, 0, 2, 1, 0}
   };
   greedy_dijsktra(gp,0);

   cout << endl << endl;
    cout << "1. Go to Mega menu" << endl;
    cout << "2. Stay on current menu" << endl;
    cout << "3. Exit" << endl;
    int bopt;
    cout << "Select option ";
    cin >> bopt;
    if(bopt == 1){
        megamenu();
    }else if(bopt == 2){
        graph();
    }else{
        exitprogram();
    }
}
// finish dijkstra algorithm -------------------------------------------------------------------------------------




// 2 functions for floid warshals algorithms------------------------------------------------------------------
void floyds(int b[][3]){
   int i, j, k;
   for (k = 0; k < 3; k++) {
      for (i = 0; i < 3; i++) {
         for (j = 0; j < 3; j++) {
            if ((b[i][k] * b[k][j] != 0) && (i != j)) {
               if ((b[i][k] + b[k][j] < b[i][j]) || (b[i][j] == 0)) {
                  b[i][j] = b[i][k] + b[k][j];
               }
            }
         }
      }
   }
   for (i = 0; i < 3; i++) {
      cout<<"\nMinimum Cost With Respect to Node:"<<i<<endl;
      for (j = 0; j < 3; j++) {
         cout<<b[i][j]<<"\t";
      }
   }
}



void floidwarshalalgo(){
   int b[3][3];
   for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
         b[i][j] = 0;
      }
   }
   b[0][1] = 10;
   b[1][2] = 15;
   b[2][0] = 12;

   floyds(b);

   cout << endl << endl;
    cout << "1. Go to Mega menu" << endl;
    cout << "2. Stay on current menu" << endl;
    cout << "3. Exit" << endl;
    int bopt;
    cout << "Select option ";
    cin >> bopt;
    if(bopt == 1){
        megamenu();
    }else if(bopt == 2){
        graph();
    }else{
        exitprogram();
    }
}
// finish floid warshals algorithms ----------------------------------------------------------------------





void belmanfordalgo(){

}


// 1 function for string matching -----------------------------------------------------------------------
void stringmatching(){
    char mainString[100];
    int size, i, j, k, startIndex = 0;

    printf("Enter main string: ");
    scanf("%s", mainString);

    printf("\nEnter pattern string size: ");
    scanf("%d", &size);

    char patString[size+1], repString[size+1];

    printf("Enter pattern string: ");
    scanf("%s", patString);
    printf("\nEnter replacement string: ");
    scanf("%s", repString);

    for(i = 0; i < 100; i++){
        if(mainString[i] == patString[0]){
            for(j = i+1; j < i + size; j++){
                if(mainString[j] == patString[j-i]){
                    startIndex++;
                }
            }
            if(startIndex == size-1){
                for(j = i; j < i+size; j++){
                    mainString[j] = repString[j-i];
                }
                startIndex = 0;
            }

        }
    }
    printf("After replacing: ");
    printf("%s\n", mainString);

    cout << endl << endl;
    cout << "1. Go to Mega menu" << endl;
    cout << "2. Stay on current menu" << endl;
    cout << "3. Exit" << endl;
    int bopt;
    cout << "Select option ";
    cin >> bopt;
    if(bopt == 1){
        megamenu();
    }else if(bopt == 2){
        stringtree();
    }else{
        exitprogram();
    }
}
// string matching finish ----------------------------------------------------------------------------------



// 3 functions for prims algorithm ------------------------------------------------------------------------
bool createsMST(int u, int v, vector<bool> inMST){
   if (u == v)
      return false;
   if (inMST[u] == false && inMST[v] == false)
      return false;
   else if (inMST[u] == true && inMST[v] == true)
      return false;
   return true;
}



void printMinSpanningTree(int cost[][V]){
   vector<bool> inMST(V, false);
   inMST[0] = true;
   int edgeNo = 0, MSTcost = 0;
   while (edgeNo < V - 1) {
      int min = INT_MAX, a = -1, b = -1;
      for (int i = 0; i < V; i++) {
         for (int j = 0; j < V; j++) {
            if (cost[i][j] < min) {
               if (createsMST(i, j, inMST)) {
                  min = cost[i][j];
                  a = i;
                  b = j;
               }
            }
         }
      }
      if (a != -1 && b != -1) {
         cout<<"Edge "<<edgeNo++<<" : ("<<a<<" , "<<b<<" ) : cost = "<<min<<endl;
         MSTcost += min;
         inMST[b] = inMST[a] = true;
      }
   }
   cout<<"Cost of Minimum spanning tree ="<<MSTcost;
}


void primsalgo(){
    int cost[][V] = {
      { INT_MAX, 12, INT_MAX, 25, INT_MAX },
      { 12, INT_MAX, 11, 8, 12 },
      { INT_MAX, 11, INT_MAX, INT_MAX, 17 },
      { 25, 8, INT_MAX, INT_MAX, 15 },
      { INT_MAX, 12, 17, 15, INT_MAX },
   };
   cout<<"\nThe Minimum spanning tree for the given tree is :\n";
   printMinSpanningTree(cost);

   cout << endl << endl;
    cout << "1. Go to Mega menu" << endl;
    cout << "2. Stay on current menu" << endl;
    cout << "3. Exit" << endl;
    int bopt;
    cout << "Select option ";
    cin >> bopt;
    if(bopt == 1){
        megamenu();
    }else if(bopt == 2){
        stringtree();
    }else{
        exitprogram();
    }
}

// finish prims algorithm ---------------------------------------------------------------------------





// 3 functions for kruskals algorithm-----------------------------------------------------------------
int applyfind(int i){
   while(p[i])
      i=p[i];
   return i;
}


int applyunion(int i,int j){
   if(i!=j) {
      p[j]=i;
      return 1;
   }
   return 0;
}


void kruskalsalgo(){
    int a,b,u,v,n,ne=1;
   n = 3;
   printf("Minimum Cost Spanning Tree: \n");
   while(ne < n) {
      mn = inf;
      for(int i=1; i<=n; i++) {
         for(int j=1; j <= n; j++) {
            if(cost[i][j] < mn) {
               mn=cost[i][j];
               a=u=i;
               b=v=j;
            }
         }
      }
      u=applyfind(u);
      v=applyfind(v);
      if(applyunion(u,v)) {
         printf("%d -> %d\n",a,b);
         mincost +=mn;
      }
      cost[a][b]=cost[b][a]=999;
   }
   printf("\n\tMinimum cost = %d\n",mincost);

   cout << endl << endl;
    cout << "1. Go to Mega menu" << endl;
    cout << "2. Stay on current menu" << endl;
    cout << "3. Exit" << endl;
    int bopt;
    cout << "Select option ";
    cin >> bopt;
    if(bopt == 1){
        megamenu();
    }else if(bopt == 2){
        stringtree();
    }else{
        exitprogram();
    }
}

// finish kruskals algorithms -------------------------------------------------------------------------------


