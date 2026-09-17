int main(void){
  string input;
  printf("Enter some text will yah: ");
  scanf("%d", &input);
  
  char *newptr= NULL;
  char *chunks= strtok(line, " ", &newptr);
  printf("Tokens:\n");
  while((chunks=strtok(Null, " ", &newptr))){
    printf("%s\n", chunks);
  }
  free(input);
  return 0;
}
