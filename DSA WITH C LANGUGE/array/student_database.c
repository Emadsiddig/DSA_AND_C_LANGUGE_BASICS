#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void clear_input_buffer();

void addStudent();
void studenRecord();
void searchStudent();
void delet();


struct student{
    char first_name[20];
    char last_name[20];
    int roll_no;
    char class[20];
    char vill[20]; 
    float per; 
};

int main(){
   
    int choice=0; 

    while (choice != 5)
    {
        printf("\n\n\n\n\n_____STUDENT DATABASE MANAGEMENT SYSTEM______\n\n\n");
        printf("1. Add student record.\n");
        printf("2. View all student records.\n");
        printf("3. Search for a student.\n");
        printf("4. Delete a record.\n");
        printf("5. EXIT\n");
        printf("_____________________________________________\n");
        printf("Enter your choice: ");
      
        if (scanf("%d", &choice) != 1) { 
            clear_input_buffer();
            choice = 0; 
            continue;
        }

        switch (choice)
        {
        case 1:
          addStudent();
         break;
        case 2:
          studenRecord();
           break;
        case 3:
        searchStudent();
           break;
        case 4:
          delet();
            break; 
        case 5:
            printf("\n\nExiting the system. Goodbye!\n");
            break;
        default: 
            printf("\n*** ERROR: Please enter a valid number (1 to 5). ***\n");
           
            break;
        }
    }
   return 0; 
}

//TO FIX INPUT ISSUSE
void clear_input_buffer() {
    int c;
    
    while ((c = getchar()) != '\n' && c != EOF) { }
}
void addStudent(){
    char another;
    FILE *fp;
    struct student info;
    clear_input_buffer(); 

    do{
        printf("\n\n_________ADD STUDENT INFORMATION_____\n");
    
        fp=fopen("student_info.dat","a+");
        if(fp==NULL){
            printf("ERROR: CAN'T OPEN FILE for writing.");
            return; 
        }
        printf("Enter the first name: ");
        fgets(info.first_name, sizeof(info.first_name), stdin);
        info.first_name[strcspn(info.first_name, "\n")] = 0;

        printf("Enter the last name: ");
        fgets(info.last_name, sizeof(info.last_name), stdin);
        info.last_name[strcspn(info.last_name, "\n")] = 0;

        printf("Enter roll no: ");
        scanf("%d",&info.roll_no);
        clear_input_buffer(); 

        printf("Enter class: ");
        fgets(info.class, sizeof (info.class), stdin);
        info.class[strcspn(info.class, "\n")] = 0;

        printf("Enter address: ");
        fgets(info.vill, sizeof (info.vill), stdin);
        info.vill[strcspn(info.vill, "\n")] = 0; 
        
        printf("Enter percentage: ");
        scanf("%f",&info.per);
        
        fwrite(&info,sizeof(struct student),1,fp);
        fclose(fp);
        
        printf("Record stored successfully.\n");

        printf("\n\nDo you want to add another student (y/n)? ");
        
        scanf(" %c",&another); 
        clear_input_buffer(); 
    }
    while (another == 'y' || another == 'Y');
   
}  

void studenRecord(){
  FILE *fp;
  struct student info;

  fp=fopen("student_info.dat","r"); 
  printf("\n\n________ALL STUDENT RECORDS____\n\n");
  
  if(fp==NULL){
    printf("\n*** ERROR: There are no student records to display. ***\n");
    return; 
  }

 
  while (fread(&info,sizeof(struct student),1,fp) == 1) 
  {
   
    printf("\n Student Name: %s %s",info.first_name,info.last_name);
    printf("\n Roll No: %d",info.roll_no);
    printf("\n Class: %s ",info.class);
    printf("\n Address: %s",info.vill);
    printf("\n Percentage: %.2f%%",info.per); 
    printf("\n____________________________\n");
  }
  
  fclose(fp);
}
void searchStudent(){
    struct student info;
    FILE *fp;
    int roll_no,found=0;
    
    printf("\n\n________SEARCH STUDENT_____\n");
    printf("Enter the Roll Number to search: ");
   
    if (scanf("%d",&roll_no) != 1) {
        printf("\n*** ERROR: Invalid input for Roll Number. ***\n");
        clear_input_buffer();
        return;
    }

   
    fp=fopen("student_info.dat","r"); 
    if(fp==NULL){
        printf("\n*** ERROR: Cannot open file or no records exist. ***\n");
        return;
    }
    
    printf("\nSearching for Roll No: %d...\n", roll_no);

  
    while (fread(&info,sizeof(struct student),1,fp) == 1)
    {
        if(info.roll_no == roll_no){
            found = 1; 
            printf("\n*** RECORD FOUND! ***\n");
            printf(" Student Name: %s %s",info.first_name,info.last_name);
            printf("\n Roll No: %d",info.roll_no);
            printf("\n Class: %s ",info.class);
            printf("\n Address: %s",info.vill);
            printf("\n Percentage: %.2f%%",info.per);
            printf("\n____________________________\n");
            break; 
        }
    }
    
    if(!found){
        printf("\n*** RECORD NOT FOUND for Roll No. %d ***\n", roll_no);
    }
    
    fclose(fp);
}


// Function to Delete a Student Record
void delet(){
  FILE *fp,*fp1;
  struct student info;
  int roll_no,found=0;

  printf("\n_____DELETE STUDENT RECORD___\n");
  printf("Enter Roll Number to delete: ");
  
  // Read the Roll Number to delete
  if (scanf("%d",&roll_no) != 1) {
        printf("\n*** ERROR: Invalid input for Roll Number. ***\n");
        clear_input_buffer();
        return;
  }
  fp=fopen("student_info.dat","r"); 
  if(fp==NULL){
    printf("\n*** ERROR: Cannot open main file or no records exist. ***\n");
    return;
  }

  fp1=fopen("temp.dat","w"); 
  if(fp1==NULL){
      printf("\n*** ERROR: Cannot create temporary file. ***\n");
      fclose(fp);
      return;
  }
  
  printf("Searching for Roll No %d to delete...\n", roll_no);

  while(fread(&info,sizeof(struct student),1,fp) == 1){
     if(info.roll_no == roll_no){
        found = 1; // Found the record to be deleted
        printf("Record for %s %s (Roll No: %d) found and skipped for deletion.\n", info.first_name, info.last_name, info.roll_no);
     }
     else{
     // Write all OTHER records to the temporary file
     fwrite(&info,sizeof(struct student),1,fp1);
     }
  }

  fclose(fp);
  fclose(fp1);
  
  if(found){
    // Delete the old, original file
    remove("student_info.dat");
    // Rename the temporary file to the original file name
    rename("temp.dat","student_info.dat");
    printf("\n\n___RECORD DELETED SUCCESSFULLY!___\n");
  }
  else{
    remove("temp.dat"); 
    printf("\n\n*** RECORD NOT FOUND for Roll No. %d. No changes made. ***\n", roll_no);
  }
}