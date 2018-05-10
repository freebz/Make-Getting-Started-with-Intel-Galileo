// 예제 6-8 아두이노 코드로 파일 읽고 쓰기

int getHours() {
  char output[5];
  system(
    "curl http://nextmakemagazine.appspot.com/simple > response.txt"
  );
  FILE *fp;
  fp = fopen("response.txt", "r");
  fgets(output, 5, fp);
  fclose(fp);
  return atoi(output);
}
