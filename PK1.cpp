#include <iostream> 
#include <cstring> 
#include <string> 
#include <clocale> 
#pragma warning(disable : 4996) 
 
using namespace std; 
int main() { 
 setlocale(LC_ALL, "english"); 
 int n; 
 
 cout << "Enter the number of books in the library: "; 
 cin >> n; 
 cin.ignore(); 
 char** a = new char* [n]; 
 char** b = new char* [n]; 
 int* c = new int[n]; 
 int* d = new int[n]; 
 
 for (int i = 0; i < n; i++) { 
  cout << "Enter the name of the book " << i + 1 << ": "; 
  char buffer[100]; 
  cin.getline(buffer, 100); 
  a[i] = new char[strlen(buffer) + 1]; 
  strcpy(a[i], buffer); 
  cout << "Enter the author of the book " << i + 1 << ": "; 
  cin.getline(buffer, 100); 
  b[i] = new char[strlen(buffer) + 1]; 
  strcpy(b[i], buffer); 
  cout << "Enter the year of publication of the book " << i + 1 << ": "; 
  cin >> c[i]; 
  cin.ignore(); 
  cout << "Enter the number of copies of the book: " << i + 1 << ": "; 
  cin >> d[i]; 
  cin.ignore(); 
 } 
 
 for (int i = 0; i < n - 1; i++) { 
  for (int j = i + 1; j < n; j++) { 
   if (strcmp(a[i], a[j]) > 0) { 
    swap(a[i], a[j]); 
    swap(b[i], b[j]); 
    swap(c[i], c[j]); 
    swap(d[i], d[j]); 
   } 
  } 
 } 
 
 for (int i = 0; i < n; i++) { 
  cout << i + 1 << ". " << a[i] << " - Автор: " << b[i] << ", Год издания: " << c[i] << ", Количество копий: " << d[i] << endl; 
 } 
 
 for (int i = 0; i < n; i++) { 
  delete[] a[i], b[i]; 
 } 
 delete[] a, b, c, d; 
 
 return 0; 
}
