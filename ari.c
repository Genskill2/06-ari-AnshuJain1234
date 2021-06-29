string ari(string para){
float numofchar=0;
float numofwords=0;
float numofsent=0;
  
  for(int i=0; i<strlen(para);i++){
   //number of characters
    if((int)(para[i])>=65 && (int)(para[i])<=90 ){
      numofchar+=1;
      }
    if((int)(para[i])>=97 && (int)(para[i])<=122){  
      numofchar+=1;
      }
    if((int)(para[i])>=48 && (int)(para[i])<=57){  
      numofchar+=1;
      }  
   //number of words
    if((int)para[i]==32){
     numofwords+=1;
     }
    
  //number of sentences
    if( para[i]=='.' || para[i]=='?' || para[i]=='!'){
      numofsent+=1;
     }
  }
  /*printf("no. of char:%f\n", numofchar);
  printf("no. of words:%f\n", numofwords);
  printf("no. of sentences:%f\n", numofsent);*/
  
  float x=(4.71*(numofchar/numofwords))+(0.5*(numofwords)/numofsent)-21.43;
  
  //printf("the value of x is:%i\n",(int)x+1);
  string s;
  int y= (int)x+1;
  if (y==1){
     s="Kindergarten";
    }
  else if (y==2){
     s="First/Second Grade";
    }  
  else if (y==3){
     s="Third Grade";
    }
  else if (y==4){
     s="Fourth Grade";
    }
  else if (y==5){
     s="Fifth Grade";
    }
  else if (y==6){
     s="Sixth Grade";
    }
  else if (y==7){
     s="Seventh Grade";
    } 
  else if (y==8){
     s="Eighth Grade";
    } 
  else if (y==9){
     s="Ninth Grade";
    } 
  else if (y==10){
     s="Tenth Grade";
    } 
  else if (y==11){
     s="Eleventh Grade";
    } 
  else if (y==12){
     s="Twelfth Grade";
    } 
  else if (y==13){
     s="College Student";
    } 
  else{
     s="Professor";
   }                
  return s;
  }
