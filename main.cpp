#include <iostream>
#include <fstream>
#include <random>
#include <chrono>
#include "insert_sort.h"
#include "count_sort.h"
#include "bubble_sort.h"

using namespace std;

const int DATA_SIZE = 10000;
const string DATA_FILE = "data.txt";

/* handles the menu navigation
 */
void menu();
/* generates random numbers and outputs them in a file
 * string file: the file path/name
 * int size: data set size
 */
void gen_rand(string file, int size);

int main(){

  menu();
  return 0;
}

void menu(){
  insert_sort insert;
  count_sort count;
  bubble_sort bubble;
  char choice = '0';
  bool is_gen = false;
  while (choice != 'q'){
    switch(choice)
    {
      //generate numbers
      case '1':
        cout << "Generating Data..." << endl;
        gen_rand(DATA_FILE, DATA_SIZE);
        is_gen = true;
        cout << "Data is successfully generated" << endl;
        cout << "Please check out the data.txt folder. (dont close the program)" << endl;
        cin.get();
        cin.get();
        choice = '0';
        break;

      //insertion sort
      case '2':
        if(is_gen){
          cout << "Sorting data..." << endl;
          insert.read(DATA_FILE, DATA_SIZE);

          auto start = chrono::high_resolution_clock::now();
          insert.sort();
          auto end = chrono::high_resolution_clock::now();
        
          auto duration = chrono::duration_cast<chrono::microseconds>(end - start);
          cout << "Insertion sort completed in " << duration.count() << " microseconds" << endl;

          insert.write(DATA_FILE);
          cout << "Data successfully sorted" << endl;
          cout << "Please check out the data.txt file." << endl;
          cin.get();
          cin.get();
          is_gen = false;
        }
        else
          cout << "Please generate new data first" << endl << endl;
        choice = '0';
        break;

      //counting sort
      case '3':
        if(is_gen){
          cout << "Sorting data..." << endl;
          count.read(DATA_FILE, DATA_SIZE);

          auto start = chrono::high_resolution_clock::now();
          count.sort();
          auto end = chrono::high_resolution_clock::now();
        
          auto duration = chrono::duration_cast<chrono::microseconds>(end - start);
          cout << "Counting sort completed in " << duration.count() << " microseconds" << endl;

          count.write(DATA_FILE);
          cout << "Data successfully sorted" << endl;
          cout << "Please check out the data.txt file." << endl;
          cin.get();
          cin.get();
          is_gen = false;
        }
        else
          cout << "Please generate new data first" << endl << endl;
        choice = '0';
        break;

      case '4':
        if(is_gen){
          cout << "Sorting data..." << endl;
          bubble.read(DATA_FILE, DATA_SIZE);

          auto start = chrono::high_resolution_clock::now();
          bubble.sort();
          auto end = chrono::high_resolution_clock::now();
        
          auto duration = chrono::duration_cast<chrono::microseconds>(end - start);
          cout << "Bubble sort completed in " << duration.count() << " microseconds" << endl;

          bubble.write(DATA_FILE);
          cout << "Data successfully sorted" << endl;
          cout << "Please check out the data.txt file." << endl;
          cin.get();
          cin.get();
          is_gen = false;
        }
        else
          cout << "Please generate new data first" << endl << endl;
        choice = '0';
        break;

      case 'q':
        break;
      default:
        cout << "What would you like to do" << endl;
        cout << "1: Generate data" << endl;
        cout << "2: Insertion sort" << endl;
        cout << "3: Counting sort" << endl;
        cout << "4: Bubble sort" << endl;
        cout << "q: quit" << endl;
        cout << "Insert choice: " << endl;
        cin >> choice;
        break;
    }
  }
}

void gen_rand(string file, int size){
  //sets up random number generator
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<int> dist(1, 1000);
  
  //sets up file stream
  ofstream data;
  data.open(file, ios::trunc);

  //inserts data into file
  for(int i = 0; i < size; i++)
    data << dist(gen) << ' ';

  data.close();
}
