#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define false 0
#define true 1

struct employee{
  char name[80];
  struct address{
    char street[49];
    char city[35];
    char state[3];
    char zip[6];
  } address;
  double salary;
};


int main();
void parse_input(char * buffer, struct employee * employee);
void show_employee(struct employee employee);
void show_employee_db(int total_employees, struct employee employees[]);


int main(){
  struct employee database[60];
  char stop[]=":X\n";    
  char showdata[]=":S\n";
  int count=0;

  while(true){
      char buffer[1000];
      
      printf("Enter employee data [:X to exit, :S to show database]:\n");
      fgets(buffer, 1000, stdin);
      
      
      if(strcmp(buffer, stop)==0){
          return 0;
      }
      else if(strcmp(buffer, showdata)==0){
          show_employee_db(count, database);
      }
      else{
          buffer[strlen(buffer)] = '\0';
          parse_input(buffer, &database[count++]);
      }
      printf("\n");
  }
    
  return 0;
  
}

void parse_input(char * buffer, struct employee * employee){
  char tmp[1000];
  int j = 0;
  int num = 0;
  for(int i = 0; buffer[i] != '\0'; i++){
    if(buffer[i] == ';'){
      tmp[j] = '\0';
      switch(num++){
        
        case 0:
          strcpy(employee->name, tmp);
          break;

        case 1:
          strcpy((employee->address).street, tmp);
          break;

        case 2:
          strcpy((employee->address).city, tmp);
          break;

        case 3:
          strcpy((employee->address).state, tmp);
          break;

        case 4:
          strcpy((employee->address).zip, tmp);
          break;
        
      }
      j = 0;
    }
    else{
      tmp[j] = buffer[i];
      j++;
    }
  }
  tmp[j] = '\0';

  employee->salary = strtod(tmp, NULL);
}

void employee(struct employee employee){
  printf("\nEmployee Record:\n----------\n");
  printf("\tName: %s \n", employee.name);
  printf("\tStreet Address: %s \n", (employee.address).street);
  printf("\tCity: %s \n", (employee.address).city);
  printf("\tState: %s \n", (employee.address).state);
  printf("\tZip: %s \n", (employee.address).zip);
  printf("\tSalary: $%.2f \n", employee.salary);
  printf("----------\n\n");
}

void show_employee_db(int total_employees, struct employee employees[]){
  printf("\nCurrent Employee Database: \n\n\n");
  for(int i = 0; i < total_employees; i++){
    employee(employees[i]);
  }
}