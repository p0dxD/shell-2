#include "shell.h"

int main(int argc, char *argv[]) {
  char cmd[MAX_STRING];
  char current_char;
  int loc = 0;
printf("%s\n", "Welcome to shell remake 101\n");
while(1){//add check for MAX_STRING
write(1, MESSSAGE, 8);//initial shell message
int loc = 0;

  while(read(0, &current_char, 1) > 0 && current_char != '\n'){
    //this will take care of the " entered during input of string
    if(current_char == '\"'){//check if they will iput more
      char temp = current_char;//save current char
      if(read(0, &current_char, 1) > 0 && current_char == '\n'){
        //it is " do not save it
        write(1, NEW_LINE_CMD, 2);//print >
        while(read(0, &current_char, 1) > 0 && current_char != '\"'){
              if(current_char == '\n'){
                write(1, NEW_LINE_CMD, 2);
                continue;
              }else{
                cmd[loc++] = current_char;
              }
        }
      }else{
        cmd[loc++] = temp;
        cmd[loc++] = current_char;
      }
    }else
      cmd[loc++] = current_char;
  }

  //null terminate string
  if(current_char == '\n')
    cmd[loc] = '\0';
  else
    cmd[loc+1] = '\0';


  printf("Command got %s\n",cmd );

  process_built_cmd(cmd);
}
  return 0;
}


int process_built_cmd(char *cmd){
  if(strcmp(cmd,"exit")==0){
    printf("%s\n", "Exiting.");
    exit(0);
  }else if(strcmp(cmd,"help")==0){
    print_help();
    return 0;
  }

return 1;
}


void print_help(void){
  printf("%s\n", "The following are the allowed commands: \n \t\texit\n\t\thelp\n");
}


int process_cmd(char *cmd){




  return 0;
}
